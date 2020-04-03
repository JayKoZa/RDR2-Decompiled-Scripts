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
	struct<49> Local_18 = { 0, 0, 0, 7, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 255, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255 } ;
	var uLocal_67 = 255;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	struct<13> Local_76[7];
	struct<1228> Local_168 = { 0, 0, 0, 0, 32, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_1396 = -1;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, -1, -1, 255 } ;
#endregion

void __EntryFunction__()
{
	struct<2> Var0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(ScriptParam_0);
	Local_168.f_2 = 0;
	Local_168 = ScriptParam_0;
	Local_168.f_1179 = ScriptParam_0.f_9;
	Local_168.f_1 = ScriptParam_0;
	func_2(6);
	Var0 = { ScriptParam_0.f_7 };
	func_3(Var0);
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		(Local_76[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/])->f_6 = { ScriptParam_0.f_1 };
	}
	while (!func_4())
	{
		func_5(&Local_18, &Local_76, &Local_168);
		BUILTIN::WAIT(0);
	}
	func_6(Var0, Local_18.f_48 == PLAYER::PLAYER_ID(), Local_18.f_48 == 255);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_7(&Local_18);
	}
	func_8(&Local_18, &Local_168);
	func_9();
}

void func_1(int iParam0)
{
	func_10(7, iParam0);
	func_11();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_18, 58, 41);
	func_12(NETWORK::_0xBA24095EA96DFE17(&Local_18), 58, "m_IRON_HostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_76, 92, 42);
	func_13(NETWORK::_0x690806BC83BC8CA2(Local_76[0 /*13*/]), 92, "m_IRON_PlayerData");
	func_14(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(2);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

void func_2(int iParam0)
{
	if (Global_1102099->f_935.f_27 != iParam0)
	{
		Global_1102099->f_935.f_27 = iParam0;
	}
}

void func_3(struct<2> Param0)
{
	func_15(Param0, 1, 1, 1);
}

int func_4()
{
	if (Local_168.f_2 >= 15)
	{
		return 1;
	}
	if (func_16(0, 0))
	{
		return 1;
	}
	if (func_17(Local_168.f_1227, 1, 0))
	{
		return 1;
	}
	if (SCRIPTS::_0x54AE4FDEEFEAB77E() != 0)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_18(), -1, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, var uParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_19(uParam0, uParam1, iParam2);
	}
	func_20(uParam0, uParam1, iParam2);
	func_21(uParam0, (*uParam1)[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/], iParam2);
	func_22(uParam0, (*uParam1)[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/], iParam2, 0);
	func_23(iParam2);
	func_24();
}

void func_6(struct<2> Param0, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		func_25(Param0, 0, 2, 0);
	}
	else if (bParam2)
	{
		func_25(Param0, 0, 0, 0);
	}
	else
	{
		func_25(Param0, 0, 1, 0);
	}
	if (func_26(Param0))
	{
		func_27(Param0);
	}
}

void func_7(var uParam0)
{
	if (PATHFIND::_0x65A8196B8D7F5E0B(uParam0->f_34))
	{
		PATHFIND::_0x4907D0E4FB26EE65(uParam0->f_34);
	}
}

void func_8(var uParam0, int iParam1)
{
	func_28();
	func_29();
	func_30(iParam1);
	func_31(iParam1);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	NETWORK::_0x455156F47DC6B78C(1);
	func_32(&(iParam1->f_167), 1);
	func_33(&(iParam1->f_182));
	func_34(&(iParam1->f_1140), 1);
	MISC::CLEAR_BIT(&(iParam1->f_182.f_11.f_159), 13);
	func_35();
	func_36(0);
	func_37(1);
	if (func_38(3))
	{
		func_39(0);
	}
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 0);
	PED::SET_PED_RESET_FLAG(func_40(PLAYER::PLAYER_PED_ID()), 105, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_40(PLAYER::PLAYER_PED_ID()), 0, true);
	func_41();
	func_42();
	if (PATHFIND::_0x65A8196B8D7F5E0B(iParam1->f_1237))
	{
		PATHFIND::_0x4907D0E4FB26EE65(iParam1->f_1237);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_1180))
	{
		VOLUME::_DELETE_VOLUME(iParam1->f_1180);
	}
	if (MAP::DOES_BLIP_EXIST(iParam1->f_1210))
	{
		MAP::REMOVE_BLIP(&(iParam1->f_1210));
	}
	if (MAP::DOES_BLIP_EXIST(iParam1->f_1211))
	{
		MAP::REMOVE_BLIP(&(iParam1->f_1211));
	}
	func_43(iParam1);
	func_44(0);
	Global_1102099->f_935.f_21 = 0;
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1102099->f_19, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(Global_1102099->f_19);
	}
	func_45();
	if (!func_46(uParam0, 64))
	{
		func_47(6);
	}
}

void func_9()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_10(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_9();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_11()
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
			func_9();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_9();
					break;
				case 2:
					func_9();
					break;
				case 4:
					func_9();
					break;
				case 3:
					func_9();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_9();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_9();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_9();
		}
		if (func_48() == 0)
		{
			if (func_49())
			{
				func_9();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_9();
	}
	return 1;
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_13(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_14(bool bParam0)
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
					func_9();
					break;
				case 2:
					func_9();
					break;
				case 4:
					func_9();
					break;
				case 3:
					func_9();
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
			func_9();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_15(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_50(Param0))
	{
		return;
	}
	if (!func_26(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_51(Param0);
	}
	if (!func_50(func_52(0)))
	{
		func_53(Param0, 3);
		func_54(bParam3);
		func_55(!bParam4);
		func_56(Param0, -1);
		if (bParam2 && !func_57(2))
		{
			func_58(&Global_0, 1024);
		}
		func_59(1);
	}
	else
	{
		func_56(Param0, -1);
		func_53(Param0, 4);
		func_60(Param0, 0);
	}
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_61(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_62(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
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
	if (func_50(*Global_1051163) && !func_63(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_64(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_65(iParam3, 255))
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
	if (func_66())
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

char* func_18()
{
	return "net_main_online";
}

void func_19(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 > 0)
	{
		if ((!_NAMESPACE26::_0x0F99F6436528A089(uParam0->f_37) || !_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_37)) || func_67(uParam1, 4))
		{
			func_68(uParam0, 64);
			func_69(uParam0, 9);
		}
	}
	if ((*uParam0 > 3 && *uParam0 < 7) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < 2)
	{
		func_68(uParam0, 64);
		func_69(uParam0, 9);
	}
	switch (*uParam0)
	{
		case 0:
			func_70(&(uParam0->f_45), 0);
			uParam0->f_37 = Global_1275573->f_15;
			func_69(uParam0, 2);
			break;
		case 2:
			if (!func_71(uParam0, uParam1))
			{
				if (func_72(&(uParam0->f_45)) > 7500)
				{
					func_68(uParam0, 64);
					func_68(uParam0, 128);
					func_69(uParam0, 9);
				}
				return;
			}
			if (!func_73(&(uParam0->f_45)))
			{
				func_70(&(uParam0->f_45), 0);
			}
			if (func_72(&(uParam0->f_45)) < 7500)
			{
				return;
			}
			uParam0->f_43 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			if (func_74(uParam0))
			{
				uParam0->f_33 = 0;
			}
			else
			{
				uParam0->f_33++;
				return;
			}
			func_69(uParam0, 3);
			break;
		case 3:
			if (func_72(&(uParam0->f_45)) < 7500)
			{
				return;
			}
			uParam0->f_32 = func_75(uParam1, 4);
			if (uParam0->f_32 > 1)
			{
				if (!PATHFIND::_0x65A8196B8D7F5E0B(uParam0->f_34))
				{
					func_76(uParam0, uParam1);
				}
				else
				{
					func_77(uParam0);
				}
				if (func_46(uParam0, 1))
				{
					func_69(uParam0, 5);
					uParam0->f_42 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
			else
			{
				func_68(uParam0, 64);
				func_69(uParam0, 9);
				func_68(uParam0, 512);
			}
			break;
		case 5:
			if (func_78(uParam0))
			{
				uParam0->f_35 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_69(uParam0, 6);
			}
			break;
		case 6:
			func_79(uParam0, uParam1);
			if (func_80(uParam1, 16777216, 33554432))
			{
				func_69(uParam0, 7);
			}
			break;
		case 7:
			func_81(uParam0, uParam1);
			uParam0->f_40 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_69(uParam0, 8);
			break;
		case 8:
			if (func_82(uParam0))
			{
				func_69(uParam0, 11);
			}
			break;
		case 9:
			func_68(uParam0, 64);
			break;
		case 11:
			break;
	}
}

void func_20(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar1 = PLAYER::PLAYER_ID();
	if (*uParam0 > 0 && uParam0->f_37 != Global_1275573->f_15)
	{
		if (!func_83(iParam2))
		{
			return;
		}
		func_84(iParam2, 11);
	}
	if (func_46(uParam0, 64))
	{
		if (!func_83(iParam2))
		{
			return;
		}
		func_84(iParam2, 11);
	}
	switch (iParam2->f_2)
	{
		case 0:
			if (!func_85((*uParam1)[iVar0 /*13*/], iParam2))
			{
				return;
			}
			if (func_73(&(uParam0->f_45)) && func_72(&(uParam0->f_45)) > 7500)
			{
				func_84(iParam2, 12);
			}
			func_86();
			func_87(Global_34, 869278708, 1971704925);
			((*uParam1)[iVar0 /*13*/])->f_12 = _NAMESPACE26::_0x424B17A7DC5C90BC(iVar1);
			func_88((*uParam1)[iVar0 /*13*/], 4);
			if (((*uParam1)[iVar0 /*13*/])->f_12)
			{
				((*uParam1)[iVar0 /*13*/])->f_6 = { MAP::_GET_WAYPOINT_COORDS() };
				NETWORK::_0x455156F47DC6B78C(0);
				func_89();
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				if ((iParam2->f_182.f_210[iVar2 /*23*/])->f_14 == 255)
				{
					(iParam2->f_182.f_210[iVar2 /*23*/])->f_1 = 9999999f;
					(iParam2->f_182.f_210[iVar2 /*23*/])->f_2 = 9999999f;
					(iParam2->f_182.f_210[iVar2 /*23*/])->f_5 = 9999999f;
				}
				iVar2++;
			}
			func_91(func_90(joaat("attempts"), -785841056), 1);
			func_92(8);
			func_84(iParam2, 5);
			break;
		case 5:
			if (*uParam0 >= 5)
			{
				func_84(iParam2, 6);
				func_93("MP_HORSE_RACE_START", 1, 0);
			}
			break;
		case 6:
			func_94(iParam2);
			if (*uParam0 > 5 || func_78(uParam0))
			{
				func_95();
				func_34(&(iParam2->f_1140), 1);
				func_96(1, 2);
				iParam2->f_1182 = { Global_35 };
				((*uParam1)[iVar0 /*13*/])->f_10 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_44(1);
				func_84(iParam2, 7);
			}
			break;
		case 7:
			func_97(uParam0, (*uParam1)[iVar0 /*13*/], iParam2);
			func_98(uParam0, iParam2);
			func_94(iParam2);
			func_99();
			func_100();
			func_101();
			func_102(uParam0, (*uParam1)[iVar0 /*13*/], iParam2);
			if (func_103((*uParam1)[iVar0 /*13*/], 16777216) || func_103((*uParam1)[iVar0 /*13*/], 33554432))
			{
				func_44(0);
				func_32(&(iParam2->f_167), 1);
				func_93("MP_HORSE_RACE_END", 1, 1);
				func_84(iParam2, 8);
			}
			break;
		case 8:
			if (!func_103((*uParam1)[iVar0 /*13*/], 1073741824 /* Float: 2f */))
			{
				func_104((*uParam1)[iVar0 /*13*/], 131072);
			}
			func_30(iParam2);
			if (*uParam0 > 7)
			{
				Global_1102099->f_935.f_21 = 1;
				func_32(&(iParam2->f_167), 1);
				func_105(uParam0, uParam1, iParam2);
				func_84(iParam2, 9);
			}
			break;
		case 9:
			if (!MISC::IS_BIT_SET(iParam2->f_182.f_11.f_159, 13))
			{
				MISC::SET_BIT(&(iParam2->f_182.f_11.f_159), 13);
			}
			func_106(iParam2);
			if (!func_107(&(iParam2->f_1234)))
			{
				func_108(&(iParam2->f_1234), 0);
			}
			if (*uParam0 > 8 && func_109(&(iParam2->f_1234)) > 2000)
			{
				func_84(iParam2, 10);
			}
			break;
		case 10:
			if (func_103((*uParam1)[iVar0 /*13*/], 1))
			{
				func_84(iParam2, 14);
				return;
			}
			func_110(uParam0, iParam2);
			if (uParam0->f_48 == PLAYER::PLAYER_ID())
			{
				func_91(func_90(-1892463704, -681494152), 1);
				func_91(func_90(-1892463704, -785841056), 1);
				func_91(func_111(1114562171), 1);
			}
			else
			{
				func_91(func_90(1374282888, -681494152), 1);
				func_91(func_90(1374282888, -785841056), 1);
			}
			func_84(iParam2, 14);
			break;
		case 12:
			if (iParam2->f_1239 != 0)
			{
				_NAMESPACE71::_0x2F901291EF177B02(iParam2->f_1239, 1);
				iParam2->f_1239 = 0;
			}
			if (!func_103((*uParam1)[iVar0 /*13*/], 1))
			{
				func_32(&(iParam2->f_167), 1);
				func_96(1, 2);
				PED::SET_PED_RESET_FLAG(func_40(PLAYER::PLAYER_PED_ID()), 105, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_40(PLAYER::PLAYER_PED_ID()), 0, true);
				_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
				func_88((*uParam1)[iVar0 /*13*/], 1);
			}
			if (Global_1275573->f_15 != uParam0->f_37)
			{
				func_84(iParam2, 11);
			}
			if (*uParam0 > 7)
			{
				func_105(uParam0, uParam1, iParam2);
				Global_1102099->f_935.f_21 = 1;
				func_84(iParam2, 9);
				func_32(&(iParam2->f_167), 1);
			}
			break;
		case 14:
			if (*uParam0 == 11)
			{
				func_84(iParam2, 15);
			}
			break;
		case 11:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			if (!func_112(iParam2, 64))
			{
				return;
			}
			func_93("MP_HORSE_RACE_FAIL", 1, 1);
			func_41();
			func_88((*uParam1)[iVar0 /*13*/], 1);
			func_84(iParam2, 15);
			break;
		case 15:
			break;
	}
}

void func_21(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char[] cVar3[8];

	if (!func_83(iParam2))
	{
		return;
	}
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(3);
	iVar1 = 0;
	if ((((iVar0 == 0 || iVar0 != iParam2->f_1238) || iParam2->f_2 != iParam2->f_1240) || iParam2->f_3 != iParam2->f_1241) || iParam2->f_1243)
	{
		bVar2 = true;
		iParam2->f_1243 = 0;
	}
	switch (iParam2->f_2)
	{
		case 0:
			break;
		case 6:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			cVar3 = (6500 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_42, NETWORK::GET_NETWORK_TIME_ACCURATE()));
			if (cVar3 < 6500)
			{
				func_32(&(iParam2->f_167), 1);
				if (cVar3 < 6000)
				{
					cVar3 = (cVar3 / 1000);
				}
				else
				{
					cVar3 = 5;
				}
				func_113(&(iParam2->f_1140), cVar3, 1, 0, 1);
			}
			break;
		case 7:
			if (func_46(uParam0, 16))
			{
				func_32(&(iParam2->f_167), 1);
			}
			else
			{
				func_114(&(iParam2->f_167), (uParam0->f_36 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_35, NETWORK::GET_NETWORK_TIME_ACCURATE())) + 1, 0, 30000, 0);
			}
			if (bVar2)
			{
				if (func_112(iParam2, 65536))
				{
					iParam2->f_1238 = func_115("IRON_NEED_OWN_HORSE_OBJ", -1, 0, 0, 1);
				}
				else
				{
					iParam2->f_1238 = func_115("IRON_RACE_OBJ", -1, 0, 0, 1);
				}
			}
			break;
		case 8:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
			break;
		case 9:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			break;
		case 10:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			break;
		case 12:
			func_32(&(iParam2->f_167), 1);
			if (!func_112(iParam2, 4) && !func_116(255))
			{
				if (func_118(func_117(), 10000, 0, 0, 0, 1) != 0)
				{
					func_119(iParam2, 4);
				}
			}
			if (func_103(uParam1, 65536) && !func_116(255))
			{
				func_120("IRON_DECLINE_ATTACK_TITLE", "IRON_DECLINE_ATTACK_BODY", -2, 0, 0, 0, 1, 1);
				func_104(uParam1, 65536);
			}
			if (bVar2)
			{
				iParam2->f_1238 = func_115("IRON_SPECTATE_OBJ", -1, 0, 0, 1);
			}
			break;
		case 11:
			func_32(&(iParam2->f_167), 1);
			if (!func_112(iParam2, 64))
			{
				if (func_46(uParam0, 1024))
				{
					iVar1 = func_120("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_LEADER_NO_MONEY", -2, 0, 0, 0, 1, 1);
				}
				else if (func_46(uParam0, 128))
				{
					iVar1 = func_120("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_FINISH", -2, 0, 0, 0, 1, 1);
				}
				else if (func_46(uParam0, 256))
				{
					iVar1 = func_120("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_BET", -2, 0, 0, 0, 1, 1);
				}
				else if (func_46(uParam0, 512))
				{
					iVar1 = func_120("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_NO_PLAYERS", -2, 0, 0, 0, 1, 1);
				}
				else
				{
					iVar1 = func_120("IRON_SHARD_OVER_ONE", "IRON_SHARD_OVER_CANCELED", -2, 0, 0, 0, 1, 1);
				}
				if (iVar1 != 0)
				{
					func_119(iParam2, 64);
				}
			}
			break;
		case 13:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			break;
		case 14:
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			break;
		case 15:
			func_32(&(iParam2->f_167), 1);
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			break;
	}
	if (iParam2->f_1238 != 0)
	{
		iParam2->f_1240 = iParam2->f_2;
	}
}

void func_22(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_83(iParam2))
	{
		return;
	}
	if (iParam3 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE")))
		{
			return;
		}
		if (func_121())
		{
			return;
		}
	}
	if (iParam2->f_2 >= 0 && !func_112(iParam2, 128))
	{
		if (func_120("IRON_SHARD_INTRO_ONE", "IRON_SHARD_INTRO_TWO", -2, 0, 0, 0, 1, 1) != 0)
		{
			func_119(iParam2, 128);
		}
		return;
	}
	if (iParam2->f_2 >= 9 && !func_112(iParam2, 256))
	{
		if (!func_107(&(iParam2->f_1234)))
		{
			func_108(&(iParam2->f_1234), 0);
		}
		if (func_109(&(iParam2->f_1234)) > 2000)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(11, 1, 0);
			if (!func_103(uParam1, 1))
			{
				if (func_46(uParam0, 2))
				{
					if (uParam0->f_48 == PLAYER::PLAYER_ID())
					{
						if (func_122("IRON_SHARD_PASS_ONE", "GEIRON_SHOW_SCORES", "", (2 - iParam3)) != 0)
						{
							func_119(iParam2, 256);
						}
					}
					else if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_48))
					{
						if (func_122("IRON_SHARD_FAIL_ONE", "GEIRON_SHOW_SCORES", "", (2 - iParam3)) != 0)
						{
							func_119(iParam2, 256);
						}
					}
					else if (func_122("IRON_SHARD_FAIL_ONE", MISC::_CREATE_VAR_STRING(10, "IRON_SHARD_FAIL_TWO", func_124(PLAYER::GET_PLAYER_NAME(uParam0->f_48), func_123(uParam0->f_48, 1, -1, 0))), "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
					{
						func_119(iParam2, 256);
					}
				}
				else if (func_122("IRON_SHARD_OVER_ONE", "IRON_TIME_LIMIT_EXPIRED", "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
				{
					func_119(iParam2, 256);
				}
			}
			else if (func_122("IRON_SHARD_OVER_ONE", "GEIRON_SHOW_SCORES", "GEIRON_SHOW_SCORES", (3 - iParam3)) != 0)
			{
				func_119(iParam2, 256);
			}
			return;
		}
	}
}

void func_23(int iParam0)
{
	if (func_125(0, 0, 0))
	{
		if (!func_107(&(iParam0->f_1229)))
		{
			func_108(&(iParam0->f_1229), 1);
			func_36(1);
		}
		else if (func_109(&(iParam0->f_1229)) <= 45000)
		{
			LAW::_0xBD944A3D36E992DE();
			PLAYER::_0xCBCCF73FFA69CC6B(PLAYER::GET_PLAYER_INDEX());
		}
	}
	else if (func_107(&(iParam0->f_1229)))
	{
		func_126(&(iParam0->f_1229));
	}
}

void func_24()
{
	func_127();
}

void func_25(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_50(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_128(Param0) && !func_26(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_129(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_130(Param0) == 3)
		{
			func_131(1, -1706799532);
		}
		else if (func_130(Param0) == 4)
		{
			func_131(0, -1706799532);
		}
	}
	if (func_130(Param0) == 3 || (func_130(Param0) == 1 && STATS::_0x01F4D242765C6B24(func_129(Param0))))
	{
		if (iParam3 != -1)
		{
			func_132(Param0, iParam3, iParam4);
		}
		else
		{
			func_132(Param0, 2, iParam4);
		}
	}
	func_53(Param0, 0);
	if (func_63(func_52(0), Param0))
	{
		func_54(1);
		func_55(0);
		func_133(0);
		func_59(1);
	}
	func_134(Param0);
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_61(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

bool func_26(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_130(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_27(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (&Global_1900788 <= 0)
	{
		return;
	}
	if (!func_50(Param0))
	{
		return;
	}
	if (func_26(Param0))
	{
		func_25(Param0, 0, -1, 0);
	}
	iVar0 = func_135(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900788 > 1)
	{
		*((*Global_1900789)[iVar1 /*2*/]) = { *((*Global_1900789)[(&Global_1900788 - 1) /*2*/]) };
		*((*Global_1900820)[iVar1 /*2*/]) = { *((*Global_1900820)[(&Global_1900788 - 1) /*2*/]) };
		func_136((*Global_1900789)[(&Global_1900788 - 1) /*2*/]);
		*((*Global_1900820)[(&Global_1900788 - 1) /*2*/]) = { Var2 };
	}
	else
	{
		func_136((*Global_1900789)[iVar1 /*2*/]);
		*((*Global_1900820)[iVar1 /*2*/]) = { Var2 };
	}
	Global_1900788 = (&Global_1900788 - 1);
	if (&Global_1900788 < 0)
	{
		Global_1900788 = 0;
	}
}

void func_28()
{
	((*Global_1103073)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/])->f_1 = -1;
	((*Global_1103073)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/])->f_2 = 255;
	func_138((*Global_1103073)[func_137() /*6*/], 4);
	func_139(Global_1102099, 8);
	func_139(Global_1102099, 4);
	func_140(Global_1102099, 16);
}

void func_29()
{
	func_139(Global_1102099, 32);
}

void func_30(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(iParam0->f_1210))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_1210));
	}
	if (MAP::DOES_BLIP_EXIST(iParam0->f_1211))
	{
		MAP::REMOVE_BLIP(&(iParam0->f_1211));
	}
}

void func_31(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_1245))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_1245, true);
	}
	if (PROPSET::_DOES_PROPSET_EXIST(iParam0->f_1246))
	{
		PROPSET::_DELETE_PROPSET(iParam0->f_1246, true, true);
	}
}

