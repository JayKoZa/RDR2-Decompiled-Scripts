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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	char* sLocal_20 = NULL;
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
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	struct<2> Local_40[32];
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	func_1(vScriptParam_0);
	while (!func_2(0, 0) && func_3(&uLocal_21, &Local_40, &iLocal_105, vScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	func_4();
}

void func_1(int iParam0, var uParam1, var uParam2)
{
	func_5(32, iParam0);
	func_6();
	func_7(&uLocal_21);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_21, 19, 48);
	func_8(NETWORK::_0xBA24095EA96DFE17(&uLocal_21), 19, "m_sNetCampDogHostData");
	func_9(&Local_40);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_40, 65, 49);
	func_10(NETWORK::_0x690806BC83BC8CA2(&(Local_40[0 /*2*/])), 65, "m_sNetCampDogPlayerData");
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	func_11(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
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

bool func_3(var uParam0, var uParam1, int* iParam2, vector3 vParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	bVar2 = false;
	bVar3 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
		bVar2 = ENTITY::DOES_ENTITY_EXIST(iVar1);
	}
	if (bVar2)
	{
		bVar3 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1);
	}
	if (bVar0)
	{
		if (!func_12(uParam0, uParam1, iParam2, vParam3))
		{
			return false;
		}
	}
	if (bVar3)
	{
		func_13(uParam0, uParam1, iParam2);
		func_14(uParam0, uParam1, iParam2);
	}
	if (!func_15(uParam0, uParam1, iParam2, vParam3))
	{
		return false;
	}
	return true;
}

void func_4()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_4();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_6()
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
			func_4();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_4();
					break;
				case 2:
					func_4();
					break;
				case 4:
					func_4();
					break;
				case 3:
					func_4();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_4();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_4();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_4();
		}
		if (func_16() == 0)
		{
			if (func_17())
			{
				func_4();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_4();
	}
	return 1;
}

void func_7(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 255;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_18(&(uParam0->f_6));
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	func_19(&(uParam0->f_12));
	func_20(&(uParam0->f_18));
}

int func_8(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_9(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_21(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
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
					func_4();
					break;
				case 2:
					func_4();
					break;
				case 4:
					func_4();
					break;
				case 3:
					func_4();
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
			func_4();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_12(var uParam0, var uParam1, int* iParam2, vector3 vParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = func_22(uParam0);
	iVar1 = 0;
	iVar1 = iVar1;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar2 = NETWORK::NET_TO_PED(uParam0->f_1);
		bVar3 = ENTITY::DOES_ENTITY_EXIST(iVar2);
	}
	if (bVar3)
	{
		bVar4 = ENTITY::IS_ENTITY_DEAD(iVar2);
		bVar4 = bVar4;
	}
	if (bVar3)
	{
		bVar5 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2);
	}
	switch (iVar0)
	{
		case 0:
			func_7(uParam0);
			func_23(uParam0, vParam3);
			func_24(uParam0, 1);
			break;
		case 1:
			if (func_25(uParam0, uParam1, iParam2, vParam3))
			{
				func_24(uParam0, 2);
			}
			break;
		case 2:
			func_26(uParam0, iVar2);
			iVar1 = func_27(uParam0, uParam1, iParam2);
			if (func_28(uParam0, uParam1, iParam2))
			{
				func_24(uParam0, 3);
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar5)
				{
					func_29(uParam0, uParam1, iParam2);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
				}
			}
			else
			{
				func_24(uParam0, 4);
			}
			break;
		case 4:
			return false;
	}
	return true;
}

void func_13(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = ENTITY::IS_ENTITY_DEAD(iVar0);
	if (bVar1)
	{
		if (!func_30(iParam2, 0))
		{
			func_31(uParam0->f_2);
			func_32(iParam2, 0);
		}
	}
}

int func_14(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = func_33(uParam0);
	iVar2 = 0;
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
			iVar2 = func_34(uParam0, uParam1, iParam2);
			break;
		case 2:
			iVar2 = func_35(uParam0, uParam1, iParam2);
			break;
		case 3:
			break;
		case 4:
			PED::_0xAAB050DA48B57978(iVar0, "Interaction_Happy", 0, 20000, 4);
			break;
		case 5:
			break;
		case 6:
			iVar2 = func_36(uParam0, uParam1, iParam2);
			break;
		case 7:
			iVar2 = func_37(uParam0, uParam1, iParam2);
			break;
		case 8:
			iVar2 = func_38(uParam0, uParam1, iParam2);
			break;
	}
	return iVar2;
}

bool func_15(var uParam0, var uParam1, int* iParam2, int iParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			bVar0 = true;
		}
	}
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = iVar2;
	iVar4 = func_39(uParam1[iVar3 /*2*/]);
	switch (iVar4)
	{
		case 0:
			func_40(iParam2);
			func_21(uParam1[iVar3 /*2*/]);
			func_41(iParam2, iParam3);
			func_42(uParam1[iVar3 /*2*/]);
			func_43(uParam1[iVar3 /*2*/], 1);
			break;
		case 1:
			func_44(uParam0, uParam1, iParam2);
			func_45(uParam0, iParam2);
			if (func_46(uParam0) != 11)
			{
				return true;
			}
			if (bVar0)
			{
				func_47(uParam0, iVar1);
				func_48(iParam2);
				func_49(uParam0, iParam2);
				func_50(iVar3, iVar1);
				func_51(uParam1, iParam2, uParam0->f_2, iVar1);
				func_52(iParam2, uParam0->f_2, 2);
				func_53(uParam1, iParam2, uParam0->f_2, iVar1);
				func_52(iParam2, uParam0->f_2, 4);
				func_54(uParam0, uParam1[iVar3 /*2*/], iVar1, iVar2);
				func_55(uParam0, uParam1[iVar3 /*2*/]);
				func_56(uParam0, uParam1[iVar3 /*2*/], iVar1);
				func_57(uParam0, uParam1, iVar1);
				return true;
			}
			if (!bVar0)
			{
				func_43(uParam1[iVar3 /*2*/], 2);
			}
		case 2:
			if (!func_58(uParam0, uParam1, iParam2))
			{
				return true;
			}
			func_43(uParam1[iVar3 /*2*/], 3);
			break;
		case 3:
			break;
	}
	return true;
}

int func_16()
{
	return Global_1572887.f_13;
}

bool func_17()
{
	return Global_1051252.f_8;
}

void func_18(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
}

void func_19(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = -15;
	uParam0->f_5 = -15;
}

void func_20(var uParam0)
{
	*uParam0 = -15;
}

void func_21(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

int func_22(var uParam0)
{
	return uParam0->f_4;
}

void func_23(var uParam0, vector3 vParam1)
{
	*uParam0 = vParam1.x;
	uParam0->f_2 = vParam1.y;
	uParam0->f_3 = vParam1.z;
}

void func_24(var uParam0, int iParam1)
{
	if (uParam0->f_4 == iParam1)
	{
		return;
	}
	uParam0->f_4 = iParam1;
}

bool func_25(var uParam0, var uParam1, int* iParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;

	iVar0 = func_46(uParam0);
	switch (iVar0)
	{
		case 0:
			func_59(uParam0, uParam1, iParam2);
			func_60(uParam0, 1);
		case 1:
			if (func_61(uParam0, uParam1, iParam2))
			{
				func_60(uParam0, 2);
			}
			break;
		case 2:
			if (func_62(uParam0, uParam1, iParam2))
			{
				func_60(uParam0, 3);
			}
			break;
		case 3:
			if (func_63(uParam0, uParam1, iParam2))
			{
				func_60(uParam0, 4);
			}
			break;
		case 4:
			iVar1 = uParam0->f_2;
			bVar2 = false;
			if (func_64(iVar1) && !func_65(iVar1))
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				func_60(uParam0, 6);
			}
			else
			{
				func_60(uParam0, 5);
			}
			break;
		case 6:
			if (func_66(uParam1, uParam0->f_2))
			{
				func_67(uParam0->f_2, 451736625);
				func_60(uParam0, 7);
			}
			break;
		case 7:
			if (func_68(uParam0, 2))
			{
				func_60(uParam0, 8);
			}
			if (func_68(uParam0, 3))
			{
				func_60(uParam0, 5);
			}
			break;
		case 5:
			if (func_69(uParam0))
			{
				func_60(uParam0, 10);
			}
			break;
		case 8:
			if (func_66(uParam1, uParam0->f_2))
			{
				func_70(uParam0->f_2);
				func_60(uParam0, 9);
			}
			break;
		case 9:
			if (func_68(uParam0, 1))
			{
				vVar3 = { func_71(&(iParam2->f_10)) };
				func_72(uParam0, vVar3, 0f);
				func_73(uParam0, 1);
				func_60(uParam0, 10);
			}
			break;
		case 10:
			if (func_74(uParam0, uParam1, iParam2))
			{
				func_60(uParam0, 11);
			}
			break;
		case 11:
			return true;
	}
	return false;
}

void func_26(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	bVar0 = func_68(uParam0, 0);
	bVar1 = ENTITY::IS_ENTITY_VISIBLE(iParam1);
	if (bVar0 && bVar1)
	{
		func_73(uParam0, 0);
	}
}

int func_27(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = uParam0->f_2;
	if (func_75(uParam0))
	{
		func_76(uParam0, 8);
	}
	if (func_77(uParam0, uParam1))
	{
		func_76(uParam0, 4);
	}
	iVar2 = func_33(uParam0);
	switch (iVar2)
	{
		case 0:
			if (func_64(iVar1))
			{
				iVar3 = 6;
				func_76(uParam0, iVar3);
			}
			else
			{
				iVar3 = 1;
				func_76(uParam0, iVar3);
			}
			break;
		case 1:
			iVar3 = func_78(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_76(uParam0, iVar3);
			}
			break;
		case 2:
			iVar3 = func_79(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_76(uParam0, iVar3);
			}
			break;
		case 3:
			break;
		case 4:
			func_80(uParam0->f_2);
			func_76(uParam0, 5);
			break;
		case 5:
			if (!func_81(uParam1))
			{
				func_76(uParam0, 1);
			}
			break;
		case 6:
			iVar3 = func_82(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_76(uParam0, iVar3);
			}
			break;
		case 7:
			iVar3 = func_83(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_76(uParam0, iVar3);
			}
			break;
		case 8:
			iVar3 = func_84(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				func_76(uParam0, iVar3);
			}
			break;
	}
	return 1;
}

bool func_28(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	var uVar9;
	var uVar12;
	bool bVar13;
	vector3 vVar14;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return true;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = uParam0->f_2;
	iVar2 = iVar1;
	iVar3 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
	}
	iVar4 = func_85(iVar2);
	if (!func_86(iVar4, 0))
	{
		return true;
	}
	if (!func_87(iVar2))
	{
		return true;
	}
	if (func_88(iVar2))
	{
		return true;
	}
	if (iVar4 != uParam0->f_3)
	{
		return true;
	}
	bVar5 = func_64(iVar2);
	bVar6 = func_89(iVar2);
	bVar7 = true;
	if (bVar5 || bVar6)
	{
		bVar7 = false;
	}
	if (func_81(uParam1))
	{
		bVar7 = false;
	}
	if (bVar7)
	{
		bVar13 = func_90(iVar1, &uVar8, &uVar9, &uVar12);
		if (!bVar13)
		{
			return true;
		}
	}
	vVar14 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	if (!func_91(vVar14, 150f))
	{
		return true;
	}
	return false;
}

int func_29(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	bVar1 = ENTITY::IS_ENTITY_DEAD(iVar0);
	if (bVar1)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	else
	{
		PED::_0x7043D0681285BA2D(&iVar0);
	}
	return 1;
}

bool func_30(int* iParam0, int iParam1)
{
	if (func_92(*iParam0, iParam1))
	{
		return true;
	}
	return false;
}

void func_31(var uParam0)
{
	struct<20> Var0;

	Var0.f_4 = 0;
	Var0.f_7 = uParam0;
	func_94(Var0, func_93(0, 8));
}

void func_32(int* iParam0, int iParam1)
{
	if (func_92(*iParam0, iParam1))
	{
		return;
	}
	func_95(iParam0, iParam1);
}

int func_33(var uParam0)
{
	return uParam0->f_11;
}

int func_34(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!func_96(iVar0, -76381094))
	{
		bVar1 = func_68(uParam0, 0);
		iVar2 = func_97(uParam0->f_2, iVar0, bVar1);
		return iVar2;
	}
	return 1;
}

int func_35(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!func_96(iVar0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_12);
		iVar2 = func_98(iVar0, iVar1);
		return iVar2;
	}
	PED::SET_PED_RESET_FLAG(iVar0, 229, true);
	return 1;
}

int func_36(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	bVar2 = func_99(iVar0, iVar1, 1, 1) > 8f;
	if (bVar2)
	{
		if (!func_96(iVar0, 1227113341))
		{
			iVar3 = func_100(iVar0, uParam0->f_2);
			return iVar3;
		}
		return 1;
	}
	if (!func_96(iVar0, -1927882907))
	{
		iVar4 = func_101(iVar0, iVar1);
		return iVar4;
	}
	return 1;
}