void func_32(var uParam0, bool bParam1)
{
	struct<14> Var0;

	if (uParam0->f_2 > 0)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(12, 1, 0);
		if (bParam1)
		{
			func_141(uParam0);
			func_142();
		}
		func_143(uParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(uParam0->f_4));
		uParam0->f_9 = 0;
		func_144(0);
		func_145(0);
		_NAMESPACE71::_0xDD1232B332CBB9E7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::_COPY_MEMORY(uParam0, &Var0, 15);
	}
}

void func_33(var uParam0)
{
	struct<199> Var0;
	struct<15> Var199;
	int iVar222;

	if (uParam0->f_11.f_2 != 0)
	{
		func_146(&(uParam0->f_11));
		func_147(uParam0);
		func_148(&(uParam0->f_11), 1);
		Global_1939067->f_107 = 0;
		Var0.f_3 = 8;
		Var0.f_12 = 32;
		Var0.f_45 = 32;
		Var0.f_45.f_1 = 2;
		Var0.f_45.f_1.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_143 = 5;
		Var0.f_161 = -1;
		Var0.f_162 = 32;
		Var199.f_1 = -1082130432;
		Var199.f_2 = -1082130432;
		Var199.f_3 = -1082130432;
		Var199.f_4 = -1082130432;
		Var199.f_5 = -1082130432;
		Var199.f_14 = 255;
		uParam0->f_11 = { Var0 };
		iVar222 = 0;
		while (iVar222 <= 31)
		{
			MISC::_COPY_MEMORY(uParam0->f_210[iVar222 /*23*/], &Var199, 23);
			iVar222++;
		}
		uParam0->f_948 = 0;
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(190275865);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2);
		uParam0->f_2 = 0;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3, false);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
		uParam0->f_3 = 0;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	if (uParam0->f_4 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_4))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_4);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		uParam0->f_4 = -1;
	}
	if (uParam0->f_5 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_5))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_5);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		uParam0->f_5 = -1;
	}
	if (bParam1)
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_149()))
		{
			GRAPHICS::_0xC5CB91D65852ED7E(func_149());
			HUD::_0x8BC7C1F929D07BF3(-2124237476);
			GRAPHICS::_0x981C7D863980FA51();
		}
	}
}

void func_35()
{
	func_150(*Global_1199402, 0);
	if (&Global_1199402 != -1)
	{
		func_151(Global_1199402);
		func_152(Global_1199402, 0);
	}
}