int func_37(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	if (!func_96(iVar0, 713668775))
	{
		iVar2 = func_102(iVar0, uParam0->f_2);
		return iVar2;
	}
	return 1;
}

int func_38(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar5 = { func_103(uParam0->f_2) };
	if (func_104(vVar5))
	{
		return 0;
	}
	fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vVar5, true);
	if (fVar8 > 12f)
	{
		if (!func_96(iVar0, 713668775))
		{
			iVar9 = func_105(iVar0, vVar5, 6f);
			return iVar9;
		}
		return 1;
	}
	bVar12 = func_106(iVar1, vVar2, 60f, &iVar10, &uVar11);
	iVar13 = PLAYER::PLAYER_ID();
	iVar14 = iVar13;
	if (bVar12)
	{
		func_107(uParam1[iVar14 /*2*/], 3);
	}
	else
	{
		func_108(uParam1[iVar14 /*2*/], 3);
	}
	if (bVar12)
	{
		if (!func_96(iVar0, -1927882907))
		{
			iVar15 = func_101(iVar0, iVar10);
			return iVar15;
		}
	}
	else
	{
		if (!func_109(vVar2, &iVar16, &fVar8))
		{
			return 0;
		}
		iVar17 = PLAYER::GET_PLAYER_PED(iVar16);
		if (!func_96(iVar0, -1927882907))
		{
			iVar18 = func_101(iVar0, iVar17);
			return iVar18;
		}
	}
	return 1;
}

int func_39(var uParam0)
{
	return *uParam0;
}

void func_40(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	uParam0->f_9 = -1;
	func_110(&(uParam0->f_10));
}

void func_41(var uParam0, int iParam1)
{
	if (!func_111(uParam0, iParam1))
	{
		return;
	}
	func_112(2, Global_1137451.f_5, joaat("REL_COP"));
	func_112(6, Global_1137451.f_5, joaat("REL_GUAMA_LAW"));
	func_112(6, Global_1137451.f_5, joaat("REL_PINKERTONS"));
	func_112(6, Global_1137451.f_5, joaat("REL_CRIMINALS"));
	func_112(6, Global_1137451.f_5, joaat("REL_GUNSLINGERS"));
	func_112(6, Global_1137451.f_5, joaat("REL_GANG_LARAMIE_GANG"));
	func_112(6, Global_1137451.f_5, joaat("REL_GANG_SKINNER_BROTHERS"));
	func_112(6, Global_1137451.f_5, joaat("REL_GANG_CREOLE"));
	func_112(6, Global_1137451.f_5, joaat("REL_GANG_LEMOYNE_RAIDERS"));
	func_112(6, Global_1137451.f_5, joaat("REL_GANG_SMUGGLERS"));
	func_112(6, Global_1137451.f_5, joaat("REL_GANG_ODRISCOLL"));
	func_112(6, Global_1137451.f_5, joaat("REL_GANG_MURFREE_BROOD"));
	func_112(6, Global_1137451.f_5, joaat("REL_FETCH_ENEMY_1"));
	func_112(6, Global_1137451.f_5, joaat("REL_FETCH_ENEMY_2"));
	if (Global_1132288.f_2060 != 0)
	{
		func_112(2, Global_1137451.f_5, Global_1132288.f_2060);
	}
}

void func_42(var uParam0)
{
	bool bVar0;

	if (func_113(uParam0, 4))
	{
		return;
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		bVar0 = false;
		if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1))
		{
			bVar0 = true;
		}
		if (!NETWORK::_UGC_HAS_PRIVILEGE())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			func_107(uParam0, 5);
		}
	}
	func_107(uParam0, 4);
}

void func_43(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_44(var uParam0, var uParam1, int* iParam2)
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
				func_114(iVar0, uParam0, iParam2);
				break;
		}
		iVar0++;
	}
}

void func_45(var uParam0, int* iParam1)
{
	vector3 vVar0;

	if (!func_30(iParam1, 5))
	{
		return;
	}
	if (func_115(&(iParam1->f_10)))
	{
		vVar0 = { func_71(&(iParam1->f_10)) };
		func_116(uParam0->f_2, vVar0);
		func_117(iParam1, 5);
	}
}

int func_46(var uParam0)
{
	return uParam0->f_5;
}

void func_47(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	bVar0 = func_68(uParam0, 0);
	if (!bVar0)
	{
		return;
	}
	iVar1 = func_33(uParam0);
	bVar2 = false;
	switch (iVar1)
	{
		case 1:
			bVar2 = true;
			break;
	}
	if (bVar2)
	{
		if (!func_118(iParam1, -76381094))
		{
			return;
		}
		if (!TASK::_0x02EBBB3989B7E695(iParam1))
		{
			return;
		}
	}
	if (ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam1, true);
	ENTITY::_0xA91E6CF94404E8C9(iParam1);
}

void func_48(int* iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	func_112(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0), Global_1137451.f_5);
}

void func_49(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_2)
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	iVar3 = uParam0->f_2;
	bVar4 = false;
	if (func_64(iVar3) || func_89(iVar3))
	{
		bVar4 = true;
	}
	bVar5 = false;
	if (bVar4)
	{
		bVar5 = true;
	}
	if (bVar2)
	{
		bVar5 = false;
	}
	if (bVar5)
	{
		if (!MAP::DOES_BLIP_EXIST(iParam1->f_9))
		{
			iParam1->f_9 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iVar1);
		}
	}
	else if (MAP::DOES_BLIP_EXIST(iParam1->f_9))
	{
		MAP::REMOVE_BLIP(&(iParam1->f_9));
	}
}

void func_50(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = NETWORK::NETWORK_IS_IN_MP_CUTSCENE();
	if (!bVar0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	iVar1 = NETWORK::_0xD9267375834C5EAB(iParam0);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, false, true, iVar1);
}

void func_51(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char cVar5[64];
	bool bVar13;
	bool bVar14;
	bool bVar15;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		func_117(iParam1, 1);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		func_117(iParam1, 1);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam2))
	{
		func_117(iParam1, 1);
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = ENTITY::IS_ENTITY_DEAD(iParam3);
	fVar4 = func_119(iVar1, iParam3, 1);
	StringCopy(&cVar5, "", 64);
	bVar15 = false;
	if (!func_30(iParam1, 1))
	{
		if (fVar4 <= BUILTIN::POW(5f, 2f))
		{
			bVar13 = func_120(uParam0, iParam1, iParam2, &cVar5, &bVar15);
			bVar14 = MISC::_0x870708A6E147A9AD(iParam3, &cVar5, 2.5f, 0, 0, 0, 0, 0, bVar13, -1);
			if (bVar14 || bVar15)
			{
				func_32(iParam1, 1);
			}
		}
	}
	else if ((bVar2 || bVar3) || fVar4 > BUILTIN::POW(7.5f, 2f))
	{
		bVar14 = MISC::_0xE98D55C5983F2509(iParam3);
		if (bVar14)
		{
			func_117(iParam1, 1);
		}
	}
}

void func_52(int* iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var9;

	if (!func_30(iParam0, iParam2))
	{
		return;
	}
	iVar0 = uParam1;
	Var9 = { func_121(iParam0) };
	if (!func_122(iVar0, &uVar1))
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&uVar1, &Var9))
	{
		return;
	}
	func_117(iParam0, iParam2);
}

void func_53(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	if (!func_30(iParam1, 4) && func_30(iParam1, 3))
	{
		return;
	}
	bVar0 = func_123(uParam0, iParam1, iParam2, iParam3);
	if (!bVar0)
	{
		return;
	}
}

void func_54(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam3);
	iVar1 = func_124(iVar0);
	iVar2 = func_124(iParam2);
	bVar3 = false;
	if (iVar1 && iVar2)
	{
		bVar3 = PED::_0x8BE24D74D74C6E9B(iVar0) == iParam2;
	}
	if (bVar3)
	{
		func_107(uParam1, 1);
	}
	else
	{
		func_108(uParam1, 1);
	}
	bVar4 = false;
	if (func_22(uParam0) == 3)
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		func_125(iVar0);
		func_125(iParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			ENTITY::IS_ENTITY_DEAD(iParam2);
			PED::SET_PED_CONFIG_FLAG(iParam2, 301, true);
		}
	}
}

void func_55(var uParam0, var uParam1)
{
	int iVar0;

	if (func_33(uParam0) == 7)
	{
		iVar0 = uParam0->f_2;
		func_126(iVar0);
		func_108(uParam1, 2);
	}
}

void func_56(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (func_113(uParam1, 2))
	{
		return;
	}
	if (func_33(uParam0) != 6)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_2)
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (func_99(iParam2, iVar1, 1, 1) > 8f)
	{
		return;
	}
	if (!func_127())
	{
		return;
	}
	uVar2 = MAP::_0x3E593DF9C2962EC6(776060936);
	Global_1904651.f_8690 = PLAYER::PLAYER_ID();
	func_128(620, uVar2, 1);
	func_107(uParam1, 2);
}

void func_57(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (func_113(uParam1[iVar1 /*2*/], 3))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	bVar2 = false;
	iVar3 = func_33(uParam0);
	switch (iVar3)
	{
		case 6:
		case 7:
			bVar2 = true;
			break;
		case 8:
			if (bVar0)
			{
				bVar2 = true;
			}
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	bVar4 = PED::IS_PED_USING_ACTION_MODE(iParam2);
	if (bVar2 != bVar4)
	{
		PED::SET_PED_USING_ACTION_MODE(iParam2, bVar2, -1, 0);
	}
}

bool func_58(var uParam0, var uParam1, int* iParam2)
{
	PED::REMOVE_RELATIONSHIP_GROUP(Global_1137451.f_5);
	return true;
}

void func_59(var uParam0, var uParam1, var uParam2)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return;
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

void func_60(var uParam0, int iParam1)
{
	if (uParam0->f_5 == iParam1)
	{
		return;
	}
	uParam0->f_5 = iParam1;
}

bool func_61(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false);
	if (iVar0 < 1)
	{
		return false;
	}
	return true;
}

bool func_62(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_129(uParam0->f_3);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return false;
	}
	STREAMING::REQUEST_MODEL(iVar0, false);
	return true;
}

bool func_63(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_129(uParam0->f_3);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return false;
	}
	return true;
}

bool func_64(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (func_130(&(Global_1137457[iParam0 /*12*/]), 2))
	{
		return true;
	}
	return false;
}

bool func_65(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (func_130(&(Global_1137457[iParam0 /*12*/]), 3))
	{
		return true;
	}
	return false;
}

bool func_66(var uParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return false;
	}
	iVar0 = iParam1;
	if (func_39(uParam0[iVar0 /*2*/]) != 1)
	{
		return false;
	}
	return true;
}

void func_67(var uParam0, int iParam1)
{
	struct<20> Var0;

	Var0.f_4 = 5;
	Var0.f_7 = uParam0;
	Var0.f_6 = iParam1;
	func_94(Var0, func_131(uParam0));
}

bool func_68(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_10, iParam1))
	{
		return true;
	}
	return false;
}

bool func_69(var uParam0)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;

	if (!func_90(uParam0->f_2, &uVar0, &vVar1, &uVar4))
	{
		return false;
	}
	uParam0->f_6 = { vVar1 };
	uParam0->f_6.f_3 = uVar4;
	return true;
}

void func_70(var uParam0)
{
	struct<20> Var0;

	Var0.f_4 = 3;
	Var0.f_7 = uParam0;
	func_94(Var0, func_131(uParam0));
}

Vector3 func_71(var uParam0)
{
	return uParam0->f_3.f_3;
}

int func_72(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_6 = { vParam1 };
	uParam0->f_6.f_3 = fParam4;
	return 1;
}

void func_73(var uParam0, int iParam1)
{
	if (!func_92(uParam0->f_10, iParam1))
	{
		return;
	}
	func_132(&(uParam0->f_10), iParam1);
}

bool func_74(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = uParam0->f_3;
	iVar1 = func_129(iVar0);
	vVar2 = { uParam0->f_6 };
	uVar5 = uParam0->f_6.f_3;
	if (!func_133(&(uParam0->f_1), iVar1, vVar2, uVar5, 1, 0, 0, 1, 1))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return false;
	}
	iVar6 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar6))
	{
	}
	iVar7 = func_134(iVar0);
	PED::_SET_PED_OUTFIT_PRESET(iVar6, iVar7, false);
	if (!NETWORK::_0xB07D3185E11657A5(iVar6))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
	}
	iVar8 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar8))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
	}
	NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(uParam0->f_1, 1, 1, 256);
	NETWORK::_0xF3354D6CA46F419D(iVar6, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, Global_1137451.f_5);
	ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
	func_135(uParam0, 0);
	func_136(iVar6);
	func_123(uParam1, iParam2, uParam0->f_2, iVar6);
	return true;
}

bool func_75(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;

	iVar0 = func_33(uParam0);
	if (iVar0 == 8)
	{
		return false;
	}
	iVar1 = uParam0->f_2;
	iVar2 = NETWORK::NET_TO_PED(uParam0->f_1);
	bVar3 = func_64(iVar1);
	bVar4 = func_89(iVar1);
	if (!bVar3 && !bVar4)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return false;
	}
	vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
	vVar8 = { func_103(iVar1) };
	fVar11 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar5, vVar8, true);
	if (fVar11 > 30f)
	{
		return false;
	}
	return true;
}