void func_36(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_37(bool bParam0)
{
	Global_1903929->f_485[57] = !bParam0;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			if ((Global_1900670->f_1 == 1 || Global_1900670->f_1 == 3) || Global_1900670->f_1 == 4)
			{
				return 1;
			}
			break;
		case 2:
			if ((((Global_1900670->f_1 == 2 || Global_1900670->f_1 == 5) || Global_1900670->f_1 == 1) || Global_1900670->f_1 == 3) || Global_1900670->f_1 == 4)
			{
				return 1;
			}
			break;
		case 5:
			if (((Global_1900670->f_1 == 5 || Global_1900670->f_1 == 1) || Global_1900670->f_1 == 3) || Global_1900670->f_1 == 4)
			{
				return 1;
			}
			break;
		case 3:
			if (Global_1900670->f_1 == 3 || Global_1900670->f_1 == 4)
			{
				return 1;
			}
			break;
		case 4:
			if (Global_1900670->f_1 == 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_39(bool bParam0)
{
	int iVar0;

	if (Global_1900670->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_48() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900670->f_2 == 4 && Global_1900670->f_12 != Global_1900670->f_13) && !bParam0)
	{
		Global_1900670->f_1 = Global_1900670->f_2;
		Global_1900670->f_12 = Global_1900670->f_13;
		func_153(iVar0, Global_1900670->f_12);
	}
	else
	{
		Global_1900670->f_1 = 0;
		Global_1900670->f_7 = iVar0;
		Global_1900670->f_8 = func_154();
		Global_1900670->f_9 = func_155(Global_1893575->f_2);
		Global_1900670->f_11 = func_156(Global_1896610->f_41);
		if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
		{
			func_157(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
		else if (Global_1900670->f_11 != -1)
		{
			func_157(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
		}
		else
		{
			func_157(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
	}
	Global_1900670->f_2 = 0;
}

int func_40(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_41()
{
	if (!Global_1896726->f_383)
	{
	}
	Global_1896726->f_383 = 1;
}

void func_42()
{
	if (!Global_1070356->f_2)
	{
		func_158();
	}
}

void func_43(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (MAP::DOES_BLIP_EXIST(&(iParam0->f_1212[iVar0])))
		{
			MAP::REMOVE_BLIP(iParam0->f_1212[iVar0]);
		}
		iVar0++;
	}
}

void func_44(bool bParam0)
{
	if (bParam0)
	{
		func_159(48);
	}
	else
	{
		func_160(48);
	}
}

void func_45()
{
	if (Global_1102099->f_935.f_27 != -1)
	{
		Global_1102099->f_935.f_27 = -1;
	}
}

bool func_46(var uParam0, int iParam1)
{
	return func_161(uParam0->f_1, iParam1);
}

void func_47(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 11)
	{
		Global_1102099->f_935.f_5[iParam0] = Global_1275573->f_21;
	}
}

int func_48()
{
	return Global_1572887->f_13;
}

bool func_49()
{
	return Global_1051202->f_8;
}

int func_50(struct<2> Param0)
{
	if (!func_162(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_163(Param0))
	{
		return 0;
	}
	return 1;
}

void func_51(struct<2> Param0)
{
	struct<32> Var0;

	if (func_129(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_129(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_129(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_62(Param0, &Var0))
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

struct<2> func_52(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

void func_53(struct<2> Param0, int iParam2)
{
	if (!func_50(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_164(Param0);
	}
	else
	{
		func_165(Param0, iParam2);
	}
	func_166();
}

void func_54(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_167(Global_1939178, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_168(Global_1939178, 8388608);
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

void func_55(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_169(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_170(cVar2);
			}
			else
			{
				func_171();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_56(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_172(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900718->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900718->f_66;
	func_173(Param0, iVar0);
	Global_1900718->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900718->f_66)
	{
		return iVar0;
	}
	func_174(iVar0, iParam2);
	return iParam2;
}

bool func_57(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_58(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_59(int iParam0)
{
	Global_1900718 = (Global_1900718 || iParam0);
}

int func_60(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_50(Param0))
	{
		return 0;
	}
	iVar0 = func_172(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_175(Param0, func_52(0), iParam2))
	{
		func_53(func_52(0), 3);
		func_53(func_52(iVar0), 4);
		return 0;
	}
	func_174(iVar0, 0);
	func_53(func_52(0), 3);
	func_53(func_52(1), 4);
	return 1;
}

int func_61(var uParam0, var uParam1)
{
	return uParam0;
}

int func_62(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_176(Param0, &vVar0);
	if (func_177(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

bool func_63(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_64(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_65(int iParam0, int iParam1)
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

int func_66()
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

int func_67(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!((*uParam0)[iVar0 /*13*/])->f_12)
		{
		}
		else if (func_161(((*uParam0)[iVar0 /*13*/])->f_1, iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_68(var uParam0, int iParam1)
{
	func_178(&(uParam0->f_1), iParam1);
}

void func_69(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_70(var uParam0, bool bParam1)
{
	if (bParam1 || !func_73(uParam0))
	{
		func_179(uParam0);
	}
}

int func_71(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_37);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	if (!func_180(iVar1))
	{
		return 0;
	}
	if (func_181(((*uParam1)[iVar2 /*13*/])->f_6))
	{
		return 0;
	}
	uParam0->f_50 = { func_182(iVar0) };
	uParam0->f_53 = { ((*uParam1)[iVar2 /*13*/])->f_6 };
	uParam0->f_53.f_2 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(uParam0->f_53, uParam0->f_53.f_1);
	STREAMING::REQUEST_COLLISION_AT_COORD(uParam0->f_53);
	if (!ENTITY::_0x6BFBDC46139C45AB(uParam0->f_53))
	{
		return 0;
	}
	if (!func_183(&(uParam0->f_53), 9999f))
	{
		return 0;
	}
	return 1;
}

int func_72(var uParam0)
{
	if (!func_73(uParam0))
	{
		return 0;
	}
	if (func_184(uParam0))
	{
		return uParam0->f_2;
	}
	return func_185(uParam0->f_1);
}

bool func_73(var uParam0)
{
	return func_186(*uParam0, 1);
}

bool func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	uParam0->f_56 = 2.147484E+09f;
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(uParam0->f_33);
	if (!func_180(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1))
	{
		return false;
	}
	fVar2 = func_187(func_182(iVar1), uParam0->f_53);
	if (fVar2 < uParam0->f_56)
	{
		uParam0->f_56 = fVar2;
	}
	return uParam0->f_33 >= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1);
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (!func_180(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
		}
		else if (func_103((*uParam0)[iVar1 /*13*/], iParam1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_76(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar0 = 0f;
	iVar2 = 0;
	while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (func_103((*uParam1)[iVar2 /*13*/], 1))
		{
		}
		else
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
			if (!func_180(iVar3))
			{
			}
			else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
			}
			else
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!NETWORK::_0x255A5EF65EDA9167(iVar4) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar4))
				{
				}
				else
				{
					fVar1 = func_187(func_182(iVar4), uParam0->f_53);
					if (fVar1 > fVar0)
					{
						fVar0 = fVar1;
						uParam0->f_50 = { func_182(iVar4) };
					}
				}
			}
		}
		iVar2++;
	}
	uParam0->f_34 = PATHFIND::_0xFD5BB35AAB83FD48(uParam0->f_50, uParam0->f_53, 0);
}

void func_77(var uParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (PATHFIND::_0x65A8196B8D7F5E0B(uParam0->f_34))
	{
		if (PATHFIND::SIMULATED_ROUTE_IS_LOADED(uParam0->f_34))
		{
			PATHFIND::SIMULATED_ROUTE_TRAVEL_TO_POINT(uParam0->f_34, 1f, 5f);
			uParam0->f_36 = BUILTIN::CEIL(((PATHFIND::SIMULATED_ROUTE_GET_ETA(uParam0->f_34) * 1000f) * 1.5f));
			fVar0 = func_187(uParam0->f_50, uParam0->f_53);
			fVar1 = 5f;
			iVar2 = BUILTIN::CEIL((fVar0 / fVar1)) * 1000;
			if (uParam0->f_36 < iVar2)
			{
				uParam0->f_36 = BUILTIN::CEIL(((fVar0 * 1.5f) / fVar1)) * 1000;
			}
			if ((uParam0->f_36 % 60000) > 0)
			{
				uParam0->f_36 = (uParam0->f_36 + (60000 - (uParam0->f_36 % 60000)));
			}
			Global_1102099->f_23 = uParam0->f_35;
			Global_1102099->f_24 = uParam0->f_36;
			func_68(uParam0, 1);
		}
	}
}

bool func_78(var uParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_42, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 6500;
}

void func_79(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 255;
	if (!func_46(uParam0, 2))
	{
		iVar0 = func_188(uParam1, 16777216);
		if (NETWORK::_0x255A5EF65EDA9167(iVar0) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_189(uParam0);
			func_68(uParam0, 2);
			uParam0->f_49 = iVar0;
		}
	}
	if (func_46(uParam0, 2) && !func_46(uParam0, 16))
	{
		func_190(uParam0);
		func_191(uParam0, uParam1);
		func_68(uParam0, 16);
	}
	if (!func_46(uParam0, 16))
	{
		iVar1 = (uParam0->f_36 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_35, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	else
	{
		iVar1 = (3000 - NETWORK::GET_TIME_DIFFERENCE(uParam0->f_38, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	if (iVar1 <= 0)
	{
		func_68(uParam0, 32);
		if (!func_46(uParam0, 16))
		{
			func_191(uParam0, uParam1);
		}
	}
}

int func_80(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!func_103((*uParam0)[iVar0 /*13*/], 1))
			{
				if (!(func_103((*uParam0)[iVar0 /*13*/], iParam1) || func_103((*uParam0)[iVar0 /*13*/], iParam2)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_81(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	bVar2 = false;
	iVar3 = 255;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			if (func_103((*uParam1)[iVar1 /*13*/], 16777216))
			{
				iVar4 = NETWORK::GET_TIME_DIFFERENCE(((*uParam1)[iVar1 /*13*/])->f_10, ((*uParam1)[iVar1 /*13*/])->f_9);
				if (!bVar2 || iVar4 < iVar0)
				{
					bVar2 = true;
					iVar0 = iVar4;
					iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
				}
			}
		}
		iVar1++;
	}
	uParam0->f_48 = iVar3;
}

bool func_82(var uParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_40, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 20000;
}

int func_83(int iParam0)
{
	if (iParam0->f_1244)
	{
		return 1;
	}
	if (!func_112(iParam0, -2147483648))
	{
		HUD::_TEXT_DATABASE_REQUEST("GEIRONMP");
		func_119(iParam0, -2147483648);
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("GEIRONMP"))
	{
		if (!HUD::_0x3CF96E16265B7DC8("GEIRONMP"))
		{
			HUD::_TEXT_DATABASE_REQUEST("GEIRONMP");
		}
		return 0;
	}
	iParam0->f_1244 = 1;
	return 1;
}

void func_84(int iParam0, int iParam1)
{
	iParam0->f_2 = iParam1;
}

int func_85(var uParam0, int iParam1)
{
	if (!func_112(iParam1, -2147483648))
	{
		HUD::_TEXT_DATABASE_REQUEST("GEIRONMP");
		func_119(iParam1, -2147483648);
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("GEIRONMP"))
	{
		if (!HUD::_0x3CF96E16265B7DC8("GEIRONMP"))
		{
			HUD::_TEXT_DATABASE_REQUEST("GEIRONMP");
		}
		return 0;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED_2(func_192()) || !PROPSET::_HAS_PROPSET_LOADED(func_192()))
	{
		func_193();
		return 0;
	}
	STREAMING::REQUEST_PTFX_ASSET();
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return 0;
	}
	uParam0->f_11 = 0;
	iParam1->f_1220 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	func_37(0);
	iParam1->f_1244 = 1;
	return 1;
}

void func_86()
{
	func_194(3);
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	TASK::TASK_WHISTLE_ANIM(uParam0, iParam1, iParam2);
}

void func_88(var uParam0, int iParam1)
{
	func_178(uParam0, iParam1);
}

void func_89()
{
	if (MAP::IS_WAYPOINT_ACTIVE())
	{
		MAP::CLEAR_GPS_PLAYER_WAYPOINT();
		MAP::SET_WAYPOINT_OFF();
	}
}

struct<2> func_90(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_91(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_92(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_1900670->f_1 == 2 || Global_1900670->f_1 == 5) || Global_1900670->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_48() != -1)
	{
		iVar0 = 1;
	}
	uVar1 = func_155(Global_1893575->f_2);
	Global_1900670->f_1 = 3;
	Global_1900670->f_2 = 0;
	Global_1900670->f_7 = iVar0;
	Global_1900670->f_8 = iParam0;
	Global_1900670->f_9 = uVar1;
	if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
	{
		func_157(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
	}
	else if (Global_1900670->f_11 != -1)
	{
		func_157(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
	}
}

int func_93(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1070356->f_21185.f_1 || Global_1070356->f_21185.f_1 == 0) || iParam1 > Global_1070356->f_21185) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::_COPY_MEMORY(&(Global_1070356->f_21185), &uVar1, 2);
		}
		else
		{
			Global_1070356->f_21185.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_1070356->f_21185 = iParam1;
		}
		if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
		{
		}
		return 1;
	}
	return 0;
}

void func_94(int iParam0)
{
	if (func_121())
	{
		iParam0->f_166 = 1;
	}
	else if (iParam0->f_166)
	{
		func_93("MP_HORSE_RACE_START", 1, 0);
		iParam0->f_166 = 0;
	}
}

void func_95()
{
	func_140(Global_1102099, 32);
}

void func_96(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_195(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_196(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_97(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	if (func_103(uParam1, 131072))
	{
		return;
	}
	if (func_181(uParam0->f_53))
	{
		return;
	}
	if (func_187(Global_35, uParam0->f_53) > 400f)
	{
		return;
	}
	vVar0 = { uParam0->f_53 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	PATHFIND::_0xCF213A5FC3ABFC08(vVar0.x, vVar0.y, (50f * 2f));
	if (!ENTITY::_0x6BFBDC46139C45AB(vVar0))
	{
		PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar0 + Vector(50f, 50f, 50f), vVar0 - Vector(50f, 50f, 50f));
		return;
	}
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(vVar0, false, &vVar0, 2))
	{
		vVar0 = { uParam0->f_53 };
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam2->f_1245))
		{
			iParam2->f_1245 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_197(), uParam0->f_53, 0f, 0f, 0f, 1.5f, false, false, false, true);
		}
	}
	if (PROPSET::_HAS_PROPSET_LOADED_2(func_192()))
	{
		func_183(&vVar0, 9999f);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam2->f_1245))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iParam2->f_1245, true);
		}
		iParam2->f_1245 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_197(), vVar0, 0f, 0f, 0f, 1.5f, false, false, false, true);
		iParam2->f_1246 = PROPSET::_CREATE_PROPSET(func_192(), vVar0, 0, 0f, 9999f, false, true);
		if (!func_103(uParam1, 131072))
		{
			func_88(uParam1, 131072);
		}
	}
	if (func_103(uParam1, 1073741824 /* Float: 2f */))
	{
		func_104(uParam1, 1073741824 /* Float: 2f */);
	}
}

void func_98(var uParam0, int iParam1)
{
	if (BUILTIN::VDIST(Global_35, uParam0->f_53) < 150f)
	{
		return;
	}
	if (!func_181(uParam0->f_53))
	{
		func_198(&(iParam1->f_1221), uParam0->f_53, 1, -1082130432 /* Float: -1f */);
	}
}

void func_99()
{
	struct<30> Var0;
	struct<9> Var30;

	if (!func_199(Global_34, 1))
	{
		if (PED::_0x7A4E00364B5D727B(Global_34))
		{
			func_200(0);
		}
		return;
	}
	if (!func_201(255) || !func_202(255))
	{
		return;
	}
	NETWORK::_0x44D59EC597BBF348(9, 1);
	NETWORK::_0xEB6027FD1B4600D5(15, 0, 0.75f);
	NETWORK::_0xEB6027FD1B4600D5(19, 1, 0.05f);
	NETWORK::_0x44D59EC597BBF348(3, 0);
	func_203(func_182(PLAYER::PLAYER_ID()), 2f, 7f, &Var0, &Var30);
	func_204(1, 0);
	func_205(Var0, Var30, 1, 1, 1);
}

void func_100()
{
	func_178(&(Global_1070356->f_21187.f_3), 4);
}

void func_101()
{
	func_178(&(Global_1070356->f_21187.f_3), 16);
}

void func_102(var uParam0, var uParam1, int iParam2)
{
	float fVar0;

	func_97(uParam0, uParam1, iParam2);
	func_206(iParam2);
	if ((!func_112(iParam2, 262144) && NETWORK::_0x255A5EF65EDA9167(uParam0->f_49)) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(uParam0->f_49))
	{
		func_207("IRON_TICKER_WINNER_VALID", uParam0->f_49, -963477619);
		func_119(iParam2, 262144);
	}
	if (func_46(uParam0, 32) && !uParam1->f_11)
	{
		func_88(uParam1, 33554432);
		return;
	}
	fVar0 = func_208(PLAYER::PLAYER_PED_ID(), uParam0->f_53, 0);
	if ((fVar0 <= 33f && !uParam1->f_11) && !func_112(iParam2, 65536))
	{
		uParam1->f_11 = 1;
		uParam1->f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_88(uParam1, 16777216);
	}
	if (fVar0 > 33f)
	{
		if (!func_103(uParam1, 134217728) && MAP::IS_WAYPOINT_ACTIVE())
		{
			MAP::CLEAR_GPS_PLAYER_WAYPOINT();
			MAP::SET_WAYPOINT_OFF();
			func_88(uParam1, 134217728);
		}
		if (!MAP::DOES_BLIP_EXIST(iParam2->f_1210))
		{
			iParam2->f_1210 = MAP::_BLIP_ADD_FOR_COORD(-282719360, uParam0->f_53);
			MAP::_0x662D364ABF16DE2F(iParam2->f_1210, -1878373110);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam2->f_1210, "IRON_WAYPOINT_NAME");
		}
		if (!MAP::DOES_BLIP_EXIST(iParam2->f_1211))
		{
			iParam2->f_1211 = MAP::_BLIP_ADD_FOR_AREA(1247852480, uParam0->f_53, 45f, 45f, 45f, 0);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam2->f_1210, "IRON_AREA_NAME");
		}
	}
}

bool func_103(var uParam0, int iParam1)
{
	return func_161(*uParam0, iParam1);
}

void func_104(var uParam0, int iParam1)
{
	func_209(uParam0, iParam1);
}

void func_105(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar2 = 0;
	while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
		}
		else if (func_103((*uParam1)[iVar2 /*13*/], 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (((*uParam1)[iVar2 /*13*/])->f_11)
			{
				iVar3 = NETWORK::GET_TIME_DIFFERENCE(((*uParam1)[iVar2 /*13*/])->f_10, ((*uParam1)[iVar2 /*13*/])->f_9);
				fVar4 = 0f;
				func_210(&(iParam2->f_182), BUILTIN::TO_FLOAT(iVar3), iVar1, iParam2->f_1146[iVar2], 0, 0f, 0, 0, 0, 0);
			}
			else
			{
				iVar3 = uParam0->f_36 + 3000;
				fVar4 = func_211(uParam0, iVar1);
				func_210(&(iParam2->f_182), -1f, iVar1, iParam2->f_1146[iVar2], 0, fVar4, 0, 0, 0, 0);
			}
		}
		iVar2++;
	}
	func_212(&(iParam2->f_182));
}

void func_106(int iParam0)
{
	var uVar0;

	uVar0 = 1;
	func_213(&(iParam0->f_167), &(iParam0->f_182), &uVar0, 10241, 0);
}

bool func_107(var uParam0)
{
	return func_186(*uParam0, 1);
}

void func_108(var uParam0, bool bParam1)
{
	if (bParam1 || !func_107(uParam0))
	{
		func_214(uParam0);
	}
}

int func_109(var uParam0)
{
	if (!func_107(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_215(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_216() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_110(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	fVar0 = BUILTIN::VDIST(iParam1->f_1182, uParam0->f_53);
	fVar1 = BUILTIN::VDIST(Global_35, uParam0->f_53);
	fVar2 = (fVar0 - fVar1);
	iVar3 = 1785817993;
	iVar4 = func_217(fVar2);
	Var5.f_1 = 11;
	func_218(&Var5, iVar4);
	if (uParam0->f_48 == PLAYER::PLAYER_ID())
	{
		iVar3 = 1356271729;
	}
	func_219(fVar2);
	func_220(iVar3, &Var5, 0, 255, 0, 0);
}

struct<2> func_111(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

bool func_112(int iParam0, int iParam1)
{
	return func_161(iParam0->f_1242, iParam1);
}

int func_113(var uParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	if (func_221(uParam0, sParam1, &bVar0, 0, vVar2, 0, 0))
	{
		func_222(uParam0, sParam1, bParam2, bParam3, bParam4);
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (bVar0)
	{
		func_34(uParam0, 1);
	}
	return iVar1;
}

void func_114(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	bool bVar0;

	if ((func_223(uParam0, &bVar0) && func_224(uParam0)) && func_225(uParam0, -1700692449, &bVar0))
	{
		func_226(uParam0, iParam1, bParam2, iParam3, sParam4);
	}
	if (bVar0)
	{
		func_32(uParam0, 1);
	}
}

var func_115(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	return func_227(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

bool func_116(int iParam0)
{
	return func_228(1, iParam0);
}

char* func_117()
{
	return "IRON_SPECTATE_HELP";
}

int func_118(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = uParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_119(int iParam0, int iParam1)
{
	func_178(&(iParam0->f_1242), iParam1);
}

int func_120(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar20 = _NAMESPACE71::_0xA6F4216AB10EB08E(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

bool func_121()
{
	return func_228(1, 255);
}

int func_122(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	switch (iParam3)
	{
		case 3:
			iVar0 = func_229(sParam0, sParam1, sParam2, -2, 0, 0, 0, 1, 1, 1);
			break;
		case 2:
			iVar0 = func_120(sParam0, sParam1, -2, 0, 0, 0, 1, 1);
			break;
		case 1:
			iVar0 = func_230(sParam0, -2, 0, 0, 0, 1);
			break;
	}
	return iVar0;
}

int func_123(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return 636925055;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_128(func_52(0)) && func_61(func_52(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if ((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5;
	}
	if (bParam3 && (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_231(iParam0);
			if (iVar6 == -1031763995 && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return joaat("COLOR_WHITE");
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_232(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_233((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_234(iParam0, 1);
	if (!bVar0)
	{
		if (func_235(iParam0, bParam1))
		{
			return func_232(iParam0);
		}
		else if (func_236(iParam0, bParam1))
		{
			if (func_237(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_231(iParam0);
	}
	else if (func_235(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_239(func_238(func_52(0)), 1) == 395262693)
		{
			return func_232(iParam0);
		}
		else
		{
			return func_232(iParam0);
		}
	}
	else if (func_236(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_124(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_240(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_125(bool bParam0, bool bParam1, bool bParam2)
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

void func_126(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_127()
{
	Global_1132968->f_6289.f_22 = MISC::GET_FRAME_COUNT();
}

bool func_128(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_130(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_129(struct<2> Param0)
{
	return func_241(Param0);
}

int func_130(struct<2> Param0)
{
	int iVar0;

	if (!func_50(Param0))
	{
		return -1;
	}
	iVar0 = func_242(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

int func_131(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_243())
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
		func_58(&Global_0, 8);
	}
	func_58(&Global_0, 1);
	return 1;
}

void func_132(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_245(func_61(Param0));
	iVar1 = func_129(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_48() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_246(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

int func_133(bool bParam0)
{
	if (!bParam0 && func_247(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

int func_134(struct<2> Param0)
{
	return func_248(func_172(Param0));
}

int func_135(struct<2> Param0)
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
		if (func_63(*((*Global_1900789)[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_136(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_137()
{
	return Global_1099294->f_339;
}

void func_138(var uParam0, int iParam1)
{
	func_178(uParam0, iParam1);
}

void func_139(var uParam0, int iParam1)
{
	func_209(&(uParam0->f_18), iParam1);
}

void func_140(var uParam0, int iParam1)
{
	func_178(&(uParam0->f_18), iParam1);
}

void func_141(var uParam0)
{
	if (uParam0->f_11 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_11))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_11);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_11);
		uParam0->f_11 = -1;
	}
}

void func_142()
{
	AUDIO::_0x9D746964E0CF2C5F(func_249(), func_250());
	AUDIO::_0x9D746964E0CF2C5F(func_251(), func_250());
	AUDIO::_0x9D746964E0CF2C5F(func_252(), func_250());
	AUDIO::_0x9D746964E0CF2C5F(func_253(), func_250());
	AUDIO::_0x9D746964E0CF2C5F(func_254(), func_255());
	AUDIO::_0x9D746964E0CF2C5F(func_256(), func_257());
}

void func_143(var uParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_3));
	}
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1546991729);
	}
}

void func_144(int iParam0)
{
	if (Global_1903004->f_1 != iParam0)
	{
		Global_1903004->f_1 = iParam0;
	}
}

void func_145(int iParam0)
{
	Global_1903004 = iParam0;
}

void func_146(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar0]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
}

void func_147(var uParam0)
{
	int iVar0;
	var uVar1;

	if (uParam0[0 /*5*/] != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0[iVar0 /*5*/]);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar0 /*5*/])->f_1);
			iVar0++;
		}
		uVar1 = 2;
		MISC::_COPY_MEMORY(uParam0, &uVar1, 11);
	}
}

void func_148(var uParam0, bool bParam1)
{
	int iVar0;

	UIAPPS::_CLOSE_APP_BY_HASH(joaat("leaderboards"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_142))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_143[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_143[iVar0]));
		}
		iVar0++;
	}
	AUDIO::_0x531A78D6BF27014B("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_258(&(uParam0->f_162));
	}
	func_144(0);
}

char* func_149()
{
	return "MP_OutofAreaDirectional";
}

void func_150(struct<5> Param0, int iParam5)
{
	struct<12> Var0;

	Var0.f_5 = -1;
	Var0.f_4 = 7;
	Var0.f_5 = { Param0 };
	Var0.f_11 = iParam5;
	func_260(&Var0, func_259(0, 8));
}

void func_151(var uParam0)
{
	struct<6> Var0;

	if (*uParam0 == -1)
	{
		func_152(uParam0, 0);
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 3;
	Var0.f_5 = { *uParam0 };
	func_260(&Var0, func_259(0, 8));
	func_261(0);
	func_152(uParam0, 0);
}

void func_152(var uParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = -1;
	*uParam0 = { Var0 };
	if (bParam1)
	{
		func_261(0);
	}
}

void func_153(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_154()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 134:
			return 69;
		case 135:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 137:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_157(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_158()
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	Global_1070356->f_2 = 0;
}

int func_159(int iParam0)
{
	if (func_262(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	if (func_263(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_161(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_162(int iParam0)
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

int func_163(int iParam0)
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

int func_164(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_242(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_264(iVar0);
}

int func_165(struct<2> Param0, int iParam2)
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
	if (!func_176(Param0, &vVar0))
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
		func_176(*(Global_1070356->f_17817.f_1[iVar9 /*3*/]), &vVar3);
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
			func_265(iVar9);
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

void func_166()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (func_176(*(Global_1070356->f_17817.f_1[iVar0 /*3*/]), &vVar1))
		{
		}
		iVar0++;
	}
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_168(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_169(int iParam0, int iParam1)
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

void func_170(char[12] cParam0)
{
	Global_1938085->f_75.f_67 = { cParam0 };
}

void func_171()
{
	StringCopy(&(Global_1938085->f_75.f_67), "", 24);
}

int func_172(struct<2> Param0)
{
	int iVar0;

	if (!func_50(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_63(*(Global_1900718->f_1[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_173(struct<2> Param0, int iParam2)
{
	if (!func_50(Param0))
	{
		func_136(Global_1900718->f_1[iParam2 /*2*/]);
	}
	else
	{
		*(Global_1900718->f_1[iParam2 /*2*/]) = { Param0 };
	}
	func_266(Param0, 0, 1, -1);
}

void func_174(int iParam0, int iParam1)
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
			func_267((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_267(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_50(*(Global_1900718->f_1[0 /*2*/])))
	{
		func_53(*(Global_1900718->f_1[0 /*2*/]), 3);
	}
}

int func_175(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_50(Param0))
	{
		return 0;
	}
	if (!func_50(Param2))
	{
		return 1;
	}
	iVar0 = func_61(Param0);
	iVar1 = func_61(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return 1;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return 1;
	}
	if (iVar1 == 6)
	{
		return 0;
	}
	if (iVar0 == 6)
	{
		return 1;
	}
	if (iVar1 == 5)
	{
		return 0;
	}
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 3)
	{
		return 1;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_176(struct<2> Param0, var uParam2)
{
	if (!func_50(Param0))
	{
		return 0;
	}
	func_268(uParam2);
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

int func_177(int iParam0, var uParam1, var uParam2)
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

void func_178(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_179(var uParam0)
{
	func_272(uParam0, 0);
}

bool func_180(int iParam0)
{
	return func_273(iParam0);
}

int func_181(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_182(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_183(var uParam0, float fParam1)
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

bool func_184(var uParam0)
{
	return func_186(*uParam0, 2);
}

int func_185(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

bool func_186(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_187(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_188(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_103((*uParam0)[iVar0 /*13*/], iParam1))
			{
				return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			}
		}
		iVar0++;
	}
	return 255;
}

void func_189(var uParam0)
{
	uParam0->f_38 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_190(var uParam0)
{
	uParam0->f_38 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_191(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar2 = 0;
	while (iVar2 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
		}
		else if (func_103((*uParam1)[iVar2 /*13*/], 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			fVar3 = BUILTIN::VDIST(func_182(iVar1), uParam0->f_53);
			uParam0->f_3[iVar2 /*4*/] = iVar1;
			(uParam0->f_3[iVar2 /*4*/])->f_3 = fVar3;
		}
		iVar2++;
	}
}

int func_192()
{
	return 8658837;
}

void func_193()
{
	PROPSET::_REQUEST_PROPSET_2(func_192());
	PROPSET::_REQUEST_PROPSET(func_192());
}

void func_194(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 118)
	{
		return;
	}
	Global_1903929->f_485[iParam0] = 1;
}

void func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, 1, 0, 0);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, 1, 4, 0);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_274();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_196(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, 0, iVar2, 0);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 0, !bParam6);
		}
	}
}

char* func_197()
{
	return "scr_net_imp_race_smoke";
}

int func_198(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	char* sVar0;

	if (func_161(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (func_161(uParam0->f_1, 16))
			{
				func_275(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				func_276(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(-458373790);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(-458373790))
	{
		if (!func_161(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_277(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = func_279(func_278(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_280(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 15f)), BUILTIN::FLOOR((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, func_281(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (func_282(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15f))
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_178(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_178(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_199(int iParam0, bool bParam1)
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
	return 1;
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		func_159(105);
		if (!Global_1275573->f_12)
		{
			func_283(16);
		}
	}
	else
	{
		func_160(105);
		if (!Global_1275573->f_12)
		{
			func_283(16);
		}
	}
}

bool func_201(int iParam0)
{
	return func_228(47, iParam0);
}

bool func_202(int iParam0)
{
	return func_228(48, iParam0);
}

void func_203(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6)
{
	uParam5->f_5 = 2;
	uParam5->f_1 = { vParam0 };
	uParam5->f_17.f_6 = { vParam0 };
	uParam5->f_17 = { fParam3, fParam3, fParam3 };
	if (fParam3 > 30f)
	{
		uParam5->f_17 = { fParam3, fParam3, 30f };
	}
	uParam5->f_17.f_9 = -432403087;
	uParam5->f_6.f_6 = { vParam0 };
	uParam5->f_6 = { fParam4, fParam4, 0f };
	uParam5->f_6.f_9 = -432403087;
	uParam5->f_16 = 1;
	uParam6->f_5 = 2;
	uParam6->f_1 = { vParam0 };
	uParam6->f_6 = { vParam0 };
}

void func_204(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_159(61);
		if (bParam1)
		{
			func_159(68);
		}
	}
	else
	{
		func_160(61);
		func_160(49);
		func_160(68);
	}
}

int func_205(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_201(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_284(&(Global_1099294->f_516));
		Global_1099294->f_516 = { Param0 };
		func_285(&(Global_1099294->f_555));
		Global_1099294->f_555 = { Param30 };
		Global_1099294->f_586 = iParam39;
		Global_1099294->f_587 = iParam40;
		Global_1099294->f_588 = iParam41;
		func_286(Global_1099294->f_516, 36);
		func_287(Global_1099294->f_555, 36);
		func_160(47);
		return 1;
	}
	return 0;
}

void func_206(int iParam0)
{
	int iVar0;

	iVar0 = func_40(Global_34);
	if ((func_288(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !func_112(iParam0, 65536))
	{
		func_86();
		func_119(iParam0, 65536);
		iParam0->f_1243 = 1;
	}
	else if ((!func_288(iVar0) || !ENTITY::DOES_ENTITY_EXIST(iVar0)) && func_112(iParam0, 65536))
	{
		func_289(iParam0, 65536);
		iParam0->f_1243 = 1;
	}
}

int func_207(char* sParam0, int iParam1, int iParam2)
{
	char cVar0[64];
	char* sVar8;
	var uVar9;

	if (iParam1 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return 0;
	}
	StringCopy(&cVar0, PLAYER::GET_PLAYER_NAME(iParam1), 64);
	sVar8 = MISC::_CREATE_VAR_STRING(10, sParam0, func_124(&cVar0, iParam2));
	uVar9 = func_290(sVar8, -2, 0, 0, 0, 1);
	return uVar9;
}

float func_208(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_209(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_210(var uParam0, float fParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;

	if ((*uParam3 >= 0 && *uParam3 < 32) && (uParam0->f_210[*uParam3 /*23*/])->f_14 != 255)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[*uParam3 /*23*/])->f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[*uParam3 /*23*/])->f_14))
		{
			func_291(uParam0, *uParam3);
		}
	}
	if (iParam2 == 255)
	{
		return 0;
	}
	iVar0 = *uParam3;
	if (((iVar0 < 0 || (uParam0->f_210[iVar0 /*23*/])->f_14 != iParam2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar0 /*23*/])->f_14)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[iVar0 /*23*/])->f_14))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if ((uParam0->f_210[iVar1 /*23*/])->f_14 != 255)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar1 /*23*/])->f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[iVar1 /*23*/])->f_14))
				{
					func_292(uParam0);
					func_291(uParam0, iVar1);
				}
			}
			if ((uParam0->f_210[iVar1 /*23*/])->f_14 == iParam2)
			{
				func_292(uParam0);
				iVar0 = iVar1;
				Jump @336; //curOff = 286
			}
			else if ((uParam0->f_210[iVar1 /*23*/])->f_14 == 255 && iVar0 == -1)
			{
				func_292(uParam0);
				iVar0 = iVar1;
			}
			iVar1++;
		}
	}
	if (iVar0 >= 0)
	{
		if (bParam4)
		{
			func_292(uParam0);
			func_291(uParam0, iVar0);
			*uParam3 = 0;
		}
		else
		{
			if (((uParam0->f_210[iVar0 /*23*/])->f_5 != fParam1 || (uParam0->f_210[iVar0 /*23*/])->f_1 != fParam5) || (uParam0->f_210[iVar0 /*23*/])->f_2 != fParam6)
			{
				func_293(uParam0);
			}
			(uParam0->f_210[iVar0 /*23*/])->f_14 = iParam2;
			(uParam0->f_210[iVar0 /*23*/])->f_5 = fParam1;
			(uParam0->f_210[iVar0 /*23*/])->f_1 = fParam5;
			(uParam0->f_210[iVar0 /*23*/])->f_2 = fParam6;
			(uParam0->f_210[iVar0 /*23*/])->f_3 = iParam8;
			(uParam0->f_210[iVar0 /*23*/])->f_4 = iParam9;
			uParam0->f_210[iVar0 /*23*/] = iParam7;
			*uParam3 = iVar0;
		}
	}
	return 1;
}

float func_211(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (&uParam0->f_3[iVar0 /*4*/] == iParam1)
		{
			return (uParam0->f_3[iVar0 /*4*/])->f_3;
		}
		iVar0++;
	}
	return BUILTIN::VDIST(func_182(iParam1), uParam0->f_53);
}

void func_212(var uParam0)
{
	NETWORK::_0x7E300B5B86AB1D1A(&(uParam0->f_210), uParam0->f_210, 23, 1, 2, 0, 5, 2, 0, 0, 0, 0, 0, 0, 0);
}

void func_213(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	bool bVar0;

	iParam3 |= 8;
	if (func_223(uParam0, &bVar0) && func_294(uParam0, uParam1, iParam3, 551037070, joaat("COLOR_RED"), joaat("COLOR_WHITE"), joaat("COLOR_WHITE"), iParam4))
	{
		func_295(uParam1, uParam2, iParam3 | 8, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iParam4);
	}
	if (bVar0)
	{
		func_33(uParam1);
		func_32(uParam0, 1);
	}
}

void func_214(var uParam0)
{
	func_296(uParam0, 0f);
}

bool func_215(var uParam0)
{
	return func_186(*uParam0, 2);
}

int func_216()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_217(float fParam0)
{
	if (fParam0 >= 9600f)
	{
		return 1345538268;
	}
	else if (fParam0 >= 8800f)
	{
		return 499324630;
	}
	else if (fParam0 >= 8000f)
	{
		return 616151496;
	}
	else if (fParam0 >= 7200f)
	{
		return 1472121948;
	}
	else if (fParam0 >= 6400f)
	{
		return -2145795486;
	}
	else if (fParam0 >= 5600f)
	{
		return -312702407;
	}
	else if (fParam0 >= 4800f)
	{
		return 276641649;
	}
	else if (fParam0 >= 4000f)
	{
		return -1886330704;
	}
	else if (fParam0 >= 3200f)
	{
		return 54118186;
	}
	else if (fParam0 >= 2400f)
	{
		return 487570185;
	}
	else if (fParam0 >= 1600f)
	{
		return -1699723306;
	}
	return 0;
}

void func_218(int iParam0, int iParam1)
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

void func_219(float fParam0)
{
	struct<2> Var0;
	float fVar2;

	Var0 = { func_90(joaat("misc"), 1380603511) };
	fVar2 = func_297(Var0);
	if (fParam0 > 0f && fParam0 > fVar2)
	{
		STATS::STAT_ID_SET_FLOAT(&Var0, fParam0, true);
	}
}

int func_220(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	return func_298(iParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

int func_221(var uParam0, char* sParam1, bool bParam2, bool bParam3, vector3 vParam4, float fParam7, int iParam8)
{
	int iVar0;

	if (!func_299() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		*bParam2 = 1;
		return 0;
	}
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MPCountdown");
		uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Timer", MISC::_CREATE_VAR_STRING(2, "FME_COUNTDOWN", sParam1));
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1, "showTimer", true);
		if ((bParam3 && !func_181(vParam4)) && fParam7 > 0f)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(func_149());
			HUD::_0x4CC5F2FC1332577F(-2124237476);
			fParam7 = func_300(fParam7, 0f, 1000f);
			if (iParam8 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam8))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam4, 0f, 0f, 0f, fParam7, fParam7, fParam7);
				GRAPHICS::_0x735762E8D7573E42(1, iVar0, 5f);
				VOLUME::_DELETE_VOLUME(iVar0);
			}
			else
			{
				GRAPHICS::_0x735762E8D7573E42(1, iParam8, 5f);
			}
		}
	}
	return 1;
}

void func_222(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		if (bParam2 && iParam1 < 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "GEIRON_RACE_GO"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "FME_COUNTDOWN", iParam1));
		}
		if (bParam3)
		{
			if (uParam0->f_5 < 0)
			{
				if (uParam0->f_4 >= 0)
				{
					if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_4))
					{
						AUDIO::_0x3210BCB36AF7621B(uParam0->f_4);
					}
					AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
					uParam0->f_4 = -1;
				}
				func_301(uParam0);
			}
		}
		else if (bParam4)
		{
			if (uParam0->f_4 < 0)
			{
				uParam0->f_4 = AUDIO::GET_SOUND_ID();
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_4, func_253(), func_250(), 1);
				AUDIO::_0x503703EC1781B7D6(uParam0->f_4, "Time", BUILTIN::TO_FLOAT(iParam1));
			}
		}
	}
}

int func_223(var uParam0, bool bParam1)
{
	if (!func_299())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_302())
			{
				uParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-119209833);
				func_145(1);
				func_303(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_304())
			{
				return 0;
			}
			func_303(uParam0, 2);
			break;
	}
	Global_1939067->f_107 = 1;
	return 1;
}

int func_224(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "centralInfoDatastore");
		func_305(uParam0->f_5, &(uParam0->f_6), 0);
		func_305(uParam0->f_5, &(uParam0->f_7), 1);
		func_305(uParam0->f_5, &(uParam0->f_8), 37);
		func_306(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_225(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
			{
				func_307(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_3, *uParam0);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1546991729, uParam0->f_3);
			}
			func_307(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_307(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729) && UISTATEMACHINE::_0xF7C180F57F85D0B8(1546991729))
			{
				UISTATEMACHINE::_0x6B9FE4F0BA521A19(1546991729, 0);
				func_307(uParam0, 4);
			}
			else
			{
				func_307(uParam0, 0);
			}
			break;
		case 4:
			if (!UISTATEMACHINE::_0x11E73195E735B25B(1546991729))
			{
				*bParam2 = 1;
				func_307(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_226(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	bool bVar1;

	sVar0 = func_308(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_309(uParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_306(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_310(uParam0, iParam1, sParam4);
	func_311(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

var func_227(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_228(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_312(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_137())
	{
		return func_312(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_312(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_229(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<4> Var0;
	struct<4> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = iParam4;
	Var0.f_2 = iParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	uVar20 = _NAMESPACE71::_0x02BCC0FE9EBA3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

int func_230(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar20 = _NAMESPACE71::_0x860DDFE97CC94DF0(&Var0, &Var13, iParam5);
	return uVar20;
}

int func_231(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_232(int iParam0)
{
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != Global_1275573->f_15 && !func_66())
	{
		return 636925055;
	}
	return -963477619;
}

bool func_233(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_234(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_313(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(((*Global_1097610)[iVar3 /*51*/])->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901929->f_673.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901929->f_673.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901929->f_673.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901929->f_673.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901929->f_673.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901929->f_673.f_36)
	{
		return 5;
	}
	return 6;
}

int func_235(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == Global_1275573->f_10)
	{
		return 1;
	}
	iVar0 = iParam0;
	if (!&Global_1275573->f_22[iVar0])
	{
		return 0;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return 1;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iVar0))
	{
		return 1;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1275573->f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return 1;
	}
	else if (_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_236(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return true;
		}
	}
	if (func_314(iParam0))
	{
		return true;
	}
	return !func_235(iParam0, 0);
}

int func_237(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 1;
		}
	}
	if (func_315(iParam0))
	{
		return 0;
	}
	if (func_314(iParam0))
	{
		return 0;
	}
	if (func_316(iParam0))
	{
		return 1;
	}
	return func_317(iParam0);
}

int func_238(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_176(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

char* func_240(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_241(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_176(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_242(struct<2> Param0)
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
	if (!func_176(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_176(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
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

bool func_243()
{
	return !Global_1572887->f_9;
}

int func_244()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_245(int iParam0)
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

void func_246(struct<2> Param0, var uParam2)
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
	switch (func_61(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_318(func_238(Param0));
			iVar5 = func_319(iVar4);
			if (!func_320(iVar5, 0))
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

bool func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_321(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_322(iVar1))
	{
		if (Global_1070356->f_17915.f_24 && !func_323(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070356->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2);
}

int func_248(int iParam0)
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
		func_136(Global_1900718->f_1[0 /*2*/]);
		return 1;
	}
	func_136(Global_1900718->f_1[iParam0 /*2*/]);
	Global_1900718->f_66 = (Global_1900718->f_66 - 1);
	func_174(iParam0, Global_1900718->f_66);
	return 1;
}

char* func_249()
{
	return "Match_End_Timer";
}

char* func_250()
{
	return "RDRO_Countdown_Sounds";
}

char* func_251()
{
	return "Round_End_Timer";
}

char* func_252()
{
	return "10S";
}

char* func_253()
{
	return "Out_Of_Bounds";
}

char* func_254()
{
	return "321_Countdown";
}

char* func_255()
{
	return "HUD_MP_FREE_MODE";
}

char* func_256()
{
	return "target_spawn";
}

char* func_257()
{
	return "MP005_OBHELT_sounds";
}

void func_258(var uParam0)
{
	int iVar0;

	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

var func_259(int iParam0, int iParam1)
{
	return func_324(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_260(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 25, &uParam1);
}

void func_261(int iParam0)
{
	Global_1199103->f_211 = iParam0;
}

bool func_262(var uParam0, int iParam1, int iParam2)
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

bool func_263(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

int func_264(int iParam0)
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

int func_265(int iParam0)
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

int func_266(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_325(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_241(Param0);
	Var0.f_3 = iParam3;
	func_326(&Var0, bParam2, iParam4);
	return 1;
}

void func_267(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *(Global_1900718->f_1[iParam0 /*2*/]) };
	*(Global_1900718->f_1[iParam0 /*2*/]) = { *(Global_1900718->f_1[iParam1 /*2*/]) };
	*(Global_1900718->f_1[iParam1 /*2*/]) = { Var0 };
}

void func_268(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
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
	uParam2->f_3 = func_327(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_271(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_328(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_329(iVar0);
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
			uParam2->f_5 = func_330(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_331(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_332(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_333(iVar0);
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

void func_272(var uParam0, int iParam1)
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

int func_273(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

void func_274()
{
	if (!Global_1099294->f_16)
	{
		return;
	}
	Global_1070356->f_27136.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

void func_275(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;

	fParam5 = func_336(vParam1, fParam5);
	fVar0 = func_337(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar0);
	}
}

void func_276(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;

	fVar0 = (IntToFloat((MISC::GET_FRAME_COUNT() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_178(&(uParam0->f_1), 16);
		func_275(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_336(vParam1, fParam5);
		fVar1 = func_337(fParam5, iParam4);
		uVar3 = func_338(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_338(0f, fVar1, fVar0);
	}
	GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uVar3);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar2);
}

var func_277(float fParam0)
{
	var uVar0;

	uVar0 = func_339(fParam0);
	return uVar0;
}

float func_278(int iParam0)
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

var func_279(float fParam0)
{
	var uVar0;

	uVar0 = func_339(fParam0);
	return uVar0;
}

float func_280(int iParam0)
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

float func_281(int iParam0)
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

float func_282(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_340(0) };
	vVar3 = { func_341(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

int func_283(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1140484->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1140484->f_1997 >= 21)
	{
		return 0;
	}
	Global_1140484->f_1975[Global_1140484->f_1997] = iParam0;
	Global_1140484->f_1997++;
	return 1;
}

void func_284(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_285(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_286(struct<29> Param0, var uParam29, int iParam30)
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

void func_287(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_288(int iParam0)
{
	return AITRANSPORT::_0xFFEC4B0A1A3ED515(iParam0, -1) != PLAYER::PLAYER_PED_ID();
}

void func_289(int iParam0, int iParam1)
{
	func_209(&(iParam0->f_1242), iParam1);
}

var func_290(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _NAMESPACE71::_0xB2920B9760F0F36B(&Var0, &Var13, iParam5);
	return uVar17;
}

void func_291(var uParam0, int iParam1)
{
	(uParam0->f_210[iParam1 /*23*/])->f_14 = 255;
	(uParam0->f_210[iParam1 /*23*/])->f_5 = -1f;
	(uParam0->f_210[iParam1 /*23*/])->f_1 = -1f;
	(uParam0->f_210[iParam1 /*23*/])->f_2 = -1f;
}

void func_292(var uParam0)
{
	uParam0->f_948 = 1;
}

void func_293(var uParam0)
{
	uParam0->f_947 = 1;
}

int func_294(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;

	if (uParam1->f_11.f_2 == 0)
	{
		uParam1->f_949 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		if (!func_161(iParam2, 8))
		{
			bVar0 = func_161(iParam2, 128);
			func_342(uParam0, uParam1, iParam2, bVar0, iParam3, iParam4, iParam5, iParam6);
		}
		if (!func_161(iParam2, 4))
		{
			func_343(uParam1, iParam2, iParam7);
		}
	}
	return 1;
}

void func_295(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12[8];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	bVar0 = func_161(iParam2, 8);
	bVar1 = func_161(iParam2, 128);
	bVar2 = func_161(iParam2, 1024);
	bVar3 = func_161(iParam2, 4096);
	bVar4 = func_161(iParam2, 8192);
	bVar5 = func_161(iParam2, 256);
	bVar6 = iParam7 > 1;
	iVar21 = 0;
	while (iVar21 < 8)
	{
		iVar12[iVar21] = iVar21;
		iVar21++;
	}
	iVar22 = PLAYER::PLAYER_ID();
	if (bVar3)
	{
		if (uParam0->f_949 != MISC::_SHOULD_USE_METRIC_WEIGHT())
		{
			func_293(uParam0);
			func_292(uParam0);
			uParam0->f_949 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		}
	}
	else if (bVar4)
	{
		if (uParam0->f_949 != MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2())
		{
			func_293(uParam0);
			func_292(uParam0);
			uParam0->f_949 = MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2();
		}
	}
	if (uParam0->f_948 || uParam0->f_947)
	{
		iVar11 = 0;
		while (iVar11 <= 31)
		{
			if ((uParam0->f_210[iVar11 /*23*/])->f_14 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar11 /*23*/])->f_14))
			{
				if (bVar6)
				{
					iVar9 = &uParam0->f_210[iVar11 /*23*/];
					if (iVar9 == PLAYER::GET_PLAYER_TEAM(iVar22))
					{
						fVar7 = uParam1[iVar9];
					}
					else if (uParam1[iVar9] > fVar8)
					{
						fVar8 = uParam1[iVar9];
					}
				}
				else if (uParam0->f_210[iVar11 /*23*/])->f_14 == PLAYER::PLAYER_ID()
				{
					fVar7 = (uParam0->f_210[iVar11 /*23*/])->f_5;
				}
				else if (!bVar10)
				{
					fVar8 = (uParam0->f_210[iVar11 /*23*/])->f_5;
					bVar10 = true;
				}
				StringCopy(&((uParam0->f_210[iVar11 /*23*/])->f_14.f_1), PLAYER::GET_PLAYER_NAME((uParam0->f_210[iVar11 /*23*/])->f_14), 64);
			}
			iVar11++;
		}
		if (!bVar0)
		{
			func_344(uParam0, iParam2, fVar7, fVar8, bVar1, bVar2, bVar3, iParam3, iParam4, iParam5, iParam6, uParam0->f_948);
		}
		if (uParam0->f_947)
		{
			iVar24 = 0;
			while (iVar24 <= 31)
			{
				if (uParam0->f_210[iVar24 /*23*/])->f_14 == PLAYER::PLAYER_ID()
				{
					iVar23 = iVar24;
				}
				else
				{
					iVar24++;
				}
			}
			func_345(&(uParam0->f_11), &(uParam0->f_210), PLAYER::GET_PLAYER_TEAM(iVar22), bVar6, &iVar12, 0, iVar23);
			uParam0->f_947 = 0;
		}
	}
	if (bVar5)
	{
		MISC::SET_BIT(&(uParam0->f_11.f_158), 18);
	}
	if (!func_161(iParam2, 4))
	{
		func_346(&(uParam0->f_11), &(uParam0->f_210), &iVar22, uParam0->f_948, &iVar12, bVar6, 0, 0);
		uParam0->f_948 = 0;
	}
}

void func_296(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_347() - fParam1);
	func_334(uParam0, 1);
	func_335(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_297(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

int func_298(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_218(iParam2, -372840566);
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
	func_348(uParam1, iParam0, Var3);
	return 1;
}

int func_299()
{
	return 1;
}

float func_300(float fParam0, float fParam1, float fParam2)
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

void func_301(var uParam0)
{
	if (uParam0->f_5 < 0)
	{
		uParam0->f_5 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_5, func_254(), func_255(), 1);
	}
}

bool func_302()
{
	return (!&Global_1903004 && MISC::ABSI((MISC::GET_FRAME_COUNT() - Global_1903004->f_2)) >= 5);
}

void func_303(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

int func_304()
{
	int iVar0;

	iVar0 = 1;
	if ((((((!AUDIO::_0xE368E8422C860BA7(func_249(), func_250(), -2) || !AUDIO::_0xE368E8422C860BA7(func_251(), func_250(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_252(), func_250(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_349(), func_250(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_253(), func_250(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_254(), func_255(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_256(), func_257(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_305(var uParam0, var uParam1, int iParam2)
{
	switch (func_350(iParam2))
	{
		case 0:
			func_351(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_352(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_353(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_354(uParam0, uParam1, iParam2, -1082130432 /* Float: -1f */);
			break;
		case 4:
			func_355(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_306(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0, bParam1);
}

void func_307(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_308(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar6 = func_356((iVar5 / 60), 0, 180);
	iVar7 = func_356((iVar5 % 60), 0, 60);
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

void func_309(var uParam0, char[4] cParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0, cParam1);
}

void func_310(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 11000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 11000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = AUDIO::GET_SOUND_ID();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || MISC::ARE_STRINGS_EQUAL(sParam2, func_252()))
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, func_252(), func_250(), 1);
			}
			else
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, sParam2, func_250(), 1);
				AUDIO::_0x9821B68CD3E05F2B("Time", 11f, sParam2, func_250());
			}
		}
	}
	else
	{
		func_141(uParam0);
	}
}

void func_311(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_12, func_349(), func_250(), 1);
	}
}

bool func_312(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

float func_313(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return 0f;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return Global_17172.f_2619;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && ((*Global_1097610)[iVar0 /*51*/])->f_18 >= ((*Global_1097610)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097610)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097610)[iVar0 /*51*/])->f_45;
}

int func_314(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_315(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_316(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_317(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_357(iParam0);
		return false;
	}
	if (func_316(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 2)
		{
			func_358(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1275573->f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 2);
}

int func_318(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_359(&Var1, iParam0))
	{
		iVar0 = ((func_360() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_319(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_320(int iParam0, int iParam1)
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

int func_321(int iParam0, int iParam1)
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

int func_322(int iParam0)
{
	int iVar0;

	iVar0 = func_361(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

int func_323(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

var func_324(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_362() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_363());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_363());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_363());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_364(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_365(iVar2))
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
				if (iVar9 & 8192 != 0 && func_366(iVar2) != 1)
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
					if (!func_367(iVar10))
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

int func_325(struct<2> Param0)
{
	int iVar0;

	if (Global_1184439->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1184439->f_129)
	{
		if (func_63(((*Global_1184439)[iVar0 /*4*/])->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_326(var uParam0, bool bParam1, int iParam2)
{
	func_368(uParam0, iParam2);
	if (Global_1184439->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_369(func_325(uParam0->f_1));
	}
	else
	{
		func_370();
	}
}

int func_327(int iParam0)
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

int func_328(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_371(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_329(int iParam0)
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

int func_330(int iParam0)
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

int func_331(int iParam0)
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

int func_332(int iParam0)
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

int func_333(int iParam0)
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

void func_334(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_335(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_336(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vParam0, true);
}

float func_337(float fParam0, int iParam1)
{
	float fVar0;

	fVar0 = (2f * BUILTIN::SIN((180f * (fParam0 / func_278(iParam1)))));
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

float func_338(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_339(float fParam0)
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

Vector3 func_340(int iParam0)
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
	return func_341((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_341(vector3 vParam0)
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

int func_342(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	if (uParam1[0 /*5*/] == 0)
	{
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5, "score");
		func_352(uVar0, (*uParam1)[0 /*5*/], 2, "0");
		func_352(uVar0, (*uParam1)[1 /*5*/], 8, "0");
		bVar1 = !func_161(iParam2, 16);
		bVar2 = !func_161(iParam2, 32);
		func_355(uVar0, &(((*uParam1)[0 /*5*/])->f_3), 5, bVar1, 0);
		func_351(uVar0, &(((*uParam1)[0 /*5*/])->f_1), 3, iParam4);
		func_351(uVar0, &(((*uParam1)[0 /*5*/])->f_2), 4, iParam6);
		func_355(uVar0, &(((*uParam1)[1 /*5*/])->f_3), 11, bVar2, 0);
		func_351(uVar0, &(((*uParam1)[1 /*5*/])->f_1), 9, iParam5);
		func_351(uVar0, &(((*uParam1)[1 /*5*/])->f_2), 10, iParam7);
	}
	return 1;
}

int func_343(var uParam0, int iParam1, int iParam2)
{
	if (func_161(iParam1, 262144))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 6);
	}
	else if (func_161(iParam1, 65536))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 3);
	}
	else if (func_161(iParam1, 131072))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 4);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	else if (func_161(iParam1, 1048576))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 8);
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 6);
	}
	if (func_161(iParam1, 64))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 0);
	}
	if (func_161(iParam1, 2048))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 7);
	}
	if (func_161(iParam1, 1024))
	{
		uParam0->f_11.f_151 = 2;
		MISC::SET_BIT(&(uParam0->f_11.f_159), 31);
	}
	if (func_161(iParam1, 4096))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 9);
	}
	if (func_161(iParam1, 16384))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	if (func_161(iParam1, 8192))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 10);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	if (func_161(iParam1, 32768))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 22);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 23);
	}
	if (func_161(iParam1, 524288))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 7);
	}
	if (func_161(iParam1, 2097152))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_160), 9);
	}
	func_372(&(uParam0->f_11));
	func_292(uParam0);
	if (iParam2 > 1)
	{
		uParam0->f_11.f_150 = iParam2;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_950)))
	{
		func_373(&(uParam0->f_11), &(uParam0->f_950));
	}
	return 1;
}

void func_344(var uParam0, int iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	char cVar0[32];
	char cVar4[32];
	char cVar8[32];
	var uVar12;
	char cVar16[32];
	char cVar20[32];
	char cVar24[32];
	var uVar28;
	bool bVar32;
	bool bVar33;

	if (((*uParam0)[0 /*5*/])->f_4 != fParam2 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar0, func_374(fParam2), 32);
			func_309(uParam0[0 /*5*/], &cVar0);
		}
		else if (bParam4)
		{
			StringCopy(&cVar4, func_375(fParam2), 32);
			func_309(uParam0[0 /*5*/], &cVar4);
		}
		else if (bParam5)
		{
			StringCopy(&cVar8, MISC::_0x2B6846401D68E563(fParam2, 2), 32);
			func_309(uParam0[0 /*5*/], &cVar8);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam2), "%i", &uVar12);
			func_309(uParam0[0 /*5*/], &uVar12);
		}
		((*uParam0)[0 /*5*/])->f_4 = fParam2;
	}
	if (((*uParam0)[1 /*5*/])->f_4 != fParam3 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar16, func_374(fParam3), 32);
			func_309(uParam0[1 /*5*/], &cVar16);
		}
		else if (bParam4)
		{
			StringCopy(&cVar20, func_375(fParam3), 32);
			func_309(uParam0[1 /*5*/], &cVar20);
		}
		else if (bParam5)
		{
			StringCopy(&cVar24, MISC::_0x2B6846401D68E563(fParam3, 2), 32);
			func_309(uParam0[1 /*5*/], &cVar24);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam3), "%i", &uVar28);
			func_309(uParam0[1 /*5*/], &uVar28);
		}
		((*uParam0)[1 /*5*/])->f_4 = fParam3;
	}
	bVar32 = !func_161(iParam1, 16);
	bVar33 = !func_161(iParam1, 32);
	func_376(((*uParam0)[0 /*5*/])->f_1, iParam7);
	func_376(((*uParam0)[0 /*5*/])->f_2, iParam9);
	func_306(((*uParam0)[0 /*5*/])->f_3, bVar32);
	func_376(((*uParam0)[1 /*5*/])->f_1, iParam8);
	func_376(((*uParam0)[1 /*5*/])->f_2, iParam10);
	func_306(((*uParam0)[1 /*5*/])->f_3, bVar33);
}

void func_345(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	func_377(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	func_378(uParam0, uParam1, bParam3, iParam2, iParam4, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam6);
}

void func_346(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = -1;
	if (!MISC::IS_BIT_SET(uParam0->f_159, 1))
	{
		iVar2 = PLAYER::GET_PLAYER_TEAM(*iParam2);
		iVar3 = func_379();
		bVar4 = func_380();
		bVar5 = func_381();
		bVar6 = MISC::IS_BIT_SET(uParam0->f_158, 18);
		if (uParam0->f_152 != Global_1939067->f_108)
		{
			if (uParam0->f_152)
			{
				bVar1 = true;
			}
			uParam0->f_152 = Global_1939067->f_108;
			bParam3 = true;
		}
		func_382(uParam0, uParam1, iParam2, &iVar0, iVar2);
		if (!MISC::IS_BIT_SET(uParam0->f_158, 1))
		{
			if (!bVar5 && !bParam7)
			{
				if ((iVar3 != -1 || bVar4) || bVar6)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_158, 0))
					{
						func_372(uParam0);
						func_383(uParam0, uParam1, iParam4, 0, 1, bParam5, iVar2, -1, bParam6, 0, iVar0);
						MISC::SET_BIT(&(uParam0->f_158), 0);
					}
					else
					{
						func_345(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
					}
					MISC::CLEAR_BIT(&(uParam0->f_158), 13);
					MISC::SET_BIT(&(uParam0->f_158), 1);
				}
			}
		}
		else if ((((iVar3 == -1 && !bVar4) && !bVar6) || bVar5) || bParam7)
		{
			if (!bVar1)
			{
				MISC::SET_BIT(&(uParam0->f_158), 13);
			}
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_UD"), true);
			MISC::CLEAR_BIT(&(uParam0->f_158), 1);
			if (bVar5)
			{
				Global_1939067->f_5 = 0;
			}
		}
		else
		{
			if (!Global_1939067->f_108)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_UD"), false);
			}
			if (bParam3)
			{
				func_345(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
			}
			else if (!Global_1939067->f_108)
			{
				func_384(uParam0, uParam1);
				func_385(uParam0, uParam1, 0);
			}
		}
		if (!Global_1939067->f_108)
		{
			if ((MISC::IS_BIT_SET(uParam0->f_158, 1) || MISC::IS_BIT_SET(uParam0->f_158, 13)) || uParam0->f_198 < 2)
			{
				func_386(uParam0, 1);
			}
			func_387(uParam0);
		}
	}
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

void func_348(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_388(uParam0))
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

char* func_349()
{
	return "countdown_final_thud";
}

int func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_351(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_389(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, func_390(iParam2), iParam3);
}

void func_352(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sParam3 = func_391(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, func_390(iParam2), sParam3);
}

void func_353(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_392(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, func_390(iParam2), iParam3);
}

void func_354(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_393(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0, func_390(iParam2), fParam3);
}

void func_355(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam4)
	{
		bParam3 = func_394(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, func_390(iParam2), bParam3);
}

int func_356(int iParam0, int iParam1, int iParam2)
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

void func_357(int iParam0)
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
	func_395(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_358(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_396(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] != 2)
	{
		if (!&Global_1275573->f_22[iVar0])
		{
			func_357(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1070356->f_19683.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != &Global_1275573 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_NAMESPACE26::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_358(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_397(&Var6, uVar4);
		}
	}
}

bool func_359(var uParam0, int iParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_360()
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

int func_361(int iParam0)
{
	return func_398(iParam0) + 30;
}

int func_362()
{
	return Global_1051202->f_12;
}

char* func_363()
{
	return "unnamed";
}

int func_364(int iParam0)
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

int func_365(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_228(35, iParam0);
}

int func_366(int iParam0)
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

bool func_367(int iParam0)
{
	if (func_315(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_399(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

void func_368(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1184439->f_129 >= 32)
	{
		Global_1184439->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1184439->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*((*Global_1184439)[Global_1184439->f_129 /*4*/]) = { *uParam0 };
		Global_1184439->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1184439->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *((*Global_1184439)[iVar1 /*4*/]) };
		*((*Global_1184439)[iVar1 /*4*/]) = { *((*Global_1184439)[iVar1 + 1 /*4*/]) };
		*((*Global_1184439)[iVar1 + 1 /*4*/]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*((*Global_1184439)[iParam1 /*4*/]) = { *uParam0 };
	Global_1184439->f_129++;
}

void func_369(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1184439->f_129)
	{
		return;
	}
	Global_1184439->f_130 = iParam0;
	Global_1184439->f_131 = Global_1184439[iParam0 /*4*/];
}

void func_370()
{
	if (Global_1184439->f_131 == 0)
	{
		return;
	}
	Global_1184439->f_130 = func_400(Global_1184439->f_131);
	if (Global_1184439->f_130 < 0)
	{
		Global_1184439->f_131 = 0;
	}
}

int func_371(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_401(iParam0, uParam1, &uVar0))
	{
		func_402(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_372(var uParam0)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Title");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
	uParam0->f_142 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
}

void func_373(var uParam0, char* sParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_158, 7))
	{
		MISC::SET_BIT(&(uParam0->f_158), 7);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Heading", sParam1);
	}
}

char* func_374(char* sParam0)
{
	return MISC::_CREATE_VAR_STRING(6, "FM_WEIGHT", sParam0);
}

char* func_375(float fParam0)
{
	return MISC::_CREATE_VAR_STRING(2, "FM_PERCENT", BUILTIN::FLOOR((fParam0 * 100f)));
}

void func_376(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0, iParam1);
}

void func_377(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;

	if (Global_1939067->f_108)
	{
		func_403(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_384(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_404(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_405(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", func_406(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar8 = iVar7 == ((*uParam1)[iVar0 /*23*/])->f_14;
				iVar9 = func_407(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_408(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", iVar9);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", func_409());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", func_410(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_411())
					{
						if (func_412(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", func_413(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (func_414(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
					else if (func_415(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar2 = BUILTIN::ROUND(func_416((*uParam1)[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = BUILTIN::ROUND(func_417((*uParam1)[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_418(iVar2))
					{
						iVar11 = uParam0->f_159;
						if (((*uParam1)[iVar0 /*23*/])->f_1 == 8.94E+07f)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = func_419(iVar2, iVar11, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(func_417((*uParam1)[iVar0 /*23*/], uParam0->f_159), func_420(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(func_421((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(func_416((*uParam1)[iVar0 /*23*/], uParam0->f_159));
					}
					if (func_418(iVar3))
					{
						sVar6 = func_308(iVar3, 1, 2, 0, 0, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_421((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_416((*uParam1)[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar13, MISC::_0x2B6846401D68E563(fVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !func_415(uParam0->f_159)) && !func_422(uParam0->f_159))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(func_416((*uParam1)[iVar0 /*23*/], uParam0->f_159), func_420(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", func_374(func_421((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = func_421((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", func_308(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_CREATE_VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(func_421((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_419(iVar2, uParam0->f_159, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", sVar5);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(func_421((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), func_420(uParam0, 3)));
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", iVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_378(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1939067->f_108)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_423(iParam4, &uVar4, uParam0->f_150, bVar16);
			func_424(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_425(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_426(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_404(&(((*uParam1)[iVar2 /*23*/])->f_14)) && iVar0 < 5)
					{
						func_425(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_423(iParam4, &uVar4, uParam0->f_150, bVar16);
		func_427(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_425(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2 /*23*/] && func_404(&(((*uParam1)[iVar2 /*23*/])->f_14)))
						{
							func_425(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_404(&(((*uParam1)[iVar2 /*23*/])->f_14)))
			{
				func_425(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_425(uParam0->f_2, &(uParam0->f_12[iVar20]), "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

int func_379()
{
	if (Global_1939067->f_20)
	{
		if (Global_1939067->f_5 == 1)
		{
			return 1;
		}
		if (Global_1939067->f_5 == 2)
		{
			return 2;
		}
	}
	return -1;
}

bool func_380()
{
	if (Global_1099294->f_26.f_117.f_4 && !func_411())
	{
		Global_1099294->f_26.f_117.f_4 = 0;
	}
	return Global_1099294->f_26.f_117.f_4;
}

bool func_381()
{
	return (func_428(2) && func_429());
}

void func_382(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_158, 17))
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 22))
		{
			Global_1939067->f_109 = 1;
		}
		else
		{
			Global_1939067->f_109 = 0;
		}
		MISC::SET_BIT(&(uParam0->f_158), 17);
	}
	if (Global_1939067->f_108)
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 28))
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_150 - 1))
			{
				if (iVar0 == iParam4)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (((*uParam1)[iVar0 /*23*/])->f_14 == *iParam2)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_383(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_430(uParam0, uParam1, iParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_378(uParam0, uParam1, bParam5, iParam6, iParam2, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam10);
}

void func_384(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam1)[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else if (func_404(&(((*uParam1)[iVar0 /*23*/])->f_14)))
		{
			func_431(uParam0, &(((*uParam1)[iVar0 /*23*/])->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_385(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam1)[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else
		{
			func_405(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_386(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_432(16);
	switch (uParam0->f_198)
	{
		case 0:
			func_144(1);
			func_433(&(uParam0->f_198), 1);
			break;
		case 1:
			AUDIO::_0xD9130842D7226045("MP_Leaderboard_Sounds", 1);
			func_433(&(uParam0->f_198), 2);
			break;
		case 2:
			iVar1 = UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("leaderboards"), func_434(bParam1));
			if (iVar1 == 0)
			{
				func_433(&(uParam0->f_198), 3);
			}
			else if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
			{
				func_433(&(uParam0->f_198), 3);
			}
			break;
		case 3:
			if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
			{
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("leaderboards"), func_435());
				func_433(&(uParam0->f_198), 4);
			}
			else if (func_436())
			{
				func_433(&(uParam0->f_198), 2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_158, 13))
			{
				if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
				{
					if (!bVar0)
					{
						AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					UIAPPS::_CLOSE_APP_BY_HASH(joaat("leaderboards"));
					func_433(&(uParam0->f_198), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				MISC::CLEAR_BIT(&(uParam0->f_158), 13);
				func_433(&(uParam0->f_198), 1);
			}
			else
			{
				func_433(&(uParam0->f_198), 6);
			}
			break;
		case 6:
			func_148(uParam0, bParam1);
			break;
	}
}

void func_387(var uParam0)
{
	func_437(&(uParam0->f_162));
	if ((MISC::IS_BIT_SET(uParam0->f_158, 14) || MISC::IS_BIT_SET(uParam0->f_158, 15)) || MISC::IS_BIT_SET(uParam0->f_158, 16))
	{
		return;
	}
	func_438(&(uParam0->f_162), 0);
	MISC::SET_BIT(&(uParam0->f_158), 14);
}

int func_388(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_439();
		case 4:
			return joaat("COLOR_PURE_WHITE");
		case 9:
			return func_440();
		case 10:
			return joaat("COLOR_PURE_WHITE");
		case 23:
			return 1672732465;
		case 22:
			return -1019997170;
		case 24:
			return -5208416;
		case 18:
			return joaat("COLOR_PURE_WHITE");
		case 25:
			return func_440();
		case 30:
			return func_440();
		default:
			break;
	}
	return 0;
}

char* func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_391(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_392(int iParam0)
{
	return 0;
}

float func_393(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_394(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_395(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_396(int iParam0, int iParam1, int iParam2)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = iParam2;
		}
		else
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		}
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = iParam1;
		return 1;
	}
	else if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 == iParam1)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		return 1;
	}
	return 0;
}

void func_397(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_441(*uParam0);
}

int func_398(int iParam0)
{
	return iParam0 * 31;
}

void func_399(int iParam0)
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
		func_357(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_395(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_400(int iParam0)
{
	int iVar0;

	if (Global_1184439->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1184439->f_129)
	{
		if (Global_1184439[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_401(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_327(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_402(var uParam0, int iParam1, var uParam2)
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

void func_403(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	struct<8> Var14;
	char[] cVar22[8];
	bool bVar23;
	bool bVar24;
	float fVar25[8];
	var uVar34[8];
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	char* sVar47;
	int iVar48;

	iVar5 = 0;
	iVar6 = 32;
	bVar7 = MISC::IS_BIT_SET(uParam0->f_159, 3);
	bVar8 = MISC::IS_BIT_SET(uParam0->f_159, 23);
	bVar9 = MISC::IS_BIT_SET(uParam0->f_159, 24);
	bVar10 = MISC::IS_BIT_SET(uParam0->f_159, 25);
	bVar11 = MISC::IS_BIT_SET(uParam0->f_160, 10);
	bVar12 = MISC::IS_BIT_SET(uParam0->f_159, 28);
	iVar13 = PLAYER::PLAYER_ID();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar23 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_442() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0 /*23*/] != -1 && uParam1[iVar0 /*23*/] < 8)
				{
					if (bVar9)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_1 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_1);
						}
					}
					else if (bVar8)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_5 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_5);
						}
					}
					else if (bVar11)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_8 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_8);
						}
					}
					else if (((*uParam1)[iVar0 /*23*/])->f_1 != -1f)
					{
						fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_423(iParam2, &uVar34, uParam0->f_150, bVar23);
		func_424(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = &uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						Var14 = { func_443(iVar43) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &Var14);
						iVar44 = func_444(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar44);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", MISC::_0x2B6846401D68E563(&(fVar25[iVar43]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_426(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_404(&(((*uParam1)[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &(((*uParam1)[iVar1 /*23*/])->f_14.f_1));
						bVar45 = iVar13 == ((*uParam1)[iVar1 /*23*/])->f_14;
						iVar46 = func_407(uParam0, uParam1, iVar1, iVar13, bVar45);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 26))
							{
								if (MISC::IS_BIT_SET(uParam0->f_159, 0))
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_421((*uParam1)[iVar1 /*23*/], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_416((*uParam1)[iVar1 /*23*/], uParam0->f_159), 0);
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_159, 27))
							{
								iVar4 = BUILTIN::ROUND(func_417((*uParam1)[iVar1 /*23*/], uParam0->f_159));
								sVar47 = " ";
								if (func_418(iVar4))
								{
									iVar48 = uParam0->f_159;
									if (((*uParam1)[iVar1 /*23*/])->f_1 == 8.94E+07f)
									{
										MISC::CLEAR_BIT(&iVar48, 12);
									}
									sVar47 = func_419(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(func_417((*uParam1)[iVar1 /*23*/], uParam0->f_159), func_420(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 9))
							{
								sVar47 = func_374(((*uParam1)[iVar1 /*23*/])->f_5);
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_8, 0);
						}
						else
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_1, 0);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

int func_404(var uParam0)
{
	if (*uParam0 != 255)
	{
		return 1;
	}
	else if (Global_2883584 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return 1;
	}
	return 0;
}

void func_405(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	bVar2 = iVar1 == ((*uParam1)[iParam2 /*23*/])->f_14;
	iVar0 = func_407(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*uParam1)[iParam2 /*23*/])->f_14) && _NAMESPACE79::_0x919AF2D93E9AA89D(((*uParam1)[iParam2 /*23*/])->f_14))
	{
		bVar3 = _NAMESPACE79::_0xEF6F2A35FAAF2ED7(((*uParam1)[iParam2 /*23*/])->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam0->f_12[iParam2]), "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowBlip", false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowBlip", true);
	}
}

int func_406(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if (uParam0[iParam1 /*23*/] == uParam0[iVar0 /*23*/] && func_404(&(((*uParam0)[iVar0 /*23*/])->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

int func_407(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (MISC::IS_BIT_SET(uParam0->f_159, 11))
	{
		iVar0 = func_445(uParam1[iParam2 /*23*/], PLAYER::GET_PLAYER_TEAM(iParam3), uParam0->f_150, MISC::IS_BIT_SET(uParam0->f_159, 5), bParam4);
	}
	else if (MISC::IS_BIT_SET(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = joaat("COLOR_PURE_WHITE");
		}
		else
		{
			iVar0 = func_123(((*uParam1)[iParam2 /*23*/])->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_123(((*uParam1)[iParam2 /*23*/])->f_14, 1, -1, 1);
	}
	return iVar0;
}

void func_408(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (((*uParam1)[iParam2 /*23*/])->f_10)
	{
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iParam2]), "SetOverlayImg", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam0->f_12[iParam2]), "CrossColor", iParam4);
	}
}

char* func_409()
{
	return "RSN";
}

char* func_410(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::_CREATE_VAR_STRING(2, "NUMBER", Global_1139395[iParam0 /*34*/]);
}

int func_411()
{
	if (Global_1099294->f_26.f_14 == 9)
	{
		return 0;
	}
	if (Global_1099294->f_26.f_14 == 10)
	{
		return 0;
	}
	if (Global_1099294->f_26.f_14 == 11)
	{
		return 0;
	}
	if (func_446(2048))
	{
		return 1;
	}
	if (func_447(1))
	{
		return 1;
	}
	if (Global_1099294->f_26.f_14 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_412(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_448()));
	return iParam0 == iVar0;
}

char* func_413(int iParam0)
{
	if (iParam0 != 0)
	{
		return STATS::_0xB112B9262EC29C20(1852874750, iParam0);
	}
	return "";
}

int func_414(int iParam0)
{
	if ((func_415(iParam0) || func_422(iParam0)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17))
	{
		return 1;
	}
	return 0;
}

bool func_415(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 0) && MISC::IS_BIT_SET(iParam0, 17));
}

float func_416(var uParam0, int iParam1)
{
	if (func_449())
	{
		func_450(uParam0, 1);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		if (MISC::IS_BIT_SET(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_414(iParam1) || MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (MISC::IS_BIT_SET(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

float func_417(var uParam0, int iParam1)
{
	if (func_449())
	{
		return func_450(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

int func_418(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == BUILTIN::ROUND(-3f))
	{
		return 1;
	}
	return 0;
}

char* func_419(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[32];

	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_308(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	else if ((MISC::IS_BIT_SET(iParam1, 3) || MISC::IS_BIT_SET(iParam1, 4)) || MISC::IS_BIT_SET(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return HUD::_GET_LABEL_TEXT("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return HUD::_GET_LABEL_TEXT("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return HUD::_GET_LABEL_TEXT("POS_ELIM");
		}
		else if (iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_308(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_308(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_451(&cVar0);
}

int func_420(var uParam0, int iParam1)
{
	if (iParam1 == 1 && MISC::IS_BIT_SET(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && MISC::IS_BIT_SET(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && MISC::IS_BIT_SET(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

var func_421(var uParam0, int iParam1, int iParam2)
{
	if (func_449())
	{
		func_450(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 0) && !MISC::IS_BIT_SET(iParam1, 17))
	{
		if (MISC::IS_BIT_SET(iParam1, 3) && (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (MISC::IS_BIT_SET(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_415(iParam1))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (MISC::IS_BIT_SET(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

bool func_422(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 18) && MISC::IS_BIT_SET(iParam0, 17));
}

void func_423(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = iParam0[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && uParam1[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = uParam1[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_424(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == uParam2[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_425(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0, iParam4))
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0, iParam1);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, iParam4, sParam2, iParam1);
	}
}

void func_426(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_404(&(((*uParam0)[iVar1 /*23*/])->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_427(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char cVar5[64];
	int iVar13;
	float fVar14;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar5, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, iVar0, 64);
		uParam0->f_3[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar5);
		cVar5 = { func_443(iVar0) };
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == uParam1[iVar1 /*23*/] && func_404(&(((*uParam1)[iVar1 /*23*/])->f_14)))
			{
				if (MISC::IS_BIT_SET(uParam0->f_159, 19))
				{
					if (((*uParam1)[iVar1 /*23*/])->f_6 != -1f && fVar2 == 0f)
					{
						fVar2 = (fVar2 + ((*uParam1)[iVar1 /*23*/])->f_6);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar3 = (fVar3 + ((*uParam1)[iVar1 /*23*/])->f_1);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + ((*uParam1)[iVar1 /*23*/])->f_5);
					}
				}
				else
				{
					if (((*uParam1)[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar2 = (fVar2 + ((*uParam1)[iVar1 /*23*/])->f_1);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_2 != -1f)
					{
						fVar3 = (fVar3 + ((*uParam1)[iVar1 /*23*/])->f_2);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + ((*uParam1)[iVar1 /*23*/])->f_5);
					}
				}
			}
			iVar1++;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_159, 19))
		{
			if (MISC::IS_BIT_SET(uParam0->f_159, 25) || MISC::IS_BIT_SET(uParam0->f_159, 23))
			{
				if (func_442() == 0)
				{
					fVar4 = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				}
			}
		}
		iVar13 = func_444(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "HeadingColor", iVar13);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Heading", &cVar5);
		if (MISC::IS_BIT_SET(uParam0->f_159, 6))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else if (func_414(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			fVar14 = fVar3;
			if (MISC::IS_BIT_SET(uParam0->f_159, 17))
			{
				fVar14 = fVar4;
			}
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar14, uParam0->f_151));
		}
		else if (func_415(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat1Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar3, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_428(int iParam0)
{
	return (Global_1099294->f_197 && iParam0) != 0;
}

bool func_429()
{
	return func_428(4);
}

void func_430(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	char cVar1[32];

	if (bParam4)
	{
		if (func_449())
		{
			func_452(uParam0);
		}
		else
		{
			func_453(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (MISC::IS_BIT_SET(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "Position", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "Position", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowCross", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_12[iVar0]), "CrossColor", joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowCrewTag", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "CrewTag", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowRank", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Rank", "0");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "Spectating", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat0", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat2", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat3", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowBlip", func_454());
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "BlipColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "isHighlighted", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "HeadsetIconVisible", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_12[iVar0]), "HeadsetIconColor", joaat("COLOR_PURE_WHITE"));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowBlip", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_06", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_07", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_08", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_06", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_07", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_08", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "SetOverlayImg", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowOverlay", false);
		func_431(uParam0, &(((*uParam1)[iVar0 /*23*/])->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_449())
	{
		func_455(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_377(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_431(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;

	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_456(uParam0, *uParam1)}, 8);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var16) && !MISC::ARE_STRINGS_EQUAL(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][0], &cVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][1], &cVar8);
	}
	else
	{
		(*uParam0->f_45[iParam2 /*3*/])[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iParam2]), "AvatarDictionary", &cVar0);
		(*uParam0->f_45[iParam2 /*3*/])[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iParam2]), "AvatarTexture", &cVar8);
	}
}

bool func_432(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_433(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_434(bool bParam0)
{
	if (bParam0)
	{
		return joaat("leaderboard");
	}
	return -987928333;
}

int func_435()
{
	return 205122612;
}

int func_436()
{
	if (Global_1939067->f_20 && Global_1939067->f_5 == 1)
	{
		return 1;
	}
	return 0;
}

void func_437(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[128];

	if (func_457() > 0)
	{
		return;
	}
	if (uParam0->f_33 == 0)
	{
		return;
	}
	iVar0 = uParam0->f_35;
	uParam0->f_35++;
	if (uParam0->f_35 >= 32)
	{
		uParam0->f_35 = 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_33, iVar0))
	{
		return;
	}
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_458(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			MISC::CLEAR_BIT(&(uParam0->f_33), iVar0);
			MISC::SET_BIT(&(uParam0->f_34), iVar0);
			break;
		case 3:
			break;
		case 1:
			func_459(iVar0, 1);
			break;
		case 2:
			func_459(iVar0, 1);
			func_460(uParam0, iVar1, 0);
			break;
		case 0:
			break;
	}
}

void func_438(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_461(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_33), iVar4);
		}
		iVar4++;
	}
}

int func_439()
{
	return -1640778959;
}

int func_440()
{
	return 1937193856;
}

void func_441(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_442()
{
	var uVar0;

	if (func_432(16))
	{
		uVar0 = Global_1050004->f_12;
	}
	else
	{
		uVar0 = func_462();
	}
	return uVar0;
}

struct<8> func_443(int iParam0)
{
	char cVar0[64];

	if (MISC::IS_STRING_NULL_OR_EMPTY((*Global_1050937)[iParam0 /*8*/]))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&cVar0), 64);
		return cVar0;
	}
	return *((*Global_1050937)[iParam0 /*8*/]);
}

int func_444(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_445(iParam0, iParam1, iParam2, bParam3, bParam4);
}

int func_445(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
			{
				case 0:
					return -275684858;
				case 1:
					return -1561147190;
				case 2:
					return -736318691;
				case 3:
					return 158864851;
				case 4:
					return 923463928;
				case 5:
					return -317694716;
				case 6:
					return 461388259;
				case 7:
					return 1811916478;
				default:
					break;
			}
			return joaat("COLOR_WHITE");
		}
		if (iParam1 == iParam0)
		{
			return 1765299542;
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return joaat("COLOR_WHITE");
		}
		else
		{
			return 1765299542;
		}
	}
	return -1031763995;
}

bool func_446(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

bool func_447(int iParam0)
{
	return (Global_1099294->f_26.f_7 && iParam0) != 0;
}

var func_448()
{
	return Global_1099294->f_26.f_18;
}

bool func_449()
{
	return &Global_1048583;
}

float func_450(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

char* func_451(char* sParam0)
{
	return HUD::_0xD8402B858F4DDD88(sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0));
}

void func_452(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	sVar0 = func_463(uParam0->f_159, uParam0->f_160);
	sVar1 = func_464(uParam0->f_159, uParam0->f_160);
	sVar2 = func_465(uParam0->f_159, uParam0->f_160);
	sVar3 = func_466();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", sVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", sVar2);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "StatRounds", sVar3);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "StatRoundsColor", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

void func_453(var uParam0, bool bParam1, bool bParam2)
{
	if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat0", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat0Color", joaat("COLOR_WHITE"));
			}
		}
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", func_463(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	else if (func_415(uParam0->f_159))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
			}
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
		}
	}
	if (!func_415(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", func_464(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 3) || MISC::IS_BIT_SET(uParam0->f_159, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", func_465(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

int func_454()
{
	return 1;
}

void func_455(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	char* sVar7;
	float fVar8;

	if (Global_1939067->f_108)
	{
		func_467(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_384(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_404(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_405(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", func_406(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar3 = iVar2 == ((*uParam1)[iVar0 /*23*/])->f_14;
				iVar4 = func_407(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_408(uParam0, uParam1, iVar0, bParam3, iVar4);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", iVar4);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", func_409());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", func_410(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_411())
					{
						if (func_412(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", func_413(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_417((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				fVar6 = func_416((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				sVar7 = func_421((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = func_468((*uParam1)[iVar0 /*23*/]);
				if (((*Global_1049246)[0 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(fVar5, 0));
				}
				if (((*Global_1049246)[1 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar6, 0));
				}
				if (((*Global_1049246)[2 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(sVar7, 0));
				}
				if (((*Global_1049246)[3 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "StatRounds", MISC::_0x2B6846401D68E563(fVar8, 0));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", iVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

struct<16> func_456(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return Var0;
	}
	if (func_457() > 0)
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_458(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_459(iVar16, 1);
			break;
		case 2:
			func_459(iVar16, 1);
			func_460(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

int func_457()
{
	return Global_1132968->f_5808.f_325;
}

int func_458(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar10;
	int iVar11;
	char* sVar12;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_469(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					uVar10 = func_470(iParam2);
					iVar1 = NETWORK::_0x6E2FD8CF7EB10E53(iParam1, uVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_471(iParam1, iParam2, 0);
						return 1;
					}
					func_472(iParam1, iParam2, iVar1);
					func_471(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_473(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_471(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::_GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_471(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_471(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_473(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_471(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_0x375F5870A7B8BEC1(sVar12))
					{
						return 3;
					}
					func_471(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_473(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_471(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_459(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_469(iParam0, iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_472(iParam0, iParam1, 0);
			func_471(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_473(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
			}
			func_471(iParam0, iParam1, 0);
			break;
	}
}

void func_460(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	MISC::SET_BIT(&iVar1, iVar0);
	func_474(uParam0, iVar1, iParam2);
}

void func_461(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	struct<8> Var6;
	struct<8> Var14;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_0x31010318BA9897AC(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_475(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			func_475(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
					{
					}
					else if (&Global_1275573->f_154[iVar3] == Global_1275573->f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1275573->f_154[iVar3]));
					}
					iVar3++;
				}
				func_476(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_475(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
						{
						}
						else if (&Global_1275573->f_154[iVar3] == Global_1275573->f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1275573->f_154[iVar3]));
						}
						iVar3++;
					}
					func_476(&Var14, uVar5);
				}
			}
		}

int func_462()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller")) != 0)
	{
		return 0;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

char* func_463(int iParam0, int iParam1)
{
	if (func_449())
	{
		return func_477(0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_TIME");
	}
	else if (MISC::IS_BIT_SET(iParam0, 19))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return MISC::_CREATE_VAR_STRING(2, "UIC_LB_KILLS");
}

char* func_464(int iParam0, int iParam1)
{
	if (func_449())
	{
		return func_477(1);
	}
	else if (func_415(iParam0) || func_422(iParam0))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 1))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return HUD::_GET_LABEL_TEXT("UIC_LB_TIME");
		}
		else
		{
			return func_478(iParam0);
		}
	}
	else if (func_414(iParam0) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 8))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_VAL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 20))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_ACC");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
}

char* func_465(int iParam0, int iParam1)
{
	if (func_449())
	{
		return func_477(2);
	}
	else if (MISC::IS_BIT_SET(iParam0, 13))
	{
		return HUD::_GET_LABEL_TEXT("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 7))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3) && MISC::IS_BIT_SET(iParam0, 0))
	{
		return func_478(iParam0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) && !MISC::IS_BIT_SET(iParam0, 17)) && !func_422(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
	}
	else if (func_415(iParam0) && !func_422(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 2) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CAPS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 2))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 14))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam0, 21))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_TA");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_SCORE");
}

char* func_466()
{
	if (func_449())
	{
		return func_477(3);
	}
	return "";
}

void func_467(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<8> Var7;
	char[] cVar15[8];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	float fVar21[8];
	var uVar30[8];
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	char* sVar43;

	iVar4 = 0;
	iVar5 = 32;
	iVar6 = PLAYER::PLAYER_ID();
	bVar16 = ((*Global_1049264)[0 /*2*/])->f_1 == -1128715836;
	bVar17 = ((*Global_1049264)[0 /*2*/])->f_1 == 1691389412;
	bVar18 = ((*Global_1049264)[0 /*2*/])->f_1 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar19 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_442() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0 /*23*/] != -1 && uParam1[iVar0 /*23*/] < 8)
				{
					if (func_479((*uParam1)[iVar0 /*23*/], 0) != -1f)
					{
						fVar21[uParam1[iVar0 /*23*/]] = (&fVar21[uParam1[iVar0 /*23*/]] + func_479((*uParam1)[iVar0 /*23*/], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_423(iParam2, &uVar30, uParam0->f_150, bVar19);
		func_424(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = &uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						Var7 = { func_443(iVar39) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &Var7);
						iVar40 = func_444(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar40);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", MISC::_0x2B6846401D68E563(&(fVar21[iVar39]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_426(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_404(&(((*uParam1)[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &(((*uParam1)[iVar1 /*23*/])->f_14.f_1));
						bVar41 = iVar6 == ((*uParam1)[iVar1 /*23*/])->f_14;
						iVar42 = func_407(uParam0, uParam1, iVar1, iVar6, bVar41);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar42);
						sVar43 = "";
						sVar43 = MISC::_0x2B6846401D68E563(func_479((*uParam1)[iVar1 /*23*/], 0), 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

float func_468(var uParam0)
{
	if (func_449())
	{
		func_450(uParam0, 3);
	}
	return -1f;
}

int func_469(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &((Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1]);
}

int func_470(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
		}

void func_471(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	(Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1] = iParam2;
}

void func_472(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	(*Global_1132968->f_5808[iParam0 /*10*/])[iParam1] = iParam2;
}

int func_473(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1132968->f_5808[iParam0 /*10*/][iParam1];
}

void func_474(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_461(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

void func_475(vector3 vParam0)
{
	if (Global_1132968->f_5808.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*(Global_1132968->f_5808.f_326[Global_1132968->f_5808.f_324 /*3*/]) = { vParam0 };
	Global_1132968->f_5808.f_324 = (Global_1132968->f_5808.f_324 + 1 % 50);
	Global_1132968->f_5808.f_325++;
}

void func_476(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 182;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
}

char* func_477(int iParam0)
{
	if (&Global_3145858->f_50919[iParam0 /*2*/] > -1)
	{
		if (func_480(&(Global_3145858->f_50919[iParam0 /*2*/])))
		{
			return MISC::_CREATE_VAR_STRING(2, Global_3145858->f_42116[&Global_3145858->f_50919[iParam0 /*2*/] /*18*/]);
		}
		return func_481(Global_3145858->f_42116[&Global_3145858->f_50919[iParam0 /*2*/] /*18*/]);
	}
	return "";
}

char* func_478(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0, 4))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BLAP");
	}
	if (MISC::IS_BIT_SET(iParam0, 15))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CPCO");
	}
	return "";
}

float func_479(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

bool func_480(int iParam0)
{
	return func_482((Global_3145858->f_42116[iParam0 /*18*/])->f_17, 0);
}

var func_481(var uParam0)
{
	return uParam0;
}

bool func_482(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