void func_76(var uParam0, int iParam1)
{
	if (uParam0->f_11 == iParam1)
	{
		return;
	}
	uParam0->f_11 = iParam1;
}

bool func_77(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_33(uParam0);
	if (iVar0 == 4 || iVar0 == 5)
	{
		return false;
	}
	if (!func_81(uParam1))
	{
		return false;
	}
	return true;
}

int func_78(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	bVar1 = func_68(uParam0, 0);
	if (bVar1)
	{
		return 1;
	}
	if (func_137(uParam0->f_2, iVar0, &iVar2))
	{
		iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		iVar4 = iVar3;
		if (func_113(uParam1[iVar4 /*2*/], 0))
		{
			return 1;
		}
		iVar5 = func_138();
		bVar6 = func_139(uParam0->f_12.f_5);
		if (bVar6)
		{
			func_140(iVar5, uParam0->f_12.f_5, &uVar7, &uVar8, &iVar9, &uVar10, &uVar11, &uVar12);
			if (iVar9 < 2)
			{
				return 1;
			}
		}
		if (func_141(iVar2))
		{
			return 1;
		}
		uParam0->f_12 = iVar2;
		return 2;
	}
	return 1;
}

int func_79(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	vector3 vVar12;
	int iVar15;
	float fVar16;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = func_138();
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	bVar5 = true;
	if (uParam0->f_12.f_4 == -15)
	{
		func_19(&(uParam0->f_12));
		uParam0->f_12.f_1 = { vVar2 };
		uParam0->f_12.f_4 = iVar1;
	}
	func_140(iVar1, uParam0->f_12.f_4, &uVar6, &iVar7, &uVar8, &uVar9, &uVar10, &uVar11);
	if (iVar7 >= 20)
	{
		bVar5 = false;
	}
	vVar12 = { vVar2 };
	iVar15 = PED::_0x243E1B4607040057(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar15))
	{
		vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar15, true, false) };
	}
	fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar12, uParam0->f_12.f_1, true);
	if (fVar16 >= 15f)
	{
		bVar5 = false;
	}
	if (func_141(uParam0->f_12))
	{
		bVar5 = false;
	}
	if (!bVar5)
	{
		func_19(&(uParam0->f_12));
		uParam0->f_12.f_5 = iVar1;
		return 1;
	}
	return 2;
}

void func_80(var uParam0)
{
	struct<20> Var0;

	Var0.f_4 = 2;
	Var0.f_7 = uParam0;
	func_94(Var0, func_93(0, 8));
}

bool func_81(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_142(iVar0, 1, 1))
		{
		}
		else if (func_113(uParam0[iVar0 /*2*/], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_82(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	bVar2 = false;
	fVar3 = func_99(iVar0, iVar1, 1, 1);
	if (fVar3 <= 8f)
	{
		bVar2 = true;
	}
	iVar4 = func_138();
	if (bVar2)
	{
		if (uParam0->f_18 == -15)
		{
			func_20(&(uParam0->f_18));
			uParam0->f_18 = iVar4;
		}
	}
	bVar5 = true;
	if (uParam0->f_18 != -15)
	{
		func_140(iVar4, uParam0->f_18, &uVar6, &iVar7, &uVar8, &uVar9, &uVar10, &uVar11);
		if (iVar7 >= 5)
		{
			bVar5 = false;
		}
	}
	if (!bVar5)
	{
		return 7;
	}
	return 6;
}

int func_83(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { func_103(uParam0->f_2) };
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vVar4, true);
	if (fVar7 <= 15f)
	{
		return 1;
	}
	return 7;
}

int func_84(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;

	iVar0 = uParam0->f_2;
	iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	vVar5 = { func_103(iVar0) };
	fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vVar5, true);
	if (fVar8 > 30f)
	{
		return 7;
	}
	if (!func_89(iVar0))
	{
		return 1;
	}
	return 8;
}

int func_85(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1137457[iParam0 /*12*/].f_1;
}

bool func_86(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_87(int iParam0)
{
	bool bVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	bVar0 = func_130(&(Global_1137457[iParam0 /*12*/]), 0);
	return bVar0;
}

bool func_88(int iParam0)
{
	bool bVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	bVar0 = func_130(&(Global_1137457[iParam0 /*12*/]), 1);
	return bVar0;
}

bool func_89(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (func_130(&(Global_1137457[iParam0 /*12*/]), 4))
	{
		return true;
	}
	return false;
}

bool func_90(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_143(iParam0, &iVar0))
	{
		return false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
	}
	*iParam1 = iVar0;
	*uParam2 = { TASK::_GET_SCENARIO_POINT_COORDS(*iParam1, true) };
	*uParam3 = TASK::_GET_SCENARIO_POINT_HEADING(*iParam1, true);
	return true;
}

bool func_91(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (!func_142(iVar3, 1, 1))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_144(iVar0), vParam0, true);
			if (fVar2 <= fParam3)
			{
				return true;
			}
		}
		iVar3++;
	}
	return false;
}

bool func_92(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

var func_93(int iParam0, int iParam1)
{
	return func_145(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_94(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam20))
	{
		return;
	}
	vParam0.x = 11;
	vParam0.f_1 = iVar0;
	vParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &vParam0, 20, 5, &uParam20);
}

void func_95(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_96(int iParam0, int iParam1)
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

int func_97(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	var uVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	float fVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (TASK::_0x0C3CB2E600C8977D(iParam1, 1))
	{
		return 0;
	}
	bVar5 = func_90(iParam0, &iVar0, &uVar1, &uVar4);
	if (!bVar5)
	{
		return 0;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return 0;
	}
	bVar6 = true;
	iVar7 = 0;
	fVar8 = -1f;
	if (bParam2)
	{
		bVar6 = false;
		iVar7 = joaat("WORLD_ANIMAL_DOG_SITTING");
		fVar8 = 0f;
	}
	TASK::_TASK_USE_SCENARIO_POINT(iParam1, iVar0, 0, 0, bVar6, bParam2, iVar7, false, fVar8, false);
	return 1;
}

int func_98(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
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
	TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, 0, 0, 2f, 2f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, 0);
	PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	PED::_0xAAB050DA48B57978(iParam0, "Interaction_Happy", iParam1, 20000, 4);
	return 1;
}

float func_99(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_100(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	TASK::TASK_GO_TO_ENTITY(iParam0, iVar0, -1, 8f, 2f, 12f, 0);
	return 1;
}

int func_101(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
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
	iVar0 = joaat("MOODSTRESSED");
	TASK::TASK_BARK(iParam0, iParam1, iVar0);
	return 1;
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	vVar1 = { func_103(iParam1) };
	if (func_104(vVar1))
	{
		return 0;
	}
	iVar4 = 5242884;
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vVar1, 2f, -1, 10f, iVar4, 40000f);
	return 1;
}

Vector3 func_103(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1134390[func_146() /*83*/].f_38.f_4;
	}
	return Global_1134390[iParam0 /*83*/].f_38.f_4;
}

bool func_104(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_105(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = 5242884;
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vParam1, 2f, -1, fParam4, iVar0, 40000f);
	return 1;
}

int func_106(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	iVar1 = ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, iVar0, 1);
	fVar3 = 1000000f;
	bVar4 = false;
	iVar5 = 0;
	while (iVar5 < iVar1)
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar6))
		{
		}
		else
		{
			iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
			if (ENTITY::IS_ENTITY_DEAD(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_A_PED(iVar7))
			{
			}
			else
			{
				iVar8 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar7);
				iVar9 = PED::GET_RELATIONSHIP_BETWEEN_PEDS(iParam0, iVar8);
				if (iVar9 != 6)
				{
				}
				else
				{
					fVar10 = func_99(iParam0, iVar8, 1, 1);
					if (fVar10 < fVar3)
					{
						bVar4 = true;
						iVar2 = iVar8;
						fVar3 = fVar10;
					}
				}
			}
		}
		iVar5++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (bVar4)
	{
		*iParam5 = iVar2;
		*uParam6 = fVar3;
		return 1;
	}
	return 0;
}

void func_107(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_1, iParam1))
	{
		return;
	}
	func_95(&(uParam0->f_1), iParam1);
}

void func_108(var uParam0, int iParam1)
{
	if (!func_92(uParam0->f_1, iParam1))
	{
		return;
	}
	func_132(&(uParam0->f_1), iParam1);
}

bool func_109(vector3 vParam0, int iParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar10;

	fVar1 = 1000000f;
	bVar2 = false;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (!func_142(iVar3, 1, 1))
		{
		}
		else
		{
			iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar6, true, false) };
			if (ENTITY::IS_ENTITY_DEAD(iVar6))
			{
			}
			else
			{
				fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar7, vParam0, true);
				if (fVar10 < fVar1)
				{
					iVar0 = iVar5;
					fVar1 = fVar10;
					bVar2 = true;
				}
			}
		}
		iVar3++;
	}
	if (bVar2)
	{
		*iParam3 = iVar0;
		*fParam4 = fVar1;
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_147(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

bool func_111(var uParam0, int iParam1)
{
	char cVar0[64];
	var uVar8;

	StringCopy(&cVar0, "relGroupCampDog", 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	uVar8 = PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(Global_1137451.f_5));
	return uVar8;
}

void func_112(int iParam0, int iParam1, int iParam2)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
}

bool func_113(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_1, iParam1))
	{
		return true;
	}
	return false;
}

void func_114(int iParam0, var uParam1, int* iParam2)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 11:
			func_148(iParam0, uParam1, iParam2);
			break;
	}
}

bool func_115(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	int iVar16;
	vector3 vVar17;
	int iVar20;
	int iVar21;
	bool bVar22;
	vector3 vVar23;
	var uVar26;
	vector3 vVar27;
	int iVar30;
	int iVar31;
	var uVar32;

	vVar0 = { func_103(PLAYER::NETWORK_PLAYER_ID_TO_INT()) };
	iVar6 = 1;
	vVar7 = { Global_1296859.f_17 };
	if (func_104(vVar0))
	{
		vVar11 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar10 = vVar11.z;
	}
	else
	{
		fVar10 = func_149(vVar0, vVar7, 1);
	}
	fVar14 = 40f;
	fVar15 = 80f;
	iVar16 = (uParam0->f_2 % 20);
	fVar10 = (fVar10 + ((BUILTIN::TO_FLOAT(iVar16) * 30f) * func_150((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar17 = { vVar7 + Vector(0f, -BUILTIN::COS(fVar10), BUILTIN::SIN(fVar10)) * FtoV(((fVar15 + fVar14) * 0.5f)) };
	iVar20 = func_151(uParam0);
	switch (iVar20)
	{
		case 0:
			func_153(uParam0, func_152());
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_154(uParam0, 1);
			break;
		case 1:
			iVar21 = 0;
			while (iVar21 < 10)
			{
				if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vVar17, iVar21, &vVar3, 1, 1077936128 /* Float: 3f */, 0))
				{
					func_154(uParam0, 2);
					return false;
				}
				if (!func_155(vVar3))
				{
				}
				else
				{
					func_153(uParam0, vVar3);
					func_154(uParam0, 3);
					return false;
				}
				iVar21++;
			}
			func_154(uParam0, 2);
			break;
		case 2:
			if (func_156(vVar17, &(uParam0->f_3), &bVar22, iVar6, 0, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, 0))
			{
				vVar23 = { func_71(uParam0) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar23, &uVar26, true))
				{
					vVar23 = { vVar23.x, vVar23.y, uVar26 };
				}
				if (!func_155(vVar23))
				{
					func_154(uParam0, 5);
				}
				func_154(uParam0, 3);
				return false;
			}
			if (bVar22)
			{
				func_154(uParam0, 5);
				return false;
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				vVar27 = { func_71(uParam0) };
				iVar30 = 23;
				uParam0->f_13 = PATHFIND::_0x348F211CA2404039(0, vVar27, vVar7, iVar30);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						func_154(uParam0, 5);
					}
				}
			}
			else
			{
				iVar31 = PATHFIND::_0x3A0F82F6EE2291C8(uParam0->f_13);
				switch (iVar31)
				{
					case 2:
						break;
					case 0:
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						func_154(uParam0, 5);
						return false;
					case 1:
						if (!PATHFIND::_0x8800776E410EB669(uParam0->f_13))
						{
							PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
							func_154(uParam0, 5);
							return false;
						}
						uVar32 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (func_157(uVar32, 2))
						{
							PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
							func_154(uParam0, 5);
							return false;
						}
						func_154(uParam0, 4);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			func_154(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 20)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			func_154(uParam0, 0);
			break;
	}
	return false;
}

void func_116(var uParam0, vector3 vParam1)
{
	struct<20> Var0;

	Var0.f_4 = 4;
	Var0.f_7 = uParam0;
	Var0.f_16 = { vParam1 };
	func_94(Var0, func_93(0, 8));
}

void func_117(int* iParam0, int iParam1)
{
	if (!func_92(*iParam0, iParam1))
	{
		return;
	}
	func_132(iParam0, iParam1);
}

bool func_118(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1)
			{
				return true;
			}
		}
	}
	return false;
}

float func_119(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_158(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_120(var uParam0, int* iParam1, int iParam2, char[4] cParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (!func_113(uParam0[iVar1 /*2*/], 4))
	{
		return false;
	}
	iVar2 = iParam2;
	if (!func_113(uParam0[iVar2 /*2*/], 4))
	{
		return false;
	}
	bVar3 = true;
	if (iParam2 == iVar0)
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if (func_113(uParam0[iVar1 /*2*/], 5) || func_113(uParam0[iVar2 /*2*/], 5))
		{
			*bParam4 = 1;
			return false;
		}
	}
	if (func_30(iParam1, 2))
	{
		*cParam3 = { func_121(iParam1) };
		return true;
	}
	else
	{
		return func_122(iVar2, cParam3);
	}
	return false;
}

struct<8> func_121(int* iParam0)
{
	return iParam0->f_1;
}

bool func_122(int iParam0, char[4] cParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	*cParam1 = { Global_1137457[iParam0 /*12*/].f_2 };
	return true;
}

int func_123(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	char cVar0[64];
	bool bVar8;
	bool bVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam2))
	{
		return 0;
	}
	StringCopy(&cVar0, "", 64);
	bVar8 = false;
	bVar9 = func_120(uParam0, iParam1, iParam2, &cVar0, &bVar8);
	if (bVar8)
	{
		func_32(iParam1, 3);
		return 1;
	}
	if (bVar9)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(func_159(&cVar0)) <= 0)
		{
			return 0;
		}
		PED::_SET_PED_PROMPT_NAME(iParam3, &cVar0);
		func_32(iParam1, 3);
		return 1;
	}
	return 0;
}

int func_124(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (PED::_0x7FC84E85D98F063D(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
	}
}

void func_126(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_160(&(Global_1137457[iParam0 /*12*/]), 3);
}

bool func_127()
{
	if (!func_161() && func_162(1))
	{
		return true;
	}
	return false;
}

void func_128(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_163(iParam0, &iVar0, &iVar1);
	if (!func_164(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_165(iParam0, 1024))
	{
		return;
	}
	func_166(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = uParam1;
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

int func_129(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

bool func_130(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_10, iParam1))
	{
		return true;
	}
	return false;
}

var func_131(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam0);
	return uVar0;
}

void func_132(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_133(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_167(iParam1))
	{
		return false;
	}
	iVar0 = func_168(iParam1, vParam2, iParam5, iParam8, 1, bParam6, bParam7, bParam9);
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

int func_134(int iParam0)
{
	int iVar0;

	if (func_169(iParam0, -1372720971))
	{
		iVar0 = 0;
	}
	else if (func_169(iParam0, 1028787971))
	{
		iVar0 = 1;
	}
	else if (func_169(iParam0, 1271835644))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_135(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_10, iParam1))
	{
		return;
	}
	func_95(&(uParam0->f_10), iParam1);
}

void func_136(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_CAN_RAGDOLL(iParam0, false);
	PED::_0x6569F31A01B4C097(iParam0, 1, 0);
	PED::_0x6569F31A01B4C097(iParam0, 0, 0);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 2, false);
}

bool func_137(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	var uVar7;
	bool bVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	bVar8 = func_90(iParam0, &uVar3, &vVar4, &uVar7);
	if (!bVar8)
	{
		return false;
	}
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar4, true);
	if (fVar9 > 10f)
	{
		return false;
	}
	if (!func_109(vVar0, &iVar10, &fVar9))
	{
		return false;
	}
	iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar11))
	{
		return false;
	}
	if (fVar9 <= 10f)
	{
		*iParam2 = iVar10;
		return true;
	}
	return false;
}

int func_138()
{
	return Global_1902818;
}

bool func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_170(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_171(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_172(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_173(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_174(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_175(iParam0);
	if (iVar5 < 1 || iVar5 > func_176(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_140(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_177(iParam0, iParam1, 1))
	{
		iVar0 = func_174(iParam1);
		iVar1 = func_173(iParam0);
		iVar2 = (func_173(iParam0) - func_173(iParam1));
		iVar3 = (func_174(iParam0) - func_174(iParam1));
		iVar4 = (func_175(iParam0) - func_175(iParam1));
		iVar5 = (func_172(iParam0) - func_172(iParam1));
		iVar6 = (func_171(iParam0) - func_171(iParam1));
		iVar7 = (func_170(iParam0) - func_170(iParam1));
	}
	else
	{
		iVar0 = func_174(iParam0);
		iVar1 = func_173(iParam1);
		iVar2 = (func_173(iParam1) - func_173(iParam0));
		iVar3 = (func_174(iParam1) - func_174(iParam0));
		iVar4 = (func_175(iParam1) - func_175(iParam0));
		iVar5 = (func_172(iParam1) - func_172(iParam0));
		iVar6 = (func_171(iParam1) - func_171(iParam0));
		iVar7 = (func_170(iParam1) - func_170(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_176(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_178(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

bool func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iVar0);
	iVar2 = iVar1;
	switch (iVar2)
	{
		case joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1"):
		case joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"):
			return true;
	}
	return false;
}

bool func_142(int iParam0, bool bParam1, bool bParam2)
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

bool func_143(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!func_179(iParam0, &vVar0))
	{
		return false;
	}
	if (func_104(vVar0))
	{
		return false;
	}
	iVar3 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("WORLD_ANIMAL_DOG_PLAYER_TENT_TG"), 5.5f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar3))
	{
		*iParam1 = iVar3;
		return true;
	}
	return false;
}

Vector3 func_144(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

var func_145(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_180() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_181());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_181());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_181());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_182(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_183(iVar2))
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
				if (iVar9 & 8192 != 0 && func_184(iVar2) != 1)
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
					if (!func_185(iVar10))
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

int func_146()
{
	return Global_1102219.f_3672;
}

void func_147(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

void func_148(int iParam0, var uParam1, int* iParam2)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 20))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 1:
			func_186(&Var0, uParam1, iParam2);
			break;
		case 3:
			func_187(&Var0, iParam2);
			break;
		case 4:
			func_188(&Var0, uParam1, iParam2);
			break;
		case 5:
			func_189(&Var0, uParam1);
			break;
		case 6:
			func_190(&Var0, uParam1);
			break;
	}
}

float func_149(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

float func_150(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_151(var uParam0)
{
	return *uParam0;
}

Vector3 func_152()
{
	return 0f, 0f, 0f;
}

void func_153(var uParam0, vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 };
}

void func_154(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_155(vector3 vParam0)
{
	var uVar0;
	bool bVar1;

	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		return false;
	}
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		return false;
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(1f, 0f, 0f), &uVar0, false))
	{
		return false;
	}
	bVar1 = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);
	if (bVar1)
	{
		return false;
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
	{
		return false;
	}
	if (VOLUME::_0x769BB7626B8CDB06(vParam0, 15f, 0, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_156(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_191(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_192(&(iParam3->f_1), iParam5, vParam0);
				if (!func_104(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_193(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_157(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_158(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

char[] func_159(char[4] cParam0)
{
	return cParam0;
}

void func_160(var uParam0, int iParam1)
{
	if (func_92(uParam0->f_10, iParam1))
	{
		return;
	}
	func_95(&(uParam0->f_10), iParam1);
}

bool func_161()
{
	int iVar0;

	if (func_194())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1904651[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_162(bool bParam0)
{
	if (func_195())
	{
		return false;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (func_196(&(Global_1102219.f_4), 1, 5))
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_161())
		{
			return false;
		}
	}
	if ((Global_13 || Global_1048584) || func_197())
	{
		return false;
	}
	if (!func_198())
	{
		return false;
	}
	if (func_199())
	{
		return false;
	}
	if (MISC::_0xF236C84C6ADFCB2F())
	{
		return false;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if ((Global_1915715.f_20638 && Global_1915715.f_20241.f_43 == 2) && Global_1940311.f_1)
	{
		return false;
	}
	if (func_200())
	{
		return false;
	}
	return true;
}

void func_163(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_164(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_201(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_202(iParam0))
	{
		return false;
	}
	if (func_203(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_165(iParam0, 1)) || func_204(32768))
	{
		if (!func_165(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_198())
	{
		return false;
	}
	return true;
}

bool func_165(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_166(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

bool func_167(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_168(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

int func_169(int iParam0, int iParam1)
{
	if (!func_86(iParam0, 0))
	{
		return func_206(func_205(iParam0), iParam1);
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

int func_170(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_171(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_172(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_173(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_207(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_174(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_175(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_176(int iParam0, int iParam1)
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

bool func_177(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_139(iParam1) || !func_139(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_178(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

bool func_179(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	*uParam1 = { Global_1134390[iVar0 /*83*/].f_38.f_8 };
	return true;
}

int func_180()
{
	return Global_1051252.f_12;
}

char* func_181()
{
	return "unnamed";
}

int func_182(int iParam0)
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
			return iVar0;
		}

bool func_183(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_208(36, iParam0);
}

int func_184(int iParam0)
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

bool func_185(int iParam0)
{
	if (func_209(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_210(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

void func_186(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;

	if (uParam0->f_7 != uParam1->f_2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_211(iParam2, uParam0->f_8);
	bVar1 = MISC::_0xE98D55C5983F2509(iVar0);
	func_117(iParam2, 1);
	func_117(iParam2, 3);
	func_32(iParam2, 2);
	func_32(iParam2, 4);
}

void func_187(var uParam0, int* iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_7)
	{
		return;
	}
	func_110(&(iParam1->f_10));
	func_32(iParam1, 5);
}

void func_188(var uParam0, var uParam1, int* iParam2)
{
	if (uParam0->f_7 != uParam1->f_2)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	func_110(&(iParam2->f_10));
	func_153(&(iParam2->f_10), uParam0->f_16);
	func_135(uParam1, 1);
}

void func_189(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_7)
	{
		return;
	}
	bVar1 = UNLOCK::_UNLOCK_IS_UNLOCKED(uParam0->f_6);
	func_212(uParam1->f_2, 451736625, bVar1);
}

void func_190(var uParam0, var uParam1)
{
	if (uParam0->f_7 != uParam1->f_2)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (uParam0->f_19)
	{
		func_135(uParam1, 2);
	}
	else
	{
		func_135(uParam1, 3);
	}
}

void func_191(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (!func_104(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			break;
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
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
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((80f - 40f) / 2f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(25f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(40f, 50f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 8f);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(40f, 100f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_213(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_213(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_214(vParam2, 1);
				iVar1 = func_215(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					TASK::_0x2EB977293923C723(*uParam0, func_213(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_213(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_213(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(80f, 150f, 17.5f, iParam1));
				}
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_213(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_213(150f, 190f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

void func_192(var uParam0, int iParam1, vector3 vParam2)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 53:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 51:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			break;
		case 46:
		case 47:
		case 48:
			if (func_214(vParam2, 1) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
		case 52:
			break;
	}
}

Vector3 func_193(vector3 vParam0)
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

bool func_194()
{
	return Global_1904651.f_8683 != -1;
}

bool func_195()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_196(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_197()
{
	return Global_1071686.f_28662.f_22.f_3 != 0;
}

bool func_198()
{
	if (!func_216())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_199()
{
	return Global_1896738.f_382;
}

bool func_200()
{
	var uVar0;

	if (!func_216())
	{
		return false;
	}
	uVar0 = Global_1904651.f_8685;
	Global_1904651.f_8685 = 0;
	return uVar0;
}

bool func_201(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_202(int iParam0)
{
	if (func_165(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_203(int iParam0)
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

bool func_204(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_205(int iParam0)
{
	return iParam0;
}

int func_206(int iParam0, int iParam1)
{
	if (!func_217(iParam0, 2))
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

int func_207(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_208(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_196(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_146())
	{
		return func_196(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_196(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_209(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_210(int iParam0)
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
		func_218(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_219(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

void func_211(int* iParam0, struct<8> Param1)
{
	iParam0->f_1 = { Param1 };
}

void func_212(var uParam0, int iParam1, bool bParam2)
{
	struct<20> Var0;

	Var0.f_4 = 6;
	Var0.f_7 = uParam0;
	Var0.f_6 = iParam1;
	Var0.f_19 = bParam2;
	func_94(Var0, func_93(0, 8));
}

float func_213(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_214(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_220();
	if (func_221(iVar0))
	{
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887339[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_222(vParam0, iParam3);
}

int func_215(vector3 vParam0)
{
	return func_223(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_216()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_217(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

void func_218(int iParam0)
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
	func_219(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_219(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_220()
{
	return Global_1893587.f_2;
}

bool func_221(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_222(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_224(vParam0);
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

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

int func_224(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_225(vParam0, 0f, 0f, 0, 2);
	return func_225(vParam0, Global_1892740[iVar0 /*3*/].f_1, Global_1892740[iVar0 /*3*/].f_2, Global_1892740[iVar0 /*3*/], 4);
}

int func_225(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

