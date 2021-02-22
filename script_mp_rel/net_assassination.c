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
	struct<285> Local_15 = { 0, 0, 21, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 5, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, -1, -1, -1, 6, 0, 0, 0, 0, 0, 0, 1, 0, 7, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 255, 0 } ;
	struct<8> Local_300[32];
	struct<1017> Local_557 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 18, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 255;
#endregion

void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	func_1(&uScriptParam_0);
	while (!func_2(Local_557.f_2))
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4(uScriptParam_0);
	func_5();
}

void func_1(var uParam0)
{
	func_6(32, *uParam0);
	func_7();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_15, 285, 41);
	func_8(NETWORK::_0xBA24095EA96DFE17(&Local_15), 285, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_300, 257, 42);
	func_9(NETWORK::_0x690806BC83BC8CA2(&(Local_300[0 /*8*/])), 257, "m_clientData");
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	func_11(uParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_12(uParam0);
	}
}

bool func_2(struct<2> Param0)
{
	if (func_13(0, 0))
	{
		return true;
	}
	else if (func_14(Param0, 1, 0))
	{
		return true;
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return true;
	}
	else if (Local_300[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] == 3)
	{
		return true;
	}
	return false;
}

void func_3()
{
	Local_557.f_1008 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_15();
	func_16();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_17();
	}
}

void func_4(var uParam0)
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
	int iVar9;
	int iVar10;

	func_18(0);
	if (DATAFILE::_0x603AC35FD4602C76(Local_557.f_577))
	{
		func_19();
		func_20();
		iVar0 = 0;
		while (iVar0 < Local_557.f_20.f_548)
		{
			func_22(func_21(iVar0));
			func_24(func_23(iVar0));
			func_22(func_25(iVar0));
			iVar0++;
		}
		iVar3 = 0;
		while (iVar3 < Local_557.f_20.f_555)
		{
			iVar1 = func_26(iVar3);
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				func_22(func_27(iVar3, iVar2));
				func_24(func_28(iVar3, iVar2));
				func_22(func_29(iVar3, iVar2));
				iVar2++;
			}
			iVar3++;
		}
		DATAFILE::_DATAFILE_UNLOAD(Local_557.f_577);
	}
	if (func_30(Local_557.f_957))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Local_557.f_957);
	}
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_557.f_960), iVar4))
		{
			func_31(iVar5);
		}
		iVar4++;
	}
	func_32(0);
	func_33(0);
	func_34();
	func_35();
	func_36();
	func_37();
	func_38();
	func_39();
	func_40();
	func_41();
	func_42();
	if (func_43(1048576))
	{
		PLAYER::_0xDFC85C5199045026(PLAYER::PLAYER_ID(), 1f);
		func_44(1048576);
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (func_43(4) && func_45())
		{
			func_46(131072);
		}
		return;
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192) && !func_47(&(Local_300[Local_557.f_1008 /*8*/]), 16384))
	{
		func_48();
		func_49(1);
	}
	iVar6 = 0;
	while (iVar6 < 18)
	{
		if (func_50(iVar6, 256))
		{
		}
		else if (func_50(iVar6, 2))
		{
		}
		else
		{
			func_22(Local_557.f_20.f_422[iVar6 /*4*/]);
		}
		iVar6++;
	}
	iVar8 = PLAYER::PLAYER_PED_ID();
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_51(iVar0, 131072) && func_52(iVar0, &iVar7, 0, 1))
		{
			PED::_0x3088634CF8C819CF(iVar7);
		}
		if (func_53(iVar0))
		{
			if (func_52(iVar0, &iVar7, 0, 1))
			{
				ENTITY::_0x5826EFD6D73C4DE5(iVar7);
			}
			if (func_51(iVar0, 65536) && func_54(iVar0, &iVar7, 0))
			{
				ENTITY::_0x5826EFD6D73C4DE5(iVar7);
			}
		}
		if (((func_55(Local_15.f_2[iVar0 /*9*/].f_2) && func_51(iVar0, 32768)) && func_52(iVar0, &iVar7, 1, 0)) && PED::GET_RELATIONSHIP_BETWEEN_PEDS(iVar7, iVar8) == 6)
		{
			func_56(iVar0, iVar7);
		}
		iVar0++;
	}
	if (!func_43(func_57(joaat("MP_GFH_FAIL"))) && !func_43(func_57(joaat("MP_GFH_END"))))
	{
		func_58(joaat("MP_GFH_FAIL"), 1);
	}
	if (func_59(8192) && func_43(4))
	{
		if (PLAYER::_0xA62BBAAE67A05BB0(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 0);
		}
		PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::PLAYER_ID());
	}
	func_60();
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return;
	}
	func_61();
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_62(iVar0, 1);
		iVar0++;
	}
	iVar9 = 0;
	while (iVar9 < 2)
	{
		func_63(iVar9);
		iVar9++;
	}
	iVar10 = 0;
	while (iVar10 < 5)
	{
		if (!PED::DOES_GROUP_EXIST(Local_15.f_192[iVar10]))
		{
		}
		else
		{
			PED::REMOVE_GROUP(Local_15.f_192[iVar10]);
		}
		iVar10++;
	}
	iVar6 = 0;
	while (iVar6 < 18)
	{
		func_64(iVar6);
		iVar6++;
	}
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
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
			func_5();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_5();
		}
		if (func_65() == 0)
		{
			if (func_66())
			{
				func_5();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	return 1;
}

int func_8(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
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
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
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
			func_5();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_11(var uParam0)
{
	Local_557 = *uParam0;
	Local_557.f_1 = uParam0->f_5;
	Local_557.f_2 = { uParam0->f_7 };
	Local_557.f_20.f_556 = func_67(Local_557.f_2);
	Local_557.f_20 = func_70(func_69(func_68(joaat("ASSASSINATION")), Local_557.f_20.f_556));
	Local_557.f_20.f_1 = func_68(Local_557.f_20);
	Local_557.f_20.f_16 = func_71(Local_557.f_20);
}

void func_12(var uParam0)
{
	Local_15.f_283 = uParam0->f_9;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_283))
	{
		func_72(6);
		return;
	}
	Local_15.f_282 = GANG::_0x901E0DC25080C8B9(Local_15.f_283);
	if (!GANG::_0xD6F6ACF4392187FB(Local_15.f_282))
	{
		func_72(6);
		return;
	}
	Local_15.f_278 = GANG::_0x149A2751AB66AC02(Local_15.f_282);
}

bool func_13(bool bParam0, bool bParam1)
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

bool func_14(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_73(Global_1051213) && !func_74(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_75(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_76(iParam3, 255))
	{
		Global_1071686.f_28351 = 4;
		return true;
	}
	if (Global_263042[Global_1296859 /*70*/] > 2)
	{
		Global_1071686.f_28351 = 5;
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1071686.f_28351 = 6;
		return true;
	}
	if (func_77())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_73(Global_1051213))
		{
			Global_1071686.f_28351 = 8;
			return true;
		}
	}
	if (Global_265377.f_124675 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265377.f_124675))
	{
		Global_1071686.f_28351 = 9;
		return true;
	}
	Global_1071686.f_28351 = 0;
	return false;
}

void func_15()
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	Local_557.f_1008 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				func_78(iVar0);
				break;
			case -1065733433:
				func_79(iVar0);
				break;
			case -454144443:
				func_80(iVar0);
				break;
			case -507840394:
				func_81(iVar0);
				break;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar1))
		{
			case joaat("EVENT_ENTITY_EXPLOSION"):
				func_82(iVar1);
				break;
		}
		iVar1++;
	}
}

void func_16()
{
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 2))
	{
		func_83(&(Local_300[Local_557.f_1008 /*8*/]), 3);
	}
	switch (func_84(&(Local_300[Local_557.f_1008 /*8*/])))
	{
		case 0:
			func_85();
			if (func_86() != 4)
			{
				return;
			}
			func_83(&(Local_300[Local_557.f_1008 /*8*/]), 1);
			func_87();
			break;
		case 1:
			func_88();
			if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 1))
			{
				return;
			}
			func_83(&(Local_300[Local_557.f_1008 /*8*/]), 2);
			break;
		case 2:
			func_89();
			if (func_90() != 6)
			{
				return;
			}
			if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 16) && func_43(4))
			{
				func_91();
			}
			func_92();
			if (!func_93())
			{
				return;
			}
			func_83(&(Local_300[Local_557.f_1008 /*8*/]), 3);
			break;
	}
}

void func_17()
{
	if (func_86() != 4)
	{
		return;
	}
	if (func_59(4))
	{
		func_72(6);
		return;
	}
	switch (func_90())
	{
		case 0:
			func_94();
			func_72(1);
			break;
		case 1:
			if (!func_95())
			{
				return;
			}
			func_72(2);
			break;
		case 2:
			func_96();
			if (!func_59(1))
			{
				return;
			}
			func_72(3);
			break;
		case 3:
			func_97();
			if (!func_59(2))
			{
				return;
			}
			if (func_45())
			{
				func_72(4);
				return;
			}
			func_72(5);
			break;
		case 4:
			func_98();
			if (!func_59(262144))
			{
				return;
			}
			func_72(5);
			break;
		case 5:
			func_99();
			if (Local_15.f_275 <= 0)
			{
				if (func_45() && !func_59(4194304))
				{
					func_100(32);
				}
				else
				{
					func_100(64);
				}
			}
			else if (func_59(16))
			{
				if ((Local_557.f_20.f_16 == 1320143426 && Local_557.f_20.f_549 > 0) && Local_15.f_275 < Local_557.f_20.f_549)
				{
					func_100(64);
				}
				else
				{
					func_100(32);
				}
				func_100(131072);
			}
			else if (func_59(1048576))
			{
				func_100(32);
			}
			else if (func_59(8388608))
			{
				func_100(32);
			}
			if (!func_59(32) && !func_59(64))
			{
				return;
			}
			func_72(6);
			break;
		case 6:
			func_101();
			break;
	}
}

void func_18(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_557.f_978[iVar0]))
		{
		}
		else if (bParam0)
		{
			func_102(Local_557.f_978[iVar0], 1);
		}
		else
		{
			func_103(Local_557.f_978[iVar0]);
		}
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<5> Var12;

	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_553)
	{
		sVar1 = func_105(func_104(iVar0));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
		}
		else
		{
			if (!Local_557.f_20.f_495[iVar0 /*2*/].f_1)
			{
				return;
			}
			TASK::REMOVE_WAYPOINT_RECORDING(sVar1);
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 21)
	{
		func_106(iVar2);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if ((func_107(iVar3, 4) && func_108(iVar3, &Var12)) && func_109(Var12, -1111171646, &uVar4, 0))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(func_110(&uVar4));
			func_111(iVar3, 4);
			func_111(iVar3, 8);
		}
		iVar3++;
	}
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_43(4194304))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_113(iVar1, &iVar2))
		{
		}
		else
		{
			func_114(iVar2);
			func_115(iVar2, 0, 0);
		}
		iVar1++;
	}
	func_44(4194304);
}

int func_21(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	func_117(Var0, -486752250, &uVar5, 1);
	return uVar5;
}

void func_22(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0) || iParam0 == 0)
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
}

int func_23(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (!func_116(iParam0, &Var0))
	{
		return 0;
	}
	func_117(Var0, 256341061, &uVar5, 0);
	return uVar5;
}

void func_24(int iParam0)
{
	if (!func_118(iParam0))
	{
		return;
	}
	WEAPON::_0xC3896D03E2852236(iParam0);
}

int func_25(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0) && func_117(Var0, 1464077990, &uVar5, 0))
	{
		return uVar5;
	}
	return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
}

int func_26(int iParam0)
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, 1823038874, iParam0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	func_121(&Var0, iParam0, iParam1);
	func_117(Var0, -486752250, &uVar5, 1);
	return uVar5;
}

int func_28(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	func_121(&Var0, iParam0, iParam1);
	func_117(Var0, 256341061, &uVar5, 1);
	return uVar5;
}

int func_29(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_121(&Var0, iParam0, iParam1) && func_117(Var0, 1464077990, &uVar5, 0))
	{
		return uVar5;
	}
	return joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
}

bool func_30(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 0)
	{
		return true;
	}
	return false;
}

void func_31(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28345), iParam0);
		if (func_122(iParam0))
		{
			func_123(iParam0);
		}
	}
}

void func_32(bool bParam0)
{
	if (func_43(262144) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_124(1);
		func_125(262144);
	}
	else
	{
		func_124(0);
		func_44(262144);
	}
}

void func_33(bool bParam0)
{
	if (func_43(524288) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		LAW::_0x009CF9A29972C298(joaat("LAW_CUSTOM_NET_PLAINS_SM_DELAYED"));
		func_125(524288);
	}
	else
	{
		LAW::_0x009CF9A29972C298(0);
		func_44(524288);
	}
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_557.f_20.f_422[iVar0 /*4*/].f_3))
		{
		}
		else
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_557.f_20.f_422[iVar0 /*4*/].f_3, true);
			STREAMING::REMOVE_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_126()));
		}
		iVar0++;
	}
}

void func_35()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_547)
	{
		TASK::DELETE_PATROL_ROUTE(func_127(iVar0));
		iVar0++;
	}
}

void func_36()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_557.f_950[iVar0]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_557.f_950[iVar0]);
		}
		iVar0++;
	}
}

void func_37()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (Local_557.f_20.f_422[iVar0 /*4*/].f_2 == -1)
		{
		}
		else
		{
			GRAPHICS::_0x9CF1836C03FB67A2(&(Local_557.f_20.f_422[iVar0 /*4*/].f_2), 1);
			Local_557.f_20.f_422[iVar0 /*4*/].f_2 = -1;
		}
		iVar0++;
	}
}

void func_38()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_550)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_557.f_962[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(Local_557.f_962[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_552)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_557.f_971[iVar0]))
		{
			POPULATION::_0x74C2B3DC0B294102(Local_557.f_971[iVar0]);
			POPULATION::_0xA1CFB35069D23C23(Local_557.f_971[iVar0]);
			VOLUME::_DELETE_VOLUME(Local_557.f_971[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_557.f_975[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(Local_557.f_975[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_557.f_978[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(Local_557.f_978[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_551)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_557.f_921[iVar0 /*4*/]))
		{
			VOLUME::_DELETE_VOLUME(Local_557.f_921[iVar0 /*4*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_128(Local_557.f_987[iVar0]);
		iVar0++;
	}
}

void func_39()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iVar0 /*9*/]) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_15.f_2[iVar0 /*9*/]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(Local_15.f_2[iVar0 /*9*/]);
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1) == 0)
			{
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1));
			}
		}
		iVar0++;
	}
	func_129(Local_557.f_578.f_1);
	func_129(Local_557.f_578);
	func_129(Local_557.f_578.f_4);
	func_129(Local_557.f_578.f_5);
	func_129(Local_557.f_578.f_3);
	func_129(Local_557.f_578.f_2);
}

void func_40()
{
	func_130();
	func_131();
	func_132();
	func_133();
	func_134();
	func_135();
}

void func_41()
{
	if (!func_43(2))
	{
		return;
	}
	func_136(0);
	func_44(2);
}

void func_42()
{
	if (HUD::_TEXT_DATABASE_HAS_LOADED(func_137()))
	{
		HUD::_TEXT_DATABASE_DELETE(func_137());
	}
}

bool func_43(int iParam0)
{
	return func_138(Local_557.f_5, iParam0);
}

void func_44(int iParam0)
{
	func_139(&(Local_557.f_5), iParam0);
}

bool func_45()
{
	switch (Local_557.f_20.f_16)
	{
		case joaat("POSSE"):
		case joaat("PLAYER"):
			return true;
		default:
			break;
	}
	return false;
}

void func_46(int iParam0)
{
	Global_1102219.f_3 = (Global_1102219.f_3 - (Global_1102219.f_3 && iParam0));
}

bool func_47(var uParam0, int iParam1)
{
	return func_138(uParam0->f_1, iParam1);
}

void func_48()
{
	func_140(2);
}

void func_49(bool bParam0)
{
	if (bParam0)
	{
		func_141(109);
		if (!Global_1296859.f_12)
		{
			func_142(16);
		}
	}
	else
	{
		func_143(109);
		if (!Global_1296859.f_12)
		{
			func_142(16);
		}
	}
}

bool func_50(int iParam0, int iParam1)
{
	return func_138(Local_557.f_20.f_422[iParam0 /*4*/].f_1, iParam1);
}

bool func_51(int iParam0, int iParam1)
{
	return func_138(Local_557.f_20.f_22[iParam0 /*19*/].f_1, iParam1);
}

bool func_52(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/]))
	{
		return false;
	}
	*iParam1 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		if (!bParam3 || !PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
		{
			return false;
		}
	}
	return true;
}

bool func_53(int iParam0)
{
	int iVar0;

	if (!func_59(8192))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_553)
	{
		if (Local_557.f_20.f_495[iVar0 /*2*/] != iParam0)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_54(int iParam0, int iParam1, bool bParam2)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1))
	{
		return false;
	}
	*iParam1 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	return true;
}

bool func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("WAVE_PED"):
		case 1583594396:
			return false;
		default:
			break;
	}
	return true;
}

void func_56(int iParam0, int iParam1)
{
	if (!MAP::DOES_BLIP_EXIST(Local_557.f_584[iParam0]))
	{
		return;
	}
	if (!MAP::_IS_BLIP_ATTACHED_TO_ANY_ENTITY(Local_557.f_584[iParam0]))
	{
		return;
	}
	func_144(iParam0);
	MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
	MAP::_0xDEEDE7C41742E011(Local_557.f_584[iParam0]);
	Local_557.f_584[iParam0] = 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MP_GFH_GLOBAL_START"):
			return 8;
		case 1138140145:
			return 16;
		case joaat("MP_GFH_END"):
			return 32;
		case joaat("MP_GFH_FAIL"):
			return 64;
		case -2111154143:
			return 128;
		default:
			break;
	}
	return 0;
}

void func_58(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_57(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (func_43(iVar0))
	{
		return;
	}
	if (func_145(iParam0, 1, bParam1))
	{
		func_125(iVar0);
	}
}

bool func_59(int iParam0)
{
	return func_138(Local_15.f_1, iParam0);
}

void func_60()
{
	if (func_43(4))
	{
		func_146(0);
		func_147(0);
		if (!func_43(1))
		{
			func_149(func_148(), 1);
		}
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		if (func_45())
		{
			func_46(131072);
		}
		if (func_59(64))
		{
			func_150();
			return;
		}
		else if (func_59(32))
		{
			func_151();
			return;
		}
	}
	else if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 64))
	{
		if (func_59(32))
		{
			func_150();
			return;
		}
		else if (func_59(64))
		{
			func_151();
			return;
		}
	}
	else if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192))
	{
		func_46(131072);
		if (func_59(32))
		{
			func_150();
			return;
		}
		else if (func_59(64))
		{
			func_151();
			return;
		}
	}
	else if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 131072))
	{
		if (func_59(32))
		{
			func_150();
			return;
		}
		else if (func_59(64))
		{
			func_151();
			return;
		}
	}
	func_152();
}

void func_61()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_15.f_263.f_6)
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_15.f_263[iVar0]))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_15.f_263[iVar0]);
		}
		iVar0++;
	}
}

void func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
		if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_KEEP_TASK(iVar0, bParam1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1))
	{
		iVar1 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	}
}

void func_63(int iParam0)
{
	if (func_153(iParam0, 1))
	{
		OBJECT::REMOVE_PICKUP(Local_15.f_217[iParam0 /*2*/]);
	}
}

void func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_198[iParam0]))
	{
		if (func_50(iParam0, 2))
		{
			iVar0 = NETWORK::_NET_TO_PROPSET(Local_15.f_198[iParam0]);
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iVar0);
		}
		else if (func_50(iParam0, 4))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_15.f_198[iParam0]);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false, false))
			{
				VEHICLE::_0x8E5DA070BAD3279E(iVar1, 500f, 1, 0);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
		}
		else if (func_50(iParam0, 128))
		{
			iVar2 = NETWORK::NET_TO_PED(Local_15.f_198[iParam0]);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar2);
		}
		else
		{
			iVar3 = NETWORK::NET_TO_OBJ(Local_15.f_198[iParam0]);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar3);
		}
	}
}

int func_65()
{
	return Global_1572887.f_13;
}

bool func_66()
{
	return Global_1051252.f_8;
}

int func_67(struct<2> Param0)
{
	return func_154(Param0);
}

var func_68(int iParam0)
{
	int iVar0;

	iVar0 = func_156(0, (func_155() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_157(iVar0);
}

int func_69(int iParam0, var uParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<5> Var7;
	var uVar12;

	if (!func_158(iParam0, &Var0))
	{
		return 0;
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var7 = { Var0 };
		Var7.f_2 = 1089670230;
		Var7.f_3 = iVar6;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
		{
		}
		else
		{
			Var7.f_2 = 1649401908;
			DATAFILE::_DATAFILE_GET_HASH(&uVar12, &Var7);
			Var7.f_2 = 1196324698;
			Var7.f_3 = uParam1;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
			{
			}
			else
			{
				return uVar12;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 1779800513:
			return joaat("ASSASSINATION_PVP_PLAYER");
		case 1994622214:
			return joaat("ASSASSINATION_PVP_POSSE");
		case joaat("ASSASSINATION_INTRO"):
			return joaat("ASSASSINATION");
		case joaat("ASSASSINATION_TRACKING_INTRO"):
			return joaat("ASSASSINATION_TRACKING");
		default:
			break;
	}
	return iParam0;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return joaat("PLAYER");
		case joaat("ASSASSINATION_PVP_POSSE"):
			return joaat("POSSE");
		default:
			break;
	}
	return 1320143426;
}

void func_72(int iParam0)
{
	Local_15 = iParam0;
}

bool func_73(struct<2> Param0)
{
	if (!func_159(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_160(Param0))
	{
		return false;
	}
	return true;
}

bool func_74(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_75(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_76(int iParam0, int iParam1)
{
	if (!Global_1071686.f_3)
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
	return (Global_1197355[iParam1 /*12*/] && iParam0) != 0;
}

bool func_77()
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
	if (!func_73(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_78(int iParam0)
{
	struct<32> Var0;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	bool bVar37;
	int iVar38;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (func_45())
	{
		if (!func_161(iVar33, &iVar35))
		{
			return;
		}
		if (!func_162(iVar35))
		{
			return;
		}
		if (func_163(iVar35))
		{
			return;
		}
		iVar34 = PLAYER::GET_PLAYER_PED(Local_15.f_234[iVar35 /*2*/]);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar34))
		{
			return;
		}
		if (iVar34 != iVar33)
		{
			return;
		}
		if (!Var0.f_3)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar33))
			{
				return;
			}
			if (Var0 == Var0.f_1)
			{
				return;
			}
			if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
			{
				return;
			}
			iVar36 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
			if (!PED::IS_PED_A_PLAYER(iVar36))
			{
				return;
			}
			func_164(iVar35, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar36));
			return;
		}
		if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
		{
			return;
		}
		if (func_165(iVar35, Var0, iVar33))
		{
			func_166(iVar35);
		}
		return;
	}
	if (!func_167(iVar33, &iVar32, &bVar37))
	{
		return;
	}
	if (!bVar37)
	{
		if (Var0.f_3)
		{
			func_168(iVar32);
		}
		return;
	}
	if (ENTITY::GET_ENTITY_HEALTH(Var0) == 0)
	{
		if (!Var0.f_3 && !Var0.f_24)
		{
			Var0.f_3 = 1;
		}
	}
	if (!Var0.f_3 || Var0.f_24)
	{
		if (!bVar37 || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar33))
		{
			return;
		}
		if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
		{
			return;
		}
		iVar38 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
		if (!PED::IS_PED_A_PLAYER(iVar38))
		{
			return;
		}
		func_169(iVar32, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar38));
		return;
	}
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return;
	}
	if (func_170(Var0, iVar33, iVar32))
	{
		func_171(iVar32);
	}
}

void func_79(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Var0) || !ENTITY::IS_ENTITY_A_PED(Var0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1) || !ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar3))
	{
		return;
	}
	if (func_45())
	{
		if (!PED::IS_PED_A_PLAYER(iVar2))
		{
			return;
		}
		if (!func_161(iVar2, &iVar4))
		{
			return;
		}
		if (!func_162(iVar4))
		{
			return;
		}
		if (func_163(iVar4))
		{
			return;
		}
		func_164(iVar4, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3));
	}
	else
	{
		if (!func_167(iVar2, &iVar5, &bVar6) || !bVar6)
		{
			return;
		}
		func_169(iVar5, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3));
	}
}

void func_80(int iParam0)
{
	int iVar0;
	int iVar8;
	bool bVar9;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 8))
	{
		return;
	}
	if (!OBJECT::DOES_PICKUP_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP(iVar0))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 2)
	{
		if (!func_172(iVar8, 1))
		{
		}
		else if (Local_15.f_217[iVar8 /*2*/] != iVar0)
		{
		}
		else
		{
			bVar9 = true;
		}
		else
		{
			iVar8++;
		}
	}
	if (!bVar9)
	{
		return;
	}
	OBJECT::REMOVE_PICKUP(Local_15.f_217[iVar8 /*2*/]);
	func_174(11, iVar8, func_173(0, 8), -1);
}

void func_81(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 53:
			func_175(iParam0);
			break;
	}
}

void func_82(int iParam0)
{
	struct<4> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 6))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 21)
	{
		if ((Local_15.f_2[iVar8 /*9*/].f_2 == 0 || Local_15.f_2[iVar8 /*9*/].f_2 == joaat("ANIMAL_EXTRA")) || Local_15.f_2[iVar8 /*9*/].f_2 == joaat("WAVE_PED"))
		{
		}
		else if (func_176(iVar8, 1))
		{
		}
		else if (func_51(iVar8, 67108864))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iVar8 /*9*/]))
		{
		}
		else
		{
			iVar9 = NETWORK::NET_TO_PED(Local_15.f_2[iVar8 /*9*/]);
			if (PED::IS_PED_DEAD_OR_DYING(iVar9, true))
			{
			}
			else
			{
				vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
				if (BUILTIN::VDIST(vVar10, Var0.f_3) > PED::_0x2BA9D7BF629F920C(iVar9))
				{
				}
				else
				{
					func_177(iVar8, 67108864);
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_15.f_2[iVar8 /*9*/]))
					{
					}
					else
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(iVar9))
						{
							PED::_0x62FDAD5E01D2DD47(iVar9, Var0.f_3, 3, 0);
						}
						if (func_178(iVar9))
						{
							if (ENTITY::_0x0C9DBF48C6BA6E4C(iVar9, Var0.f_3, 17))
							{
								TASK::TASK_AIM_AT_COORD(iVar9, Var0.f_3, 2000, 0, 0);
							}
							else
							{
								iVar6 = WEAPON::GET_BEST_PED_WEAPON(iVar9, false, false);
								if (func_118(iVar6))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(iVar9, iVar6, false, 0, false, false);
								}
								TASK::OPEN_SEQUENCE_TASK(&iVar7);
								TASK::TASK_REACT(iVar9, 0, Var0.f_3, "Default_Panic", 0.5f, 0, 4);
								TASK::TASK_SWAP_WEAPON(iVar9, 1, 1, 0, 0);
								TASK::TASK_INVESTIGATE(iVar9, Var0.f_3, 4000, 0);
								func_179(iVar9, &iVar7, 0, 0, 1, 1);
							}
						}
						else
						{
							iVar6 = WEAPON::GET_BEST_PED_WEAPON(iVar9, false, false);
							if (func_118(iVar6))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar9, iVar6, false, 0, false, false);
								TASK::OPEN_SEQUENCE_TASK(&iVar7);
								TASK::TASK_REACT(iVar9, 0, Var0.f_3, "Default_Panic", 0.5f, 0, 4);
								TASK::TASK_SWAP_WEAPON(iVar9, 1, 1, 0, 0);
								func_179(iVar9, &iVar7, 0, 0, 1, 1);
							}
							else
							{
								TASK::TASK_REACT(iVar9, 0, Var0.f_3, "Default_Panic", 2f, 0, 4);
							}
						}
						func_177(iVar8, 67108864);
					}
				}
			}
		}
		iVar8++;
	}
}

void func_83(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_84(var uParam0)
{
	return *uParam0;
}

void func_85()
{
	bool bVar0;
	int iVar1;

	switch (func_86())
	{
		case 0:
			if (Local_15.f_278 == -1 && func_90() != 6)
			{
				return;
			}
			if (func_180(Local_15.f_282))
			{
				func_125(2097152);
				if (GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_15.f_282)
				{
					func_181();
				}
			}
			func_182();
			iVar1 = 0;
			while (iVar1 < 7)
			{
				Local_557.f_584.f_31[iVar1] = 255;
				iVar1++;
			}
			func_183();
			if (func_184())
			{
				func_185(1);
			}
			func_186(1);
			break;
		case 1:
			if (!func_188(func_187(), &(Local_557.f_577), 600, Local_557, 0, 0))
			{
				func_189(&(Local_300[Local_557.f_1008 /*8*/]), 2);
				return;
			}
			func_190();
			func_186(2);
			break;
		case 2:
			func_191();
			func_192();
			func_193();
			func_194();
			func_195();
			func_196();
			func_197();
			func_198();
			func_199();
			func_200();
			func_201();
			func_202();
			func_203();
			func_204();
			Local_557.f_20.f_555 = func_205();
			if (func_138(Local_557.f_20.f_15, 16384))
			{
				Local_557.f_20.f_549 = (Local_557.f_20.f_549 + Local_557.f_20.f_554);
			}
			if (!func_206())
			{
				func_125(4096);
			}
			func_186(3);
			break;
		case 3:
			bVar0 = true;
			if (!func_207())
			{
				bVar0 = false;
			}
			if (!func_208())
			{
				bVar0 = false;
			}
			if (!func_209())
			{
				bVar0 = false;
			}
			if (!bVar0)
			{
				return;
			}
			func_18(1);
			func_210();
			func_186(4);
			break;
	}
}

int func_86()
{
	return Local_557.f_4;
}

void func_87()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 32))
	{
		Local_557.f_1005 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_189(&(Local_300[Local_557.f_1008 /*8*/]), 32);
	}
}

void func_88()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_50(iVar0, 256))
		{
		}
		else if (func_50(iVar0, 2))
		{
			if (!func_211(Local_557.f_20.f_422[iVar0 /*4*/]))
			{
				return;
			}
		}
		else if (!func_212(Local_557.f_20.f_422[iVar0 /*4*/]))
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_557.f_20.f_548)
	{
		if (!func_212(func_21(iVar1)))
		{
			return;
		}
		if (!func_213(func_23(iVar1)))
		{
			return;
		}
		if ((func_214(iVar1) || func_51(iVar1, 65536)) && !func_212(func_25(iVar1)))
		{
			return;
		}
		iVar1++;
	}
	iVar4 = 0;
	while (iVar4 < Local_557.f_20.f_555)
	{
		iVar2 = func_26(iVar4);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_212(func_27(iVar4, iVar3)))
			{
				return;
			}
			if (!func_212(func_29(iVar4, iVar3)))
			{
				return;
			}
			if (!func_213(func_28(iVar4, iVar3)))
			{
				return;
			}
			iVar3++;
		}
		iVar4++;
	}
	if (!func_215(func_137(), 30, Local_557, 0, 0))
	{
		func_189(&(Local_300[Local_557.f_1008 /*8*/]), 2);
		return;
	}
	if (!func_59(1))
	{
		return;
	}
	if (Local_15.f_280 > NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false))
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_15.f_280);
	}
	if (Local_15.f_279 > NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false))
	{
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_15.f_279);
	}
	if (Local_15.f_281 > NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false))
	{
		NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_15.f_281);
	}
	func_216();
	func_217();
	func_189(&(Local_300[Local_557.f_1008 /*8*/]), 1);
}

void func_89()
{
	func_218();
	func_219();
	func_220();
	func_221();
	func_222();
	func_223();
	func_224();
	func_225();
	func_226();
	func_227();
	func_228(&(Local_300[Local_557.f_1008 /*8*/]));
	func_229();
	func_230();
	func_231();
	func_232();
	func_233();
	func_234();
	func_235();
}

int func_90()
{
	return Local_15;
}

void func_91()
{
	var uVar0;

	uVar0 = func_236(func_45());
	func_237(uVar0);
}

void func_92()
{
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 16))
	{
		return;
	}
	Local_557.f_1004 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_189(&(Local_300[Local_557.f_1008 /*8*/]), 16);
}

bool func_93()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 16))
	{
		return false;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Local_557.f_1004, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 8000)
	{
		return false;
	}
	return true;
}

void func_94()
{
	vector3 vVar0;

	Local_15.f_1 = Local_557.f_20.f_15;
	vVar0 = { func_238(vVar0, Local_557.f_20.f_20, 0f) };
	Local_15.f_270 = vVar0.x;
	Local_15.f_270 = vVar0.y;
}

bool func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;

	iVar0 = func_239();
	iVar1 = func_240(iVar0);
	iVar2 = func_241(iVar0, Local_557.f_20.f_556);
	if (func_242(iVar1) == joaat("ASSASSINATION_PVP"))
	{
		return true;
	}
	if (Local_15.f_263.f_6 >= iVar2 || Local_15.f_263.f_6 >= 4)
	{
		return true;
	}
	iVar7 = Local_15.f_263.f_6;
	vVar3 = { func_243(iVar0, Local_557.f_20.f_556, iVar7) };
	if (!func_244(iVar7, vVar3, 20f, -541064893, &bVar6))
	{
		if (bVar6)
		{
			func_100(4);
			if (!func_43(2097152))
			{
				func_245(Local_15.f_282, Local_557.f_2, 0);
			}
			return true;
		}
	}
	else
	{
		Local_15.f_263.f_6++;
		Local_15.f_263.f_5 = 0;
	}
	return false;
}

void func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (func_59(1))
	{
		return;
	}
	func_246();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 18)
	{
		if (Local_557.f_20.f_422[iVar3 /*4*/] == 0)
		{
		}
		else if (((((func_247(iVar3, &iVar4) && iVar4 >= 0) && iVar4 < 21) && Local_557.f_20.f_22[iVar4 /*19*/] == joaat("POSSIBLE_TARGET")) && !func_248(iVar4)) && func_51(iVar4, 8))
		{
		}
		else
		{
			if (func_50(iVar3, 4))
			{
				iVar1++;
				Jump @202; //curOff = 154
			}
			else if (func_50(iVar3, 2))
			{
				Jump @202; //curOff = 170
			}
			else if (func_50(iVar3, 128))
			{
				iVar2++;
			}
			else
			{
				iVar0++;
			}
		}
		iVar3++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false) < iVar0)
	{
		func_100(4);
		if (!func_43(2097152))
		{
			func_245(Local_15.f_282, Local_557.f_2, 0);
		}
		return;
	}
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar1);
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false) < iVar1)
	{
		func_100(4);
		if (!func_43(2097152))
		{
			func_245(Local_15.f_282, Local_557.f_2, 0);
		}
		return;
	}
	iVar5 = (func_249() + iVar2);
	iVar6 = 0;
	while (iVar6 < 21)
	{
		if (Local_557.f_20.f_22[iVar6 /*19*/] == 0)
		{
		}
		else if (func_51(iVar6, 8) && !func_248(iVar6))
		{
		}
		else if (((((((func_51(iVar6, 64) && func_250(iVar6, &iVar4)) && Local_557.f_20.f_22[iVar6 /*19*/] != joaat("TARGET")) && iVar4 >= 0) && iVar4 < 21) && Local_557.f_20.f_22[iVar4 /*19*/] == joaat("POSSIBLE_TARGET")) && !func_248(iVar4)) && func_51(iVar4, 8))
		{
		}
		else
		{
			iVar5++;
		}
		iVar6++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar5);
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) < iVar5)
	{
		func_100(4);
		if (!func_43(2097152))
		{
			func_245(Local_15.f_282, Local_557.f_2, 0);
		}
		return;
	}
	func_251();
	func_100(1);
}

void func_97()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 1))
	{
		return;
	}
	if (!func_252())
	{
		return;
	}
	if (!func_253())
	{
		return;
	}
	if (!func_254())
	{
		return;
	}
	if (!func_255())
	{
		return;
	}
	func_100(2);
}

void func_98()
{
	int iVar0;

	if (func_59(262144))
	{
		return;
	}
	if (func_256())
	{
		func_100(4);
		return;
	}
	if (!func_59(524288))
	{
		func_257();
	}
	iVar0 = func_258();
	if (iVar0 == joaat("PLAYER"))
	{
		if (Local_557.f_946 < 32)
		{
			func_259();
			return;
		}
		if (!func_260())
		{
			Local_557.f_946 = 0;
			Local_557.f_946.f_1 = -1;
			Local_557.f_946.f_3 = 0;
			Local_557.f_946.f_2 = 0;
			return;
		}
		func_100(262144);
	}
	else if (iVar0 == joaat("POSSE"))
	{
		if (Local_557.f_946 < 32)
		{
			func_261();
			return;
		}
		if (!func_262())
		{
			Local_557.f_946 = 0;
			Local_557.f_946.f_1 = -1;
			Local_557.f_946.f_3 = 0;
			Local_557.f_946.f_2 = 0;
			return;
		}
		func_100(262144);
	}
}

void func_99()
{
	func_263();
	func_264();
	if (func_45())
	{
		func_265();
	}
	else
	{
		func_101();
	}
}

void func_100(int iParam0)
{
	func_266(&(Local_15.f_1), iParam0);
}

void func_101()
{
	int iVar0;

	iVar0 = Local_15.f_259;
	func_267(iVar0);
	func_268(&(Local_15.f_259), 21);
}

void func_102(int iParam0, int iParam1)
{
	if (func_269(iParam0))
	{
		return;
	}
	if (func_270(iParam0) == iParam1)
	{
		return;
	}
	if (Global_17374 >= 10)
	{
		Global_17374 = 0;
	}
	Global_17353[Global_17374 /*2*/].f_1 = iParam1;
	Global_17353[Global_17374 /*2*/] = iParam0;
	Global_17374++;
}

void func_103(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_17353[iVar0 /*2*/] == iParam0)
		{
			Global_17353[iVar0 /*2*/].f_1 = 5;
		}
		iVar0++;
	}
}

struct<8> func_104(int iParam0)
{
	struct<5> Var0;
	struct<8> Var5;

	if (func_271(iParam0, &Var0))
	{
		func_109(Var0, -1111171646, &Var5, 1);
	}
	return Var5;
}

char* func_105(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_106(int iParam0)
{
	struct<8> Var0;
	char* sVar8;

	if (!func_272(iParam0, &Var0))
	{
		return;
	}
	sVar8 = func_105(Var0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar8))
	{
		return;
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sVar8);
}

bool func_107(int iParam0, int iParam1)
{
	return func_138(Local_557.f_20.f_533[iParam0 /*4*/], iParam1);
}

bool func_108(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 644584216;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_109(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

char[] func_110(char[4] cParam0)
{
	return cParam0;
}

void func_111(int iParam0, int iParam1)
{
	func_139(&(Local_557.f_20.f_533[iParam0 /*4*/]), iParam1);
}

int func_112()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1527836996, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_113(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if ((!func_119(&Var0) || !func_120(&Var0, -49926176, iParam0, 0)) || !func_117(Var0, -1296487272, &uVar5, 1))
	{
		return false;
	}
	*iParam1 = uVar5;
	if (*iParam1 == -1)
	{
		return false;
	}
	return true;
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_1939655.f_65[iVar1]), iVar2);
}

void func_115(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_274(1497516462);
			func_275(2016141805);
			func_275(1010885152);
			func_275(-502324015);
			break;
		case 2016141805:
			func_275(1497516462);
			func_274(2016141805);
			func_275(1010885152);
			func_275(-502324015);
			break;
		case 1010885152:
			func_275(1497516462);
			func_275(2016141805);
			func_274(1010885152);
			func_275(-502324015);
			break;
		case -502324015:
			func_275(1497516462);
			func_275(2016141805);
			func_275(1010885152);
			func_274(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_275(-538889627);
			func_275(-538880323);
			func_275(-1056767524);
			func_274(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_276();
			func_274(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_277();
			func_274(iParam0);
			break;
		case 2019386373:
			func_275(-664252410);
			func_275(2109952320);
			func_274(2019386373);
			break;
		case -664252410:
			func_275(2019386373);
			func_275(2109952320);
			func_274(-664252410);
			break;
		case 2109952320:
			func_275(2019386373);
			func_275(-664252410);
			func_274(2109952320);
			break;
		case -1674179981:
			func_275(-1835851517);
			func_275(-1838352012);
			func_274(-1674179981);
			break;
		case -1835851517:
			func_275(-1674179981);
			func_275(-1838352012);
			func_274(-1835851517);
			break;
		case -1838352012:
			func_275(-1674179981);
			func_275(-1835851517);
			func_274(-1838352012);
			break;
		case -1717960576:
			func_275(210001842);
			func_274(-1717960576);
			break;
		case 210001842:
			func_275(-1717960576);
			func_274(210001842);
			break;
		case -150493654:
			func_275(-1271608261);
			func_275(1846061697);
			func_275(-1145519186);
			func_274(-150493654);
			break;
		case -1271608261:
			func_275(-150493654);
			func_275(1846061697);
			func_275(-1145519186);
			func_274(-1271608261);
			break;
		case 1846061697:
			func_275(-150493654);
			func_275(-1271608261);
			func_275(-1145519186);
			func_274(1846061697);
			break;
		case -1145519186:
			func_275(-150493654);
			func_275(-1271608261);
			func_275(1846061697);
			func_274(-1145519186);
			break;
		case 1766284049:
			func_275(280705402);
			func_275(1926308480);
			func_274(1766284049);
			break;
		case 280705402:
			func_275(1766284049);
			func_275(1926308480);
			func_274(280705402);
			break;
		case 1926308480:
			func_275(1766284049);
			func_275(280705402);
			func_274(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_275(439465264);
				func_274(1609506757);
			}
			else
			{
				func_275(1609506757);
				func_275(439465264);
			}
			break;
		case 439465264:
			if (func_278(1609506757))
			{
				if (bParam1)
				{
					func_274(439465264);
				}
				else
				{
					func_275(439465264);
				}
			}
			break;
		case 1822001510:
			func_275(-1612662716);
			func_274(1822001510);
			break;
		case -1612662716:
			func_275(1822001510);
			func_274(-1612662716);
			break;
		case 1306158345:
			func_275(1952610440);
			func_275(-223469678);
			func_275(-404698347);
			func_275(1517904467);
			func_274(1306158345);
			break;
		case 1952610440:
			func_275(1306158345);
			func_275(-223469678);
			func_275(-404698347);
			func_275(1517904467);
			func_274(1952610440);
			break;
		case -223469678:
			func_275(1306158345);
			func_275(1952610440);
			func_275(-404698347);
			func_275(1517904467);
			func_274(-223469678);
			break;
		case -404698347:
			func_275(1306158345);
			func_275(1952610440);
			func_275(-223469678);
			func_275(1517904467);
			func_274(-404698347);
			break;
		case 1517904467:
			func_275(1306158345);
			func_275(1952610440);
			func_275(-223469678);
			func_275(-404698347);
			func_274(1517904467);
			break;
		case 1376646519:
			func_275(931649776);
			func_275(-434590080);
			func_275(1743048395);
			func_275(449774763);
			func_274(1376646519);
			break;
		case 931649776:
			func_275(1376646519);
			func_275(-434590080);
			func_275(1743048395);
			func_275(449774763);
			func_274(931649776);
			break;
		case -434590080:
			func_275(1376646519);
			func_275(931649776);
			func_275(1743048395);
			func_275(449774763);
			func_274(-434590080);
			break;
		case 1743048395:
			func_275(1376646519);
			func_275(931649776);
			func_275(-434590080);
			func_275(449774763);
			func_274(1743048395);
			break;
		case 449774763:
			func_275(1376646519);
			func_275(931649776);
			func_275(-434590080);
			func_275(1743048395);
			func_274(449774763);
			break;
		case -1414537028:
			func_275(38162571);
			func_275(1350391819);
			func_275(54073871);
			func_274(-1414537028);
			break;
		case 38162571:
			func_275(-1414537028);
			func_275(1350391819);
			func_275(54073871);
			func_274(38162571);
			break;
		case 1350391819:
			func_275(-1414537028);
			func_275(38162571);
			func_275(54073871);
			func_274(1350391819);
			break;
		case 54073871:
			func_275(-1414537028);
			func_275(38162571);
			func_275(1350391819);
			func_274(54073871);
			break;
		case 198200492:
			func_274(198200492);
			func_275(-1124061431);
			func_275(52706132);
			func_275(-259123672);
			break;
		case -1124061431:
			func_275(198200492);
			func_274(-1124061431);
			func_275(52706132);
			func_275(-259123672);
			break;
		case 52706132:
			func_275(198200492);
			func_275(-1124061431);
			func_274(52706132);
			func_275(-259123672);
			break;
		case -259123672:
			func_275(198200492);
			func_275(-1124061431);
			func_275(52706132);
			func_274(-259123672);
			break;
		case -919512195:
			func_274(-919512195);
			func_275(-1925798111);
			func_275(420709909);
			func_275(1703426636);
			break;
		case -1925798111:
			func_274(-1925798111);
			func_275(-919512195);
			func_275(420709909);
			func_275(1703426636);
			break;
		case 420709909:
			func_274(420709909);
			func_275(-919512195);
			func_275(-1925798111);
			func_275(1703426636);
			break;
		case 1703426636:
			func_274(1703426636);
			func_275(-919512195);
			func_275(-1925798111);
			func_275(420709909);
			break;
		case -1223121209:
			func_274(-1223121209);
			func_275(630808005);
			break;
		case 630808005:
			func_274(630808005);
			func_275(-1223121209);
			break;
		case 1453909576:
			func_274(1453909576);
			func_275(1643531967);
			break;
		case 1643531967:
			func_274(1643531967);
			func_275(1453909576);
			break;
		case 0:
			func_274(0);
			func_275(473295046);
			func_275(-1738165526);
			break;
		case 473295046:
			func_274(473295046);
			func_275(0);
			func_275(-1738165526);
			break;
		case -1738165526:
			func_274(-1738165526);
			func_275(0);
			func_275(473295046);
			break;
		case 932909855:
			func_274(932909855);
			func_275(2051822093);
			break;
		case 2051822093:
			func_274(2051822093);
			func_275(932909855);
			break;
		case 405586984:
			func_274(405586984);
			func_275(1509509592);
			func_275(-959357075);
			func_275(-1311865656);
			break;
		case 1509509592:
			func_274(1509509592);
			func_275(405586984);
			func_275(-959357075);
			func_275(-1311865656);
			break;
		case -959357075:
			func_274(-959357075);
			func_275(1509509592);
			func_275(405586984);
			func_275(-1311865656);
			break;
		case -1311865656:
			func_274(-1311865656);
			func_275(1509509592);
			func_275(-959357075);
			func_275(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_274(-524145696);
			}
			else
			{
				func_275(-524145696);
			}
			func_275(1626481264);
			func_275(282809459);
			break;
		case 282809459:
			func_274(282809459);
			func_275(1626481264);
			func_275(-524145696);
			break;
		case 1626481264:
			func_274(1626481264);
			func_275(-524145696);
			func_275(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_274(885203519);
			}
			else
			{
				func_275(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_274(-1080627546);
			}
			else
			{
				func_275(-1080627546);
			}
			break;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (bParam1)
			{
				func_274(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
			}
			else
			{
				func_275(joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"));
				func_279(385812466);
				func_279(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_274(iParam0);
			}
			else
			{
				func_275(iParam0);
			}
			break;
	}
}

bool func_116(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 331094197;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_117(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_118(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_119(var uParam0)
{
	*uParam0 = Local_557.f_577;
	uParam0->f_2 = -872351721;
	uParam0->f_3 = Local_557.f_20.f_556;
	return (DATAFILE::_0x603AC35FD4602C76(Local_557.f_577) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_120(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_121(var uParam0, int iParam1, int iParam2)
{
	if ((func_119(uParam0) && func_120(uParam0, 1823038874, iParam1, 0)) && func_120(uParam0, -176401167, iParam2, 0))
	{
		return true;
	}
	return false;
}

bool func_122(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_123(iParam0);
		return false;
	}
	if (func_280(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 2)
		{
			func_281(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1296859.f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 2);
}

void func_123(int iParam0)
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
	func_282(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_124(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_125(int iParam0)
{
	func_266(&(Local_557.f_5), iParam0);
}

char* func_126()
{
	return "scr_distance_smoke";
}

char[] func_127(int iParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, "miss_FMAS_ROUTE", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringConCat(&cVar0, func_283(Local_557), 32);
	return func_110(&cVar0);
}

void func_128(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_129(int iParam0)
{
	if (iParam0 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iParam0);
	}
}

void func_130()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_284(iVar0);
		iVar0++;
	}
}

void func_131()
{
	int iVar0;

	func_285(&(Local_557.f_584.f_22));
	func_285(&(Local_557.f_584.f_23));
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_551)
	{
		func_285(&(Local_557.f_584.f_24[iVar0]));
		iVar0++;
	}
}

void func_132()
{
	if (func_286(Local_557.f_584.f_331))
	{
		UIFEED::_0x2F901291EF177B02(Local_557.f_584.f_331, 0);
		Local_557.f_584.f_331 = 0;
	}
	func_287(&(Local_557.f_584.f_91), 0, 0);
	func_288(&(Local_557.f_584.f_76), 1);
}

void func_133()
{
	func_285(&(Local_557.f_584.f_332));
	if (!func_289(Local_557.f_584.f_333))
	{
		return;
	}
	UIFEED::_0x2F901291EF177B02(Local_557.f_584.f_333, 0);
}

void func_134()
{
	if (!func_286(Local_557.f_584.f_334))
	{
		return;
	}
	Local_557.f_584.f_336 = 0;
	UIFEED::_0x2F901291EF177B02(Local_557.f_584.f_334, 0);
	Local_557.f_584.f_334 = 0;
}

void func_135()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_290(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_291(iVar0);
		iVar0++;
	}
}

void func_136(bool bParam0)
{
	if (bParam0)
	{
		func_141(49);
	}
	else
	{
		func_143(49);
	}
}

char* func_137()
{
	return "NAS";
}

bool func_138(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_140(int iParam0)
{
	func_139(&(Global_1071686.f_23887.f_4), iParam0);
}

int func_141(int iParam0)
{
	if (func_292(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1146212.f_2166), iParam0))
	{
		return 1;
	}
	if (Global_1146212.f_2165 >= 21)
	{
		return 0;
	}
	Global_1146212.f_2143[Global_1146212.f_2165] = iParam0;
	Global_1146212.f_2165++;
	return 1;
}

int func_143(int iParam0)
{
	if (func_293(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_144(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_294(iParam0);
	bVar1 = func_176(iParam0, 128);
	bVar2 = (!func_176(iParam0, 8) && !func_176(iParam0, 1024));
	if (MAP::DOES_BLIP_EXIST(Local_557.f_584[iParam0]))
	{
		if (bVar0)
		{
			if (!func_51(iParam0, 256))
			{
				func_177(iParam0, 256);
				if (bVar1)
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584[iParam0], 942020339);
				}
				else
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584[iParam0], joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
				}
				MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], -662251075);
			}
		}
		else if (func_51(iParam0, 256))
		{
			func_295(iParam0, 256);
			MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584[iParam0], -662251075);
			if (bVar1)
			{
				MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], 942020339);
			}
			else
			{
				MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			}
		}
		return;
	}
	if (bVar1)
	{
		Local_557.f_584[iParam0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COP"), NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]));
		MAP::SET_BLIP_SPRITE(Local_557.f_584[iParam0], joaat("BLIP_AMBIENT_LAW"), false);
		if (bVar0)
		{
			if (bVar2)
			{
				MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], 1765354131);
			}
			else
			{
				MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], -662251075);
			}
			func_177(iParam0, 256);
		}
		else
		{
			func_295(iParam0, 256);
			MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], 942020339);
		}
	}
	else
	{
		Local_557.f_584[iParam0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]));
		if (bVar0)
		{
			if (bVar2)
			{
				MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], 1765354131);
			}
			else
			{
				MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], -662251075);
			}
			func_177(iParam0, 256);
		}
		else
		{
			MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], 942020339);
			func_295(iParam0, 256);
		}
	}
}

bool func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1071686.f_22971.f_1 || Global_1071686.f_22971.f_1 == 0) || iParam1 > Global_1071686.f_22971) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::_COPY_MEMORY(&(Global_1071686.f_22971), &uVar1, 2);
		}
		else
		{
			Global_1071686.f_22971.f_1 = iVar0;
			Global_1071686.f_22971 = iParam1;
		}
		if (AUDIO::_0x05D6195FB4D428F4(iParam0))
		{
		}
		return true;
	}
	return false;
}

int func_146(bool bParam0)
{
	if (!func_296(joaat("FREEMODE"), bParam0))
	{
		return 0;
	}
	return 1;
}

void func_147(bool bParam0)
{
	int iVar0;

	if (Global_1900688.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_65() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688.f_2 == 4 && Global_1900688.f_12 != Global_1900688.f_13) && !bParam0)
	{
		Global_1900688.f_1 = Global_1900688.f_2;
		Global_1900688.f_12 = Global_1900688.f_13;
		func_297(iVar0, Global_1900688.f_12);
	}
	else
	{
		Global_1900688.f_1 = 0;
		Global_1900688.f_7 = iVar0;
		Global_1900688.f_8 = func_298();
		Global_1900688.f_9 = func_299(Global_1893587.f_2);
		Global_1900688.f_11 = func_300(Global_1896622.f_41);
		if (Global_1900688.f_9 != -1 && Global_1900688.f_9 != 0)
		{
			func_301(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
		}
		else if (Global_1900688.f_11 != -1)
		{
			func_301(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_11);
		}
		else
		{
			func_301(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
		}
	}
	Global_1900688.f_2 = 0;
}

int func_148()
{
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return 2;
	}
	else if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 64))
	{
		return 3;
	}
	else if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192))
	{
		return 1;
	}
	else if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 131072))
	{
		return 4;
	}
	return 0;
}

void func_149(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = PLAYER::PLAYER_ID();
	Var1.f_1 = -1;
	if (!bParam1)
	{
		func_302(Local_557.f_2, iParam0 != 2, &Var1);
	}
	if (iParam0 == 2 && (func_303(iVar0, 1) || func_303(iVar0, 32)))
	{
		func_304(4);
		func_304(8);
	}
	if (!bParam1)
	{
		func_125(1);
	}
	if (Local_557.f_1008 >= 32 || Local_557.f_1008 < 0)
	{
		return;
	}
	func_189(&(Local_300[Local_557.f_1008 /*8*/]), 2097152);
}

void func_150()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_43(4))
	{
		func_305(Local_557.f_1, 0, 0);
		return;
	}
	bVar0 = false;
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		bVar0 = true;
	}
	func_306(bVar0, &bVar1, &bVar2);
	func_305(Local_557.f_1, bVar1 != bVar2, bVar0);
	Var3.f_1 = -1;
	if (func_43(1))
	{
		func_307(Local_557.f_2, bVar0, bVar1, bVar2, &Var3, 0, 255);
	}
}

void func_151()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_43(4))
	{
		func_308(Local_557.f_1, 0);
		return;
	}
	bVar0 = false;
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		bVar0 = true;
	}
	func_306(bVar0, &bVar1, &bVar2);
	func_308(Local_557.f_1, bVar0);
	Var3.f_1 = -1;
	if (func_43(1))
	{
		func_307(Local_557.f_2, bVar0, bVar1, bVar2, &Var3, 0, 255);
	}
}

void func_152()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_43(4))
	{
		func_309(Local_557.f_1, 0);
		return;
	}
	bVar0 = false;
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		bVar0 = true;
	}
	func_309(Local_557.f_1, bVar0);
	func_306(bVar0, &bVar1, &bVar2);
	Var3.f_1 = -1;
	if (func_43(1))
	{
		func_307(Local_557.f_2, bVar0, bVar1, bVar2, &Var3, 0, 255);
	}
}

bool func_153(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	if (!func_172(iParam0, 1))
	{
		return false;
	}
	if (bParam1 && !OBJECT::DOES_PICKUP_EXIST(Local_15.f_217[iParam0 /*2*/]))
	{
		return false;
	}
	return true;
}

int func_154(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_310(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_155()
{
	return Global_1109804.f_5737.f_632;
}

int func_156(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_156(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_156(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_157(int iParam0)
{
	return Global_1109804.f_5737.f_451[iParam0 /*2*/].f_1;
}

bool func_158(int iParam0, var uParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_311(iParam0))
	{
		return false;
	}
	uVar0 = func_312(iParam0);
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	*uParam1 = uVar0;
	uParam1->f_2 = -678729477;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1))
	{
		return false;
	}
	return true;
}

bool func_159(int iParam0)
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

int func_160(int iParam0)
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

bool func_161(int iParam0, int iParam1)
{
	int iVar0;

	if (!PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	if (iVar0 == 255)
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	*iParam1 = 0;
	while (*iParam1 < 7)
	{
		if (Local_15.f_234[*iParam1 /*2*/] != iVar0)
		{
		}
		else
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_162(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_234[iParam0 /*2*/]))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_234[iParam0 /*2*/]))
	{
		return false;
	}
	return true;
}

bool func_163(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Local_15.f_249[iVar0], iVar1);
}

void func_164(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_174(9, iParam0, func_173(0, 8), iParam1);
}

bool func_165(int iParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, int iParam33)
{
	if (func_314(Param1.f_1))
	{
		return true;
	}
	if (func_315(Param1.f_1))
	{
		return true;
	}
	if (Param1.f_5 == joaat("WEAPON_FALL") && (PED::_IS_PED_LASSOED(iParam33) && PED::_0x0C31C51168E80365(iParam33) == PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Param1.f_1) && ENTITY::IS_ENTITY_A_PED(Param1.f_1))
	{
		return false;
	}
	if (func_316(iParam0) == PLAYER::PLAYER_ID())
	{
		return true;
	}
	return false;
}

void func_166(int iParam0)
{
	AUDIO::PLAY_SOUND(func_317(), func_318(), false, 0, true, 0);
	func_174(1, iParam0, func_173(0, 8), PLAYER::PLAYER_ID());
}

bool func_167(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::PED_TO_NET(iParam0);
	iVar1 = 0;
	while (iVar1 < 21)
	{
		if (Local_15.f_2[iVar1 /*9*/].f_2 == 0)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iVar1 /*9*/]))
		{
		}
		else if (Local_15.f_2[iVar1 /*9*/] != iVar0)
		{
		}
		else
		{
			*iParam1 = iVar1;
			if (Local_15.f_2[iVar1 /*9*/].f_2 == joaat("TARGET") || func_176(iVar1, 67108864))
			{
				*bParam2 = 1;
			}
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_168(int iParam0)
{
	if (func_176(iParam0, 4096) && func_319(iParam0) != joaat("ANIMAL_EXTRA"))
	{
		func_320(joaat("PERSONA_HONOR_ACTION__MURDER"), 0, 0);
	}
}

void func_169(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_174(8, iParam0, func_173(0, 8), iParam1);
}

bool func_170(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, int iParam32, int iParam33)
{
	if (func_314(Param0.f_1))
	{
		return true;
	}
	if (func_315(Param0.f_1))
	{
		return true;
	}
	if (Param0.f_5 == joaat("WEAPON_FALL") && (PED::_IS_PED_LASSOED(iParam32) && PED::_0x0C31C51168E80365(iParam32) == PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1) && ENTITY::IS_ENTITY_A_PED(Param0.f_1))
	{
		return false;
	}
	if (Local_15.f_2[iParam33 /*9*/].f_5 == PLAYER::PLAYER_ID())
	{
		return true;
	}
	return false;
}

void func_171(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 21)
	{
		return;
	}
	if (Local_557.f_20.f_22[iParam0 /*19*/] != joaat("TARGET") && Local_557.f_20.f_22[iParam0 /*19*/] != joaat("POSSIBLE_TARGET"))
	{
		return;
	}
	func_313(iParam0, &iVar0, &iVar1);
	if (MISC::IS_BIT_SET(Local_557.f_994[iVar0], iVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND(func_317(), func_318(), false, 0, true, 0);
	func_174(7, iParam0, func_173(0, 8), -1);
	if ((!MISC::IS_BIT_SET(Local_557.f_996[iVar0], iVar1) && Local_557.f_20 == joaat("ASSASSINATION_TRACKING")) && func_321(iParam0))
	{
		func_125(1024);
	}
	MISC::SET_BIT(&(Local_557.f_994[iVar0]), iVar1);
	MISC::SET_BIT(&(Local_557.f_996[iVar0]), iVar1);
}

bool func_172(int iParam0, int iParam1)
{
	return func_138(Local_15.f_217[iParam0 /*2*/].f_1, iParam1);
}

var func_173(int iParam0, int iParam1)
{
	return func_322(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_174(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<8> Var0;

	Var0.f_4 = iParam0;
	Var0.f_6 = iParam1;
	Var0.f_7 = iParam3;
	func_323(&Var0, uParam2);
}

void func_175(int iParam0)
{
	struct<8> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (Var0.f_5 != Local_557)
	{
		return;
	}
	func_324(&Var0);
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if ((((Var0.f_4 == 4 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 5) || Var0.f_4 == 7)
	{
		if (Var0.f_6 < 0)
		{
			return;
		}
		if (Var0.f_6 >= 21)
		{
			return;
		}
	}
	switch (Var0.f_4)
	{
		case 7:
			if (func_176(Var0.f_6, 134217728))
			{
				return;
			}
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_1))
			{
				return;
			}
			func_325(Var0.f_6, Var0.f_1);
			break;
		case 1:
			if (func_163(Var0.f_6))
			{
				return;
			}
			Local_15.f_234[Var0.f_6 /*2*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(Var0.f_7);
			func_326(Var0.f_6);
			break;
		case 4:
			func_327(Var0.f_6, Var0.f_1);
			break;
		case 9:
			func_328(Var0.f_6, PLAYER::INT_TO_PLAYERINDEX(Var0.f_7));
			break;
		case 8:
			func_329(Var0.f_6, PLAYER::INT_TO_PLAYERINDEX(Var0.f_7));
			break;
		case 5:
			func_330(Var0.f_6, Var0.f_1);
			break;
		case 3:
			func_331(Var0.f_6, Var0.f_1);
			break;
		case 6:
			func_332(Var0.f_6, Var0.f_1);
			break;
		case 10:
			func_333(Var0.f_6, Var0.f_1);
			break;
		case 11:
			func_334(Var0.f_6);
			break;
	}
}

bool func_176(int iParam0, int iParam1)
{
	return func_138(Local_15.f_2[iParam0 /*9*/].f_3, iParam1);
}

void func_177(int iParam0, int iParam1)
{
	func_266(&(Local_557.f_20.f_22[iParam0 /*19*/].f_1), iParam1);
}

bool func_178(int iParam0)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, 0, false);
	if (func_118(iVar0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			return true;
		}
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			return true;
		}
		if (WEAPON::_IS_WEAPON_MELEE(iVar0))
		{
			return true;
		}
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, 1, false);
	if (func_118(iVar0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			return true;
		}
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			return true;
		}
		if (WEAPON::_IS_WEAPON_MELEE(iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_179(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_180(int iParam0)
{
	int iVar0;

	iVar0 = func_335(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_336(iVar0, 2);
}

void func_181()
{
	func_337(512);
}

void func_182()
{
	func_338("NAS_NEUTRAL_", &(Local_557.f_578));
	func_338("NAS_HOSTILE_", &(Local_557.f_578.f_1));
	func_338("NAS_LAW_NEUTRAL_", &(Local_557.f_578.f_2));
	func_338("NAS_LAW_HOSTILE_", &(Local_557.f_578.f_3));
	func_338("NAS_BRAWLER_A_", &(Local_557.f_578.f_4));
	func_338("NAS_BRAWLER_B_", &(Local_557.f_578.f_5));
	func_339(Local_557.f_578);
	func_339(Local_557.f_578.f_1);
	func_339(Local_557.f_578.f_2);
	func_339(Local_557.f_578.f_4);
	func_339(Local_557.f_578.f_5);
	func_339(Local_557.f_578.f_3);
	func_340(1, Local_557.f_578, Local_557.f_578.f_1, 1);
	func_340(1, Local_557.f_578.f_4, Local_557.f_578.f_1, 1);
	func_340(1, Local_557.f_578.f_5, Local_557.f_578.f_1, 1);
	func_340(1, Local_557.f_578.f_2, Local_557.f_578.f_3, 1);
	func_340(1, Local_557.f_578.f_2, Local_557.f_578, 1);
	func_340(1, Local_557.f_578.f_2, Local_557.f_578.f_1, 1);
	func_340(1, Local_557.f_578.f_3, Local_557.f_578, 1);
	func_340(1, Local_557.f_578.f_3, Local_557.f_578.f_1, 1);
	func_340(1, Local_557.f_578.f_2, joaat("REL_COP"), 1);
	func_340(1, Local_557.f_578.f_3, joaat("REL_COP"), 1);
	func_340(6, Local_557.f_578.f_4, Local_557.f_578.f_5, 1);
}

void func_183()
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (GANG::_0x901E0DC25080C8B9(iVar2) != Local_15.f_282)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		iVar1++;
	}
	Local_557.f_958 = uVar0;
}

bool func_184()
{
	int iVar0;

	iVar0 = func_341(func_239(), 0);
	if (iVar0 <= 3)
	{
		return true;
	}
	return false;
}

void func_185(int iParam0)
{
	func_266(&(Local_557.f_6), iParam0);
}

void func_186(int iParam0)
{
	Local_557.f_4 = iParam0;
}

int func_187()
{
	return 1926687966;
}

bool func_188(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(iParam0);
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887.f_13 != -1)
		{
			bVar1 = func_13(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887.f_13 != -1)
	{
		bVar1 = func_13(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_189(var uParam0, int iParam1)
{
	func_266(&(uParam0->f_1), iParam1);
}

void func_190()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 206)
	{
		iVar1 = func_342(iVar0, 1);
		func_344(&(Local_557.f_577), iVar1, func_343(iVar1));
		iVar0++;
	}
}

void func_191()
{
	struct<5> Var0;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	var uVar19;
	var uVar20;

	iVar5 = 600000;
	Local_557.f_20.f_17 = 105f;
	Local_557.f_20.f_18 = 85f;
	Local_557.f_20.f_19 = 160f;
	Local_557.f_20.f_20 = 120f;
	Local_557.f_20.f_21 = 100f;
	Local_557.f_20.f_14 = 100f;
	Local_557.f_20.f_13 = 18f;
	Local_557.f_20.f_4 = 300000;
	Local_557.f_20.f_6 = 6;
	if (func_119(&Var0))
	{
		func_345(Var0, 92190263, &iVar5, 1);
		func_345(Var0, -2129803861, &(Local_557.f_20.f_4), 0);
		func_345(Var0, 1628979087, &(Local_557.f_20.f_6), 0);
		func_346(Var0, -185755803, &bVar6, 0);
		func_346(Var0, 458129012, &bVar9, 0);
		func_346(Var0, 1787479687, &bVar7, 0);
		func_346(Var0, 1137547076, &bVar11, 0);
		func_346(Var0, 2066595802, &bVar8, 0);
		func_346(Var0, -1770081554, &bVar10, 0);
		func_346(Var0, 2053368303, &bVar13, 0);
		func_347(Var0, 582819194, &vVar16, 0);
		func_347(Var0, -1882633578, &(Local_557.f_20.f_10), 0);
		func_348(Var0, -1103749002, &uVar19, 0);
		func_348(Var0, 79787630, &(Local_557.f_20.f_17), 0);
		func_348(Var0, 465120035, &(Local_557.f_20.f_18), 0);
		func_348(Var0, 219784559, &(Local_557.f_20.f_19), 0);
		func_348(Var0, -485657984, &(Local_557.f_20.f_20), 0);
		func_348(Var0, -1925214904, &(Local_557.f_20.f_21), 0);
		func_348(Var0, 265695803, &(Local_557.f_20.f_13), 0);
		func_346(Var0, 1852727176, &bVar12, 0);
		func_346(Var0, 2092186359, &bVar14, 0);
		if (!func_346(Var0, 413379496, &bVar15, 0))
		{
			bVar15 = true;
		}
	}
	Local_557.f_20.f_554 = func_349(Local_15.f_278);
	Local_557.f_20.f_2 = iVar5;
	Local_557.f_20.f_7 = { vVar16 };
	Local_557.f_20.f_14 = uVar19;
	if (func_117(Var0, 1855722710, &uVar20, 0))
	{
		Local_557.f_20.f_3 = uVar20;
	}
	if (bVar6)
	{
		func_266(&(Local_557.f_20.f_15), 256);
	}
	if (bVar15)
	{
		func_266(&(Local_557.f_20.f_15), 65536);
	}
	if (bVar12)
	{
		func_266(&(Local_557.f_20.f_15), 33554432);
	}
	if (bVar7)
	{
		func_125(32768);
	}
	else if (bVar14)
	{
		func_125(65536);
	}
	if (bVar9)
	{
		func_266(&(Local_557.f_20.f_15), 4096);
	}
	if (bVar8)
	{
		func_266(&(Local_557.f_20.f_15), 8192);
	}
	if (bVar11)
	{
		func_266(&(Local_557.f_20.f_15), 16384);
	}
	if (bVar10)
	{
		func_266(&(Local_557.f_20.f_15), 32768);
	}
	if (bVar13)
	{
		func_266(&(Local_557.f_20.f_15), 67108864);
	}
}

void func_192()
{
	Local_557.f_20.f_547 = func_350();
}

void func_193()
{
	int iVar0;

	Local_557.f_20.f_548 = func_351();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		func_352(iVar0);
		if (Local_557.f_20.f_22[iVar0 /*19*/] != joaat("TARGET"))
		{
		}
		else
		{
			Local_557.f_20.f_549++;
		}
		iVar0++;
	}
}

void func_194()
{
	int iVar0;

	Local_557.f_20.f_551 = func_353();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_551)
	{
		func_354(iVar0);
		iVar0++;
	}
}

void func_195()
{
	int iVar0;
	int iVar1;

	iVar0 = func_355();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_356(iVar1);
		iVar1++;
	}
}

void func_196()
{
	int iVar0;
	int iVar1;

	iVar0 = func_357();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_358(iVar1);
		iVar1++;
	}
}

void func_197()
{
	int iVar0;

	Local_557.f_20.f_550 = func_359();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_550)
	{
		func_360(iVar0);
		iVar0++;
	}
}

void func_198()
{
	int iVar0;

	Local_557.f_20.f_552 = func_361();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_552)
	{
		func_362(iVar0);
		iVar0++;
	}
}

void func_199()
{
	int iVar0;
	int iVar1;

	iVar0 = func_363();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_364(iVar1);
		iVar1++;
	}
}

void func_200()
{
	int iVar0;

	Local_557.f_20.f_553 = func_365();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_553)
	{
		func_366(iVar0);
		iVar0++;
	}
}

void func_201()
{
	int iVar0;

	Local_557.f_20.f_546 = func_367();
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_546)
	{
		func_368(iVar0);
		iVar0++;
	}
}

void func_202()
{
	int iVar0;
	int iVar1;

	iVar0 = func_369();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_370(iVar1);
		iVar1++;
	}
}

void func_203()
{
	int iVar0;
	int iVar1;

	iVar0 = func_371();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_372(iVar1);
		iVar1++;
	}
}

void func_204()
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	int iVar7;
	int iVar8;

	iVar0 = func_374(1, func_373());
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_375(&Var2);
		if ((!func_119(&Var2) || !func_120(&Var2, 1525953930, iVar1, 0)) || !func_117(Var2, -1296487272, &iVar8, 1))
		{
		}
		else
		{
			iVar7 = func_376(iVar8);
			if (!func_377(iVar7))
			{
			}
			else
			{
				Local_557.f_952[iVar1] = iVar7;
				func_125(8192);
			}
		}
		iVar1++;
	}
}

int func_205()
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, -930766145, 0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

bool func_206()
{
	struct<5> Var0;
	bool bVar5;

	if (func_119(&Var0) && func_346(Var0, 706368435, &bVar5, 0))
	{
		return !bVar5;
	}
	return false;
}

bool func_207()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = func_355();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_378(iVar1, &vVar2))
		{
		}
		else if (!func_379(iVar1, vVar2))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_208()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	struct<8> Var9;

	iVar0 = func_380();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_381(iVar1, &vVar2, &vVar5, &Var9, &uVar8))
		{
		}
		else if (!func_382(iVar1, vVar2, vVar5, Var9, uVar8))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_209()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_43(4194304))
	{
		return true;
	}
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_113(iVar1, &iVar2))
		{
		}
		else
		{
			func_115(iVar2, 1, 0);
		}
		iVar1++;
	}
	func_125(4194304);
	return true;
}

void func_210()
{
	int iVar0;

	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if ((Local_15.f_234[iVar0 /*2*/] != 255 && func_163(iVar0)) && !MISC::_0x8F4F050054005C27(&(Local_557.f_1000), iVar0))
			{
				MISC::_0xE84AAC1B22A73E99(&(Local_557.f_1000), iVar0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (((Local_15.f_2[iVar0 /*9*/].f_2 == 1583594396 && func_176(iVar0, 67108864)) && func_176(iVar0, 134217728)) && !MISC::_0x8F4F050054005C27(&(Local_557.f_998), iVar0))
			{
				MISC::_0xE84AAC1B22A73E99(&(Local_557.f_998), iVar0);
			}
			iVar0++;
		}
	}
}

bool func_211(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	PROPSET::_REQUEST_PROPSET_2(iParam0);
	PROPSET::_REQUEST_PROPSET(iParam0);
	return (PROPSET::_HAS_PROPSET_LOADED_2(iParam0) && PROPSET::_HAS_PROPSET_LOADED(iParam0));
}

bool func_212(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0) || iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_213(int iParam0)
{
	if (!func_118(iParam0))
	{
		return true;
	}
	WEAPON::_0x72D4CB5DB927009C(iParam0, -1, 0);
	return WEAPON::_0xFF07CF465F48B830(iParam0);
}

bool func_214(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	func_346(Var0, 917283806, &uVar5, 0);
	return uVar5;
}

bool func_215(char* sParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
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
		return false;
	}
	bVar1 = false;
	while ((HUD::_TEXT_DATABASE_REQUEST(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_13(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_13(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	while ((!HUD::_TEXT_DATABASE_HAS_LOADED(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_13(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_13(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_216()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_547)
	{
		func_383(iVar0);
		iVar0++;
	}
}

void func_217()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_552)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_557.f_971[iVar0]))
		{
			POPULATION::_0xB56D41A694E42E86(Local_557.f_971[iVar0], 12289, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(Local_557.f_971[iVar0], 12289, 0, 0, -1, -1, 0);
		}
		iVar0++;
	}
}

void func_218()
{
	int iVar0;
	int iVar1;

	func_268(&(Local_557.f_7.f_11), 100);
	if (Local_557.f_7.f_11 != 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_43(4))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iVar1 == iVar0)
		{
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_557.f_961), iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
		{
			NETWORK::_0x5A91BCEF74944E93(PLAYER::INT_TO_PLAYERINDEX(iVar1), 30f);
		}
		iVar1++;
	}
}

void func_219()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar11;
	struct<2> Var15;
	struct<2> Var28;
	struct<2> Var41;

	func_384();
	if (func_90() != 6)
	{
		return;
	}
	if (!func_43(4))
	{
		return;
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8))
	{
		return;
	}
	if (func_385())
	{
		return;
	}
	iVar0 = func_148();
	switch (iVar0)
	{
		case 2:
			bVar1 = false;
			break;
		case 1:
		case 3:
		case 4:
			bVar1 = true;
			break;
	}
	func_306(bVar1, &iVar2, &iVar3);
	bVar4 = false;
	if (func_386())
	{
		iVar5 = joaat("ALL_OR_NOTHING");
		if (func_387() == 1)
		{
			bVar4 = true;
		}
		else
		{
			bVar4 = false;
		}
	}
	else
	{
		iVar5 = -1516819610;
	}
	if (func_45())
	{
		iVar6 = joaat("PVP");
	}
	else
	{
		iVar6 = joaat("COOP");
	}
	Var15.f_1 = 11;
	Var28.f_1 = 11;
	Var41.f_1 = 11;
	if ((bVar4 && iVar0 == 1) || iVar0 == 4)
	{
		func_389(&Var15, joaat("DEFEND"), func_388(255), 0, GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	}
	func_391(&uVar7, &uVar11, &Var28, &Var41, iVar5, iVar6, func_388(255), bVar4, !bVar1, GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())), iVar2, iVar3, func_390(), Local_557.f_2);
	func_189(&(Local_300[Local_557.f_1008 /*8*/]), 8);
}

void func_220()
{
	int iVar0;

	iVar0 = Local_557.f_7;
	func_392(iVar0);
	func_268(&(Local_557.f_7), 21);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_393(iVar0);
		iVar0++;
	}
}

void func_221()
{
	func_394(Local_557.f_7.f_1);
	func_268(&(Local_557.f_7.f_1), 18);
}

void func_222()
{
	func_395(Local_557.f_7.f_2);
	func_268(&(Local_557.f_7.f_2), 3);
}

void func_223()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Local_557.f_7.f_4;
	if (func_396(iVar0, 0, 1))
	{
		if (func_47(&(Local_300[iVar0 /*8*/]), 4))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = func_397(iVar1);
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_557.f_578.f_1, iVar2) != 6)
			{
				func_340(6, iVar2, Local_557.f_578.f_1, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_557.f_578.f_3, iVar2) != 6)
			{
				func_340(6, iVar2, Local_557.f_578.f_3, 1);
			}
		}
		else if (func_59(256) && func_47(&(Local_300[iVar0 /*8*/]), 64))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = func_397(iVar1);
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_557.f_578, iVar2) != 2)
			{
				func_340(2, iVar2, Local_557.f_578, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_557.f_578.f_1, iVar2) != 2)
			{
				func_340(2, iVar2, Local_557.f_578.f_1, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_557.f_578.f_3, iVar2) != 2)
			{
				func_340(2, iVar2, Local_557.f_578.f_3, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_557.f_578.f_2, iVar2) != 2)
			{
				func_340(2, iVar2, Local_557.f_578.f_2, 1);
			}
		}
	}
	func_268(&(Local_557.f_7.f_4), 32);
}

void func_224()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	int iVar8;

	iVar0 = func_148();
	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	if ((!PED::IS_PED_DEAD_OR_DYING(iVar2, true) && WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &iVar3, true, 0, false)) && func_118(iVar3))
	{
		func_125(2048);
	}
	else
	{
		func_44(2048);
	}
	iVar4 = Local_557.f_7.f_9;
	func_268(&(Local_557.f_7.f_9), 32);
	iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
	if (func_398(iVar5))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Local_557.f_961), iVar4);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Local_557.f_961), iVar4);
	}
	func_399();
	if (iVar0 != 0 && !func_43(1))
	{
		if (func_400())
		{
			func_189(&(Local_300[Local_557.f_1008 /*8*/]), 1048576);
		}
		if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 1048576) && func_401())
		{
			func_149(iVar0, 0);
		}
	}
	if ((func_43(4) && func_402()) && !func_403())
	{
		func_404(2);
	}
	if (iVar0 != 0 && func_406(func_405(), Local_557.f_20.f_2))
	{
		func_407(Local_557.f_2);
	}
	if (iVar0 != 0 && !func_45())
	{
		func_408();
	}
	if (iVar0 != 0 && func_45())
	{
		if (func_409(iVar5))
		{
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_557.f_960), iVar4))
			{
				func_410(iVar5);
				SCRIPTS::_0x31010318BA9897AC(&(Local_557.f_960), iVar4);
			}
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_557.f_960), iVar4))
		{
			func_31(iVar5);
			SCRIPTS::_0xD426E2E3288469D6(&(Local_557.f_960), iVar4);
		}
	}
	if (func_43(65536) || func_43(32768))
	{
		if (iVar0 != 0)
		{
			fVar6 = func_411(Global_35, Local_557.f_20.f_7);
			if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 256))
			{
				fVar7 = 65f;
			}
			else
			{
				fVar7 = 50f;
			}
			if (fVar6 < Local_557.f_20.f_19 || func_412(fVar7))
			{
				func_189(&(Local_300[Local_557.f_1008 /*8*/]), 256);
				func_189(&(Local_300[Local_557.f_1008 /*8*/]), 1024);
				func_189(&(Local_300[Local_557.f_1008 /*8*/]), 512);
			}
			else if (fVar6 > (Local_557.f_20.f_19 + 15f))
			{
				func_413(&(Local_300[Local_557.f_1008 /*8*/]), 256);
			}
		}
	}
	if (!func_43(1048576))
	{
		PLAYER::_0xDFC85C5199045026(PLAYER::PLAYER_ID(), 0.2f);
		func_125(1048576);
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 128) && NETWORK::GET_TIME_DIFFERENCE(Local_557.f_1003, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 22000)
	{
		func_413(&(Local_300[Local_557.f_1008 /*8*/]), 128);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_34) && func_414(Global_34))
	{
		Local_557.f_1016 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (iVar0 == 1)
	{
		if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 16384) && func_163(Local_557.f_1006))
		{
			func_189(&(Local_300[Local_557.f_1008 /*8*/]), 16384);
			func_49(1);
			func_48();
		}
		if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 16384))
		{
			func_415();
			func_416(250);
			if (func_417(109, 255))
			{
				func_49(0);
			}
		}
		if (GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_15.f_282)
		{
			func_189(&(Local_300[Local_557.f_1008 /*8*/]), 32768);
		}
		else
		{
			func_413(&(Local_300[Local_557.f_1008 /*8*/]), 32768);
		}
	}
	else if (iVar0 == 2)
	{
		if (!GANG::_0xD6F6ACF4392187FB(Local_15.f_282) || !GANG::_0x9BE7DCB22D32CCBE(Local_15.f_282, PLAYER::PLAYER_ID()))
		{
			if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 1048576))
			{
				func_413(&(Local_300[Local_557.f_1008 /*8*/]), 4);
				func_44(4);
				func_189(&(Local_300[Local_557.f_1008 /*8*/]), 65536);
				func_125(16777216);
				if ((!GANG::_0xD6F6ACF4392187FB(Local_15.f_282) || !GANG::_0x0F99F6436528A089(Local_15.f_282)) || (GANG::_0x149A2751AB66AC02(Local_15.f_282) <= 1 && !GANG::_0x9BE7DCB22D32CCBE(Local_15.f_282, PLAYER::PLAYER_ID())))
				{
					func_125(8388608);
				}
			}
		}
	}
	if (func_418(0))
	{
		func_125(16384);
	}
	else
	{
		func_44(16384);
	}
	if (iVar0 == 0)
	{
		if (func_45())
		{
			iVar8 = 0;
			while (iVar8 < 7)
			{
				if (Local_15.f_234[iVar8 /*2*/] == 255)
				{
				}
				else if (Local_15.f_234[iVar8 /*2*/] != iVar1)
				{
				}
				else
				{
					func_419(1, iVar8);
					return;
				}
				iVar8++;
			}
			iVar8 = 0;
			while (iVar8 < 7)
			{
				if (Local_15.f_234[iVar8 /*2*/] == 255)
				{
				}
				else if (func_163(iVar8))
				{
				}
				else if (!GANG::_0x3F59FE6F37869576(iVar1, Local_15.f_234[iVar8 /*2*/]))
				{
				}
				else
				{
					func_419(4, -1);
					return;
				}
				iVar8++;
			}
		}
		if (GANG::_0x9BE7DCB22D32CCBE(Local_15.f_282, PLAYER::PLAYER_ID()))
		{
			func_419(2, -1);
			return;
		}
		if (func_59(256) && func_420(Local_557.f_7, 30f))
		{
			func_419(3, -1);
		}
	}
}

void func_225()
{
	if (func_45() && !func_59(16777216))
	{
		return;
	}
	func_421();
	func_422();
	func_423();
	func_424();
	func_425();
	func_426();
	func_427();
}

void func_226()
{
	if (Local_557.f_20.f_551 == 0)
	{
		return;
	}
	if (!func_59(2))
	{
		return;
	}
	func_428(Local_557.f_7.f_8);
	func_268(&(Local_557.f_7.f_8), Local_557.f_20.f_551);
}

void func_227()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_43(4))
	{
		return;
	}
	if (func_59(33554432))
	{
		if (!func_43(131072))
		{
			iVar0 = 0;
			while (iVar0 < 21)
			{
				if (!func_429(iVar0))
				{
				}
				else
				{
					func_430(iVar0, &(Local_300[Local_557.f_1008 /*8*/]));
				}
				iVar0++;
			}
			func_125(131072);
		}
		return;
	}
	iVar1 = Local_557.f_7.f_5;
	if (func_47(&(Local_300[iVar1 /*8*/]), 4) && func_396(iVar1, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (!func_429(iVar0))
			{
			}
			else if (func_431(iVar0, &(Local_300[Local_557.f_1008 /*8*/])))
			{
			}
			else if (!func_431(iVar0, &(Local_300[iVar1 /*8*/])))
			{
			}
			else
			{
				func_430(iVar0, &(Local_300[Local_557.f_1008 /*8*/]));
			}
			iVar0++;
		}
	}
	iVar2 = PLAYER::PLAYER_PED_ID();
	iVar0 = Local_557.f_7.f_6;
	if (((!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_431(iVar0, &(Local_300[Local_557.f_1008 /*8*/]))) && func_429(iVar0)) && func_52(iVar0, &iVar3, 1, 1))
	{
		if (!func_51(iVar0, 131072))
		{
			func_177(iVar0, 131072);
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar3);
		}
		if (PED::IS_PED_IN_COMBAT(iVar3, iVar2) || func_432(iVar3, 45f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			func_430(iVar0, &(Local_300[Local_557.f_1008 /*8*/]));
		}
	}
	if ((func_51(iVar0, 131072) && func_431(iVar0, &(Local_300[Local_557.f_1008 /*8*/]))) && func_52(iVar0, &iVar3, 0, 1))
	{
		PED::_0x3088634CF8C819CF(iVar3);
		func_295(iVar0, 131072);
	}
	func_268(&(Local_557.f_7.f_5), 32);
	func_268(&(Local_557.f_7.f_6), 21);
}

void func_228(var uParam0)
{
	int iVar0;
	var uVar1;
	struct<30> Var2;
	struct<9> Var32;

	iVar0 = PLAYER::PLAYER_ID();
	if (func_433(uParam0))
	{
		if (PLAYER::IS_PLAYER_DEAD(iVar0) && !func_434())
		{
			if (Local_557.f_1009 == 0)
			{
				Local_557.f_1009 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(Local_557.f_1009, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 15000)
			{
				func_435(1, 1);
				Local_557.f_1009 = 0;
			}
		}
		else
		{
			Local_557.f_1009 = 0;
		}
	}
	if (func_436(uParam0, &uVar1))
	{
		func_437(1);
	}
	else
	{
		func_437(0);
	}
	if ((func_43(2) && func_438(255)) && func_439(255))
	{
		func_440(&Var2, &Var32);
		func_441(Var2, Var32, 1, 1, 1);
	}
}

void func_229()
{
	int iVar0;
	var uVar1;
	int iVar2;
	char* sVar3;

	if (!func_59(8192))
	{
		return;
	}
	if (!func_59(2))
	{
		return;
	}
	if (func_43(4))
	{
		if (!func_43(67108864))
		{
			PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 1);
			func_125(67108864);
		}
	}
	else if (func_43(67108864))
	{
		PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 0);
		func_44(67108864);
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 2048))
	{
		return;
	}
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4096))
	{
		iVar0 = 0;
		while (iVar0 < Local_557.f_20.f_548)
		{
			if (func_53(iVar0))
			{
				if (func_52(iVar0, &uVar1, 0, 0))
				{
					ENTITY::_0x1AD922AB5038DEF3(uVar1);
					PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), uVar1, 0);
				}
				if (func_51(iVar0, 65536) && func_54(iVar0, &uVar1, 1))
				{
					ENTITY::_0x1AD922AB5038DEF3(uVar1);
					PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), uVar1, 0);
				}
			}
			iVar0++;
		}
		func_189(&(Local_300[Local_557.f_1008 /*8*/]), 4096);
	}
	if (Local_557.f_7.f_7 >= Local_557.f_20.f_553)
	{
		func_189(&(Local_300[Local_557.f_1008 /*8*/]), 2048);
		return;
	}
	iVar2 = Local_557.f_7.f_7;
	iVar0 = Local_557.f_20.f_495[iVar2 /*2*/];
	if (iVar0 > Local_557.f_20.f_548)
	{
		Local_557.f_7.f_7++;
		return;
	}
	if (iVar0 < 0)
	{
		Local_557.f_7.f_7++;
		return;
	}
	if (func_51(iVar0, 65536))
	{
		if (!func_54(iVar0, &uVar1, 1))
		{
			Local_557.f_7.f_7++;
			return;
		}
	}
	else if (!func_52(iVar0, &uVar1, 1, 0))
	{
		Local_557.f_7.f_7++;
		return;
	}
	if (Local_557.f_20.f_5 >= Local_557.f_20.f_6)
	{
		return;
	}
	sVar3 = func_105(func_104(iVar2));
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		Local_557.f_7.f_7++;
		return;
	}
	if (!Local_557.f_20.f_495[iVar2 /*2*/].f_1)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sVar3);
		Local_557.f_20.f_495[iVar2 /*2*/].f_1 = 1;
		return;
	}
	else if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar3))
	{
		return;
	}
	if (func_442(uVar1, sVar3, 1, 1058642330 /* Float: 0.6f */, 1053609165 /* Float: 0.4f */, 0))
	{
	}
	func_177(iVar0, 524288);
	Local_557.f_20.f_5++;
	Local_557.f_7.f_7++;
}

void func_230()
{
	bool bVar0;

	if (Local_557.f_20.f_555 == 0)
	{
		return;
	}
	if ((Local_15.f_222 == -1 || Local_15.f_222.f_1 == -1) || !func_59(268435456))
	{
		func_413(&(Local_300[Local_557.f_1008 /*8*/]), 262144);
		func_413(&(Local_300[Local_557.f_1008 /*8*/]), 524288);
		if (func_30(Local_557.f_957))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Local_557.f_957);
			Local_557.f_957 = 0;
		}
		return;
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 262144))
	{
		return;
	}
	if (!func_443(Local_15.f_222, Local_15.f_222.f_1, &bVar0))
	{
		return;
	}
	if (bVar0)
	{
		func_189(&(Local_300[Local_557.f_1008 /*8*/]), 524288);
	}
	func_189(&(Local_300[Local_557.f_1008 /*8*/]), 262144);
	if (func_30(Local_557.f_957))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Local_557.f_957);
		Local_557.f_957 = 0;
	}
}

void func_231()
{
	bool bVar0;
	int iVar1;

	bVar0 = func_43(4);
	if ((bVar0 && func_43(4096)) && Local_557.f_20.f_16 == 1320143426)
	{
		if (func_444(0, 0, 0))
		{
			if (Local_557.f_1015 == 0)
			{
				Local_557.f_1015 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			if (Local_557.f_1015 != 0 && func_445(Local_557.f_1015) < 45000)
			{
				LAW::_0xBD944A3D36E992DE();
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::GET_PLAYER_INDEX());
			}
		}
		else
		{
			Local_557.f_1015 = 0;
		}
	}
	if (bVar0 && Local_557.f_20.f_16 == 1320143426)
	{
		func_32(1);
		func_33(1);
	}
	else
	{
		func_32(0);
		func_33(0);
	}
	if ((bVar0 && Local_557.f_20.f_3 != 0) && !func_45())
	{
		iVar1 = PLAYER::PLAYER_ID();
		switch (Local_557.f_20.f_3)
		{
			case joaat("SUPPRESS_LAW_CRIMES"):
				LAW::_0x785177E4D57D7389(iVar1, joaat("CRIME_ASSAULT_LAW"), 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar1, joaat("CRIME_LAW_IS_THREATENED"), 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar1, joaat("CRIME_MURDER_LAW"), 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar1, joaat("CRIME_THREATEN_LAW"), 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar1, joaat("CRIME_THREATEN_LAW"), 0, 0, -1);
				break;
		}
	}
}

void func_232()
{
	bool bVar0;
	int iVar1;

	if (!func_43(8192))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_446(iVar1);
		if (Local_557.f_952[iVar1] == Global_1893587.f_2 && func_377(Global_1893587.f_2))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		Local_557.f_952.f_4 = 0;
	}
}

void func_233()
{
	if (!func_43(4))
	{
		return;
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		if (func_447())
		{
			if (func_43(33554432))
			{
				return;
			}
			func_125(33554432);
			if (func_43(func_57(1138140145)))
			{
				func_44(func_57(1138140145));
			}
			else if (func_43(func_57(joaat("MP_GFH_GLOBAL_START"))))
			{
				func_44(func_57(joaat("MP_GFH_GLOBAL_START")));
			}
			return;
		}
		else
		{
			func_44(33554432);
		}
		func_58(joaat("MP_GFH_GLOBAL_START"), 0);
		if (func_59(64))
		{
			func_58(joaat("MP_GFH_END"), 1);
			return;
		}
		else if (func_59(32))
		{
			func_58(joaat("MP_GFH_FAIL"), 1);
			return;
		}
		if (func_43(func_57(1138140145)))
		{
			return;
		}
		if (func_43(65536) || func_43(32768))
		{
			if (func_411(Global_35, Local_557.f_20.f_7) < Local_557.f_20.f_19)
			{
				func_58(1138140145, 0);
			}
		}
	}
	else
	{
		func_58(-2111154143, 0);
		if (func_59(64))
		{
			func_58(joaat("MP_GFH_FAIL"), 1);
			return;
		}
	}
}

void func_234()
{
	func_448(Local_557.f_7.f_10);
	func_268(&(Local_557.f_7.f_10), 6);
}

void func_235()
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return;
	}
	func_449(&uVar0, &bVar1, &bVar2, &bVar3);
	if (Local_557.f_1010 != -1)
	{
		iVar4 = NETWORK::GET_TIME_DIFFERENCE(Local_557.f_1010, NETWORK::GET_NETWORK_TIME_ACCURATE());
		if (bVar1)
		{
			Local_557.f_1011 = (Local_557.f_1011 + iVar4);
		}
		else
		{
			Local_557.f_1011 = 0;
		}
		if (bVar2)
		{
			Local_557.f_1012 = (Local_557.f_1012 + iVar4);
		}
		else
		{
			Local_557.f_1012 = 0;
		}
		if (bVar3)
		{
			Local_557.f_1013 = (Local_557.f_1013 + iVar4);
		}
		else
		{
			Local_557.f_1013 = 0;
		}
	}
	if ((!bVar1 && !bVar2) && !bVar3)
	{
		Local_557.f_1010 = -1;
		Local_557.f_1013 = 0;
		Local_557.f_1012 = 0;
		Local_557.f_1011 = 0;
	}
	else
	{
		Local_557.f_1010 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

var func_236(bool bParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;

	if (func_45())
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!func_396(iVar1, 0, 1))
			{
			}
			else if ((!func_47(&(Local_300[iVar1 /*8*/]), 4) && !func_47(&(Local_300[iVar1 /*8*/]), 8192)) && !func_47(&(Local_300[iVar1 /*8*/]), 131072))
			{
			}
			else
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!func_396(iVar1, 0, 1))
			{
			}
			else if (!func_47(&(Local_300[iVar1 /*8*/]), 4) && !func_47(&(Local_300[iVar1 /*8*/]), 64))
			{
			}
			else
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	if (bParam0)
	{
		SCRIPTS::_0xFFDDF802279BE128(&(Local_557.f_958), &uVar0, &uVar2);
		uVar0 = uVar2;
	}
	return uVar0;
}

void func_237(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&uParam0, iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar2 == iVar1)
			{
			}
			else
			{
				NETWORK::_0x157D8F3DE12B307F(iVar1, 0);
			}
		}
		iVar0++;
	}
}

Vector3 func_238(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_450(vParam0, fParam3, fParam4);
}

int func_239()
{
	return Local_557.f_20.f_1;
}

int func_240(int iParam0)
{
	return Global_1109804.f_5737[iParam0 /*5*/];
}

int func_241(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_452(func_451(iParam0, uParam1)))
	{
		return 0;
	}
	if (!func_453(iParam0, &vVar0, uParam1))
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

int func_242(int iParam0)
{
	return func_454(iParam0);
}

Vector3 func_243(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	struct<4> Var3;

	if (iParam2 == 0)
	{
		return func_451(iParam0, uParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_453(iParam0, &Var3, uParam1))
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

bool func_244(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	struct<8> Var1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_15.f_263[iParam0]))
	{
		return true;
	}
	if (func_452(vParam1))
	{
		return true;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_15.f_263.f_5))
	{
		if (VOLUME::_0x397769175A7DBB30(vParam1, fParam4, 0, 0, joaat("NET_TRAIN")))
		{
			*bParam6 = 1;
			return false;
		}
		Var1 = { vParam1 };
		Var1.f_4 = fParam4;
		Var1.f_6 = iParam5;
		Var1.f_7 = Local_557.f_20.f_556;
		Local_15.f_263.f_5 = VOLUME::_0x183C0B6CFEFFCAE4(&Var1);
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_15.f_263.f_5);
	switch (iVar0)
	{
		case 3:
			Local_15.f_263[iParam0] = VOLUME::_0x351D71B8B72B858B(Local_15.f_263.f_5);
			return true;
		case 4:
			Local_15.f_263.f_5 = 0;
			return true;
		default:
			break;
	}
	return false;
}

int func_245(int iParam0, struct<2> Param1, bool bParam3)
{
	struct<28> Var0;
	var uVar31;

	if (!Global_1901947.f_308.f_23)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!GANG::_0x93A91A351A07360E(iParam0))
	{
		return 0;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
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
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = iParam0;
	Var0.f_4 = 12;
	Var0.f_7 = { Param1 };
	if (bParam3)
	{
		Var0.f_14 |= 2;
	}
	uVar31 = func_455(iParam0);
	if (SCRIPTS::COUNT_PLAYER_BITS(&uVar31) <= 0)
	{
		return 0;
	}
	func_456(&Var0, uVar31);
	Var0.f_4 = 13;
	func_457(&Var0);
	return 1;
}

void func_246()
{
	int iVar0;
	float fVar1[21];
	float fVar23;
	int iVar24;
	int iVar25;

	if (Local_557.f_20.f_548 <= 0)
	{
		return;
	}
	if (Local_557.f_20.f_554 <= 0)
	{
		return;
	}
	if (!func_59(16384))
	{
		return;
	}
	if (func_59(2097152))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		fVar1[iVar0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		iVar0++;
	}
	iVar25 = 0;
	while (iVar25 < Local_557.f_20.f_554)
	{
		fVar23 = 0f;
		iVar24 = -1;
		iVar0 = 0;
		while (iVar0 < Local_557.f_20.f_548)
		{
			if (Local_557.f_20.f_22[iVar0 /*19*/] != joaat("POSSIBLE_TARGET"))
			{
			}
			else if (func_248(iVar0))
			{
			}
			else if (fVar1[iVar0] > fVar23)
			{
				fVar23 = fVar1[iVar0];
				iVar24 = iVar0;
			}
			iVar0++;
		}
		if (iVar24 == -1)
		{
		}
		else
		{
			func_458(iVar24);
			iVar25++;
		}
	}
	func_100(2097152);
}

bool func_247(int iParam0, int iParam1)
{
	struct<5> Var0;
	bool bVar5;

	if (((func_459(iParam0, &Var0) && func_346(Var0, -223083781, &bVar5, 0)) && bVar5) && func_345(Var0, 1033186381, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_248(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Local_15.f_251[iVar0], iVar1);
}

int func_249()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		if (!func_214(iVar0))
		{
		}
		else if (func_51(iVar0, 8) && !func_248(iVar0))
		{
		}
		else if (((((((func_51(iVar0, 64) && func_250(iVar0, &iVar1)) && Local_557.f_20.f_22[iVar0 /*19*/] != joaat("TARGET")) && iVar1 >= 0) && iVar1 < 21) && Local_557.f_20.f_22[iVar1 /*19*/] == joaat("POSSIBLE_TARGET")) && !func_248(iVar1)) && func_51(iVar1, 8))
		{
		}
		else
		{
			iVar2++;
		}
		iVar0++;
	}
	return iVar2;
}

bool func_250(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && func_345(Var0, 1033186381, iParam1, 0))
	{
		return true;
	}
	return false;
}

void func_251()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<5> Var5;
	bool bVar10;

	if (Local_557.f_20.f_548 <= 0)
	{
		return;
	}
	if (!func_460(2, Local_557.f_20.f_556))
	{
		return;
	}
	fVar0 = 0f;
	iVar1 = -1;
	iVar4 = func_351();
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (Local_557.f_20.f_22[iVar2 /*19*/] == 0)
		{
		}
		else
		{
			func_375(&Var5);
			if (!func_116(iVar2, &Var5))
			{
			}
			else if (!func_346(Var5, -155963228, &bVar10, 0) || !bVar10)
			{
			}
			else
			{
				fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (fVar3 > fVar0)
				{
					iVar1 = iVar2;
					fVar0 = fVar3;
				}
			}
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	func_461(iVar1, 33554432);
}

bool func_252()
{
	int iVar0;
	int iVar1;

	if (Local_15.f_255.f_2 >= 2)
	{
		return true;
	}
	iVar0 = func_462();
	if (Local_15.f_255.f_2 >= iVar0)
	{
		return true;
	}
	iVar1 = Local_15.f_255.f_2;
	if (!func_463(iVar1))
	{
		return false;
	}
	Local_15.f_255.f_2++;
	return false;
}

bool func_253()
{
	int iVar0;

	if (Local_15.f_255.f_1 >= 18)
	{
		return true;
	}
	iVar0 = Local_15.f_255.f_1;
	if (!func_464(iVar0))
	{
		return false;
	}
	Local_15.f_255.f_1++;
	return false;
}

bool func_254()
{
	int iVar0;

	if (Local_15.f_255 >= Local_557.f_20.f_548)
	{
		return true;
	}
	iVar0 = Local_15.f_255;
	if (!func_465(iVar0))
	{
		return false;
	}
	func_466();
	Local_15.f_255++;
	return false;
}

bool func_255()
{
	int iVar0;
	int iVar1;

	iVar0 = Local_15.f_255.f_3;
	iVar1 = func_467();
	if (iVar0 >= iVar1)
	{
		return true;
	}
	if (!func_468(iVar0))
	{
		return false;
	}
	func_268(&(Local_15.f_255.f_3), 5);
	return false;
}

bool func_256()
{
	if (!func_59(524288))
	{
		return false;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Local_15.f_277, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 10000)
	{
		return false;
	}
	return true;
}

void func_257()
{
	if (func_59(524288))
	{
		return;
	}
	Local_15.f_277 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_100(524288);
}

int func_258()
{
	return Local_557.f_20.f_16;
}

void func_259()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Local_557.f_946;
	func_469(iVar0, &iVar1, &iVar2);
	Local_557.f_946++;
	if (iVar2 < 0)
	{
		return;
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	if (Local_557.f_946.f_1 > -1)
	{
		if (Local_557.f_946.f_3 > iVar2)
		{
			return;
		}
		if (iVar3 < Local_557.f_946.f_2 && Local_557.f_946.f_3 == iVar2)
		{
			return;
		}
	}
	Local_557.f_946.f_1 = iVar0;
	Local_557.f_946.f_3 = iVar2;
	Local_557.f_946.f_2 = iVar3;
}

bool func_260()
{
	int iVar0;

	if (Local_557.f_946.f_1 == -1)
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_557.f_946.f_1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_283))
	{
		return false;
	}
	if (GANG::_0xD6F6ACF4392187FB(Local_15.f_282) && GANG::_0x901E0DC25080C8B9(iVar0) == Local_15.f_282)
	{
		return false;
	}
	if (iVar0 == Local_15.f_283)
	{
		return false;
	}
	Local_15.f_234[0 /*2*/] = iVar0;
	Local_15.f_275++;
	Local_15.f_276 = Local_15.f_275;
	return true;
}

void func_261()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Local_557.f_946;
	func_470(iVar0, &iVar1, &iVar2);
	Local_557.f_946++;
	if (iVar2 < 0)
	{
		return;
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	if (Local_557.f_946.f_1 > -1)
	{
		if (Local_557.f_946.f_3 > iVar2)
		{
			return;
		}
		if (iVar3 < Local_557.f_946.f_2 && Local_557.f_946.f_3 == iVar2)
		{
			return;
		}
	}
	Local_557.f_946.f_1 = iVar0;
	Local_557.f_946.f_3 = iVar2;
	Local_557.f_946.f_2 = iVar3;
}

bool func_262()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Local_557.f_946.f_1 == -1)
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_557.f_946.f_1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_283))
	{
		return false;
	}
	iVar1 = GANG::_0x901E0DC25080C8B9(iVar0);
	if (!GANG::_0xD6F6ACF4392187FB(iVar1))
	{
		return false;
	}
	if (iVar1 == Local_15.f_282)
	{
		return false;
	}
	if (iVar0 == Local_15.f_283)
	{
		return false;
	}
	Local_15.f_284 = iVar1;
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
		}
		else if (GANG::_0x901E0DC25080C8B9(iVar4) != iVar1)
		{
		}
		else
		{
			Local_15.f_234[iVar2 /*2*/] = iVar4;
			iVar2++;
			Local_15.f_275++;
		}
		iVar3++;
	}
	Local_15.f_276 = Local_15.f_275;
	return true;
}

void func_263()
{
	func_471();
	if (!func_59(16777216))
	{
		if (func_472(4))
		{
			if (func_59(8))
			{
				func_473(1);
			}
			func_100(16777216);
		}
	}
	else if (((!func_59(64) && !func_59(32)) && !func_59(8388608)) && !func_472(4))
	{
		func_100(8388608);
	}
	if (!func_59(2048) && (func_43(32768) || func_43(65536)))
	{
		if (func_472(1024))
		{
			func_100(2048);
		}
	}
}

void func_264()
{
	bool bVar0;

	if (Local_557.f_20.f_555 == 0)
	{
		return;
	}
	func_474(Local_15.f_259.f_2, &bVar0);
	if (bVar0)
	{
		return;
	}
	func_268(&(Local_15.f_259.f_2), Local_557.f_20.f_555);
}

void func_265()
{
	int iVar0;

	iVar0 = Local_15.f_259;
	func_475(iVar0);
	func_268(&(Local_15.f_259), 7);
}

void func_266(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_267(int iParam0)
{
	int iVar0;

	if (Local_15.f_2[iParam0 /*9*/].f_2 == 0)
	{
		return;
	}
	if (Local_15.f_2[iParam0 /*9*/].f_2 == 1583594396)
	{
		func_476(iParam0);
	}
	func_477(iParam0);
	if (!func_479(iParam0, 1, func_478(Local_15.f_2[iParam0 /*9*/].f_2)) && Local_15.f_2[iParam0 /*9*/].f_2 != 1583594396)
	{
		func_480(iParam0);
		return;
	}
	func_481(iParam0);
	if (func_43(65536) || func_43(32768))
	{
		if (((!func_59(536870912) && Local_15.f_2[iParam0 /*9*/].f_2 == joaat("TARGET")) && func_52(iParam0, &iVar0, 1, 1)) && func_411(ENTITY::GET_ENTITY_COORDS(iVar0, false, true), Local_557.f_20.f_7) > Local_557.f_20.f_19)
		{
			func_100(536870912);
		}
	}
	switch (Local_15.f_2[iParam0 /*9*/].f_2)
	{
		case joaat("TARGET"):
			func_482(iParam0);
			break;
		case joaat("EXTRA"):
			func_483(iParam0);
			break;
		case joaat("ANIMAL_EXTRA"):
			func_484(iParam0);
			break;
		case joaat("WAVE_PED"):
			func_485(iParam0);
			break;
		case 1583594396:
			if (func_486(iParam0))
			{
				func_62(iParam0, 0);
				func_487(iParam0);
			}
			break;
	}
}

void func_268(var uParam0, int iParam1)
{
	*uParam0++;
	if (*uParam0 >= iParam1)
	{
		*uParam0 = 0;
	}
}

bool func_269(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_17353[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_270(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_17353[iVar0 /*2*/] == iParam0)
		{
			return Global_17353[Global_17374 /*2*/].f_1;
		}
		iVar0++;
	}
	return 5;
}

bool func_271(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 878483537;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_272(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && func_109(Var0, -1111171646, uParam1, 0))
	{
		return true;
	}
	return false;
}

int func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
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
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
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
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
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
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
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
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
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
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
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
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
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
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
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
			return 405;
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
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
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
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
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
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
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
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
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
			return 544;
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
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
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
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
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
			return 542;
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
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
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
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
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
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
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
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
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
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
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
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
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
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
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

void func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_39.f_110[iVar1]), iVar2);
	Global_1939655 = 0;
}

void func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_39.f_110[iVar1]), iVar2);
	Global_1939655 = 0;
}

void func_276()
{
	func_275(-939420910);
	func_275(-1187950766);
	func_275(356365161);
	func_275(753127042);
	func_275(-2038424081);
	func_275(1884271742);
	func_275(459290420);
}

void func_277()
{
	func_275(704802028);
	func_275(588987611);
	func_275(2008888900);
	func_275(1649996811);
	func_275(227918160);
	func_275(168171957);
	func_275(1193080109);
	func_275(-491981251);
	func_275(-639037538);
	func_275(-618620429);
}

bool func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_273(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_488(iVar1))
	{
		if (Global_1071686.f_19648.f_24 && !func_489(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1071686.f_19648[iVar1], iVar2) || MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2);
}

void func_279(int iParam0)
{
	if (func_490(iParam0) && func_491())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

bool func_280(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iParam0))
	{
		return true;
	}
	return false;
}

void func_281(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_492(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1296859.f_22[iVar0])
		{
			func_123(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1071686.f_21416.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1296859 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_281(iVar3, iParam1, 0, 1, 0, 0);
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
			func_493(&Var6, uVar4);
		}
	}
}

void func_282(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

char* func_283(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

void func_284(int iParam0)
{
	func_285(&(Local_557.f_584[iParam0]));
}

void func_285(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_286(int iParam0)
{
	return iParam0 != 0;
}

void func_287(var uParam0, bool bParam1, bool bParam2)
{
	struct<30> Var0;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	int iVar40;

	if (((*uParam0)[0 /*34*/] != 0 || bParam2) || ((uParam0[0 /*34*/])->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1082130432;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_1);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_2);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_3);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_4);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_5);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_6);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_10);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_11);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_12);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_14);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_15);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_20);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_21);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_22);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_16);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_17);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_18);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_19);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((*uParam0)[iVar40 /*34*/]);
			if (!bParam1)
			{
				uVar34 = (uParam0[iVar40 /*34*/])->f_23;
				uVar35 = (uParam0[iVar40 /*34*/])->f_25;
				uVar36 = (uParam0[iVar40 /*34*/])->f_26;
				uVar37 = (uParam0[iVar40 /*34*/])->f_27;
				uVar38 = (uParam0[iVar40 /*34*/])->f_28;
				uVar39 = (uParam0[iVar40 /*34*/])->f_29;
			}
			MISC::_COPY_MEMORY(uParam0[iVar40 /*34*/], &Var0, 34);
			if (!bParam1)
			{
				(uParam0[iVar40 /*34*/])->f_23 = uVar34;
				(uParam0[iVar40 /*34*/])->f_25 = uVar35;
				(uParam0[iVar40 /*34*/])->f_26 = uVar36;
				(uParam0[iVar40 /*34*/])->f_27 = uVar37;
				(uParam0[iVar40 /*34*/])->f_28 = uVar38;
				(uParam0[iVar40 /*34*/])->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_288(int iParam0, bool bParam1)
{
	struct<14> Var0;

	if (iParam0->f_2 > 0)
	{
		UIFEED::_0xDD1232B332CBB9E7(12, 1, 0);
		if (bParam1)
		{
			func_494(iParam0);
			func_495();
		}
		func_496(iParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(iParam0->f_4));
		iParam0->f_9 = 0;
		func_497(0);
		func_498(0);
		UIFEED::_0xDD1232B332CBB9E7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::_COPY_MEMORY(iParam0, &Var0, 15);
	}
}

bool func_289(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_286(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

void func_290(int iParam0)
{
	int iVar0;

	if (Local_557.f_584.f_31[iParam0] == 255)
	{
		return;
	}
	iVar0 = Local_557.f_584.f_31[iParam0];
	func_499(iVar0);
	func_500(iVar0);
	func_501(iVar0);
	func_502(Local_15.f_234[iParam0 /*2*/]);
	func_503(iVar0);
	Local_557.f_584.f_31[iParam0] = 255;
}

void func_291(int iParam0)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_557.f_959), iParam0))
	{
		return;
	}
	func_500(iParam0);
	func_503(iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Local_557.f_959), iParam0);
}

bool func_292(var uParam0, int iParam1, int iParam2)
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

bool func_293(var uParam0, int iParam1, int iParam2)
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

bool func_294(int iParam0)
{
	if (func_176(iParam0, 1))
	{
		return false;
	}
	if (func_176(iParam0, 4096))
	{
		return false;
	}
	switch (Local_15.f_2[iParam0 /*9*/].f_2)
	{
		case joaat("TARGET"):
		case joaat("WAVE_PED"):
		case joaat("ANIMAL_EXTRA"):
			return false;
		default:
			break;
	}
	return true;
}

void func_295(int iParam0, int iParam1)
{
	func_139(&(Local_557.f_20.f_22[iParam0 /*19*/].f_1), iParam1);
}

bool func_296(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1139381.f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1139381.f_3876.f_706.f_1 = 0;
	Global_1139381.f_3876.f_706.f_2 = 1613014828;
	Global_1139381.f_3876.f_706.f_3 = iParam0;
	Global_1139381.f_3876.f_706.f_4 = 0;
	if (!DATAFILE::_0x603AC35FD4602C76(Global_1139381.f_3876.f_706))
	{
		Global_1139381.f_3876.f_706 = Global_1139381.f_2;
	}
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1139381.f_3876.f_706)))
	{
		return false;
	}
	Global_1139381.f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_504(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1139381.f_3876.f_706.f_4 = iVar1;
				Global_1139381.f_3876.f_706.f_2 = -239316549;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1139381.f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_505(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1139381.f_3876.f_706.f_2 = 1242520881;
					if (DATAFILE::_DATAFILE_GET_BOOL(&bVar3, &(Global_1139381.f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					Global_1139381.f_3876.f_2[func_506(iVar2, 1) /*4*/].f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

void func_297(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_298()
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

int func_299(int iParam0)
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
		case 135:
			return 69;
		case 136:
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
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_300(int iParam0)
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

void func_301(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_302(struct<2> Param0, bool bParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_73(Param0))
	{
		return;
	}
	iVar1 = func_507(Param0);
	if (!func_508(iVar1))
	{
		return;
	}
	iVar0 = func_509(iVar1);
	if (!func_510(iVar0))
	{
		return;
	}
	iVar2 = func_511(iVar1);
	if (!func_512(iVar2))
	{
		return;
	}
	iVar6 = func_513(iVar1);
	if (iVar6 == -1)
	{
		return;
	}
	iVar3 = func_514(iVar0);
	iVar4 = func_515(iVar0);
	iVar5 = func_240(iVar6);
	if (func_516())
	{
		if (bParam2 && GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_517(iVar0, iVar2, Param0, iVar6);
		}
		if (func_242(iVar5) != joaat("SETUP"))
		{
			switch (iVar4)
			{
				case joaat("CRIPPS"):
					break;
				case joaat("MARCEL"):
					func_519(iVar4, func_518());
					func_520(iVar4, 1);
					func_521(iVar0);
					func_522(iVar0);
					func_523(16777216);
					break;
				case joaat("MOONSHINER"):
					func_519(iVar4, func_518());
					func_520(iVar4, 1);
					func_521(iVar0);
					func_522(iVar0);
					func_523(8388608);
					break;
				default:
					func_519(iVar4, func_518());
					func_520(iVar4, 1);
					func_521(iVar0);
					func_522(iVar0);
					break;
			}
		}
		func_524(iVar4, func_518());
		func_525(iVar4, bParam2);
		switch (func_526(iVar5))
		{
			case 7:
				func_527(uParam3);
				break;
		}
		func_528(iVar6, Param0, bParam2, *uParam3);
		func_530(func_529(iVar0), 1);
		func_531(1);
	}
	func_532(iVar3, bParam2);
	func_533();
}

bool func_303(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return func_534(iParam0, iParam1);
}

void func_304(int iParam0)
{
	func_535(iParam0);
}

void func_305(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_536(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (func_537(Var0))
	{
		return;
	}
	if (!func_538(Var0))
	{
		return;
	}
	if (func_539(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	if (bParam1)
	{
		bVar2 = 4;
	}
	else
	{
		bVar2 = false;
	}
	func_540(Var0, 0, bVar2, bParam2, 0);
	func_541(iParam0, 4);
}

void func_306(bool bParam0, bool bParam1, int iParam2)
{
	if (func_45())
	{
		*iParam2 = Local_15.f_276;
		if (bParam0)
		{
			*bParam1 = Local_15.f_275;
		}
		else
		{
			*bParam1 = (*iParam2 - Local_15.f_275);
		}
	}
	else
	{
		*iParam2 = Local_557.f_20.f_549;
		if (bParam0)
		{
			*bParam1 = Local_15.f_275;
		}
		else
		{
			*bParam1 = (*iParam2 - Local_15.f_275);
		}
	}
}

void func_307(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_73(Param0))
	{
		return;
	}
	iVar1 = func_507(Param0);
	if (!func_508(iVar1))
	{
		return;
	}
	iVar0 = func_509(iVar1);
	if (!func_510(iVar0))
	{
		return;
	}
	iVar2 = func_511(iVar1);
	if (!func_512(iVar2))
	{
		return;
	}
	if (bParam4 <= 0)
	{
	}
	else if (bParam3 >= bParam4)
	{
		bVar6 = true;
		bVar4 = true;
		bVar5 = true;
	}
	else
	{
		bVar6 = false;
		bVar4 = bParam3 >= true;
		fVar3 = (BUILTIN::TO_FLOAT(bParam3) / BUILTIN::TO_FLOAT(bParam4));
		bVar5 = fVar3 >= 0.5f;
	}
	if (bVar5)
	{
		switch (iParam6)
		{
			case 0:
			case 2:
				iVar7 = 0;
				break;
			case 1:
				iVar7 = 1;
				break;
		}
	}
	else if (bVar4)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 2;
	}
	iVar10 = func_515(iVar0);
	iVar11 = func_154(Param0);
	iVar8 = func_513(iVar1);
	iVar9 = func_514(iVar0);
	if (func_516())
	{
		func_542(iVar10, iVar11);
		func_543(iVar10, iVar8);
		func_544(iVar10, iVar7);
		func_545(iVar10, bParam2, bVar4);
		func_546(iVar10, bParam2, bVar6);
		func_547(iVar8, bParam2, bVar4, Param0, iParam5, iParam6 == 3, bParam7);
		if (!bParam2)
		{
			if (bVar4)
			{
				func_548(iVar2, iVar0, joaat("PASS_NEAR"), Param0);
			}
			else
			{
				func_548(iVar2, iVar0, joaat("FAIL_NEAR"), Param0);
			}
		}
		func_549(bVar4);
	}
	func_550(iVar9, bParam2, bVar4);
	func_551(Param0, bVar4);
	func_552(1);
	func_552(0);
	func_553(0);
	func_554(0);
	func_555(4);
}

void func_308(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_536(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (func_537(Var0))
	{
		return;
	}
	if (!func_538(Var0))
	{
		return;
	}
	if (func_539(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_540(Var0, 0, 1, bParam1, 0);
	func_541(iParam0, 5);
}

void func_309(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_536(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (!func_537(Var0) && !func_538(Var0))
	{
		return;
	}
	func_556(iParam0, 2);
	func_556(iParam0, 3);
	func_541(iParam0, 6);
	func_540(Var0, 0, 2, bParam1, 0);
}

bool func_310(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return false;
	}
	func_557(iParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(iParam2, &(Global_1071686.f_636.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_311(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_240(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_558(iVar0);
	switch (iVar1)
	{
		case 2:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

var func_312(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_311(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_240(iParam0);
	iVar2 = func_558(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_559(2);
		case 1:
			return func_559(3);
		default:
			break;
	}
	return uVar0;
}

void func_313(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (iParam0 / 32);
	*iParam2 = (iParam0 % 32);
}

bool func_314(int iParam0)
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
	if (PLAYER::PLAYER_PED_ID() != iVar0)
	{
		return false;
	}
	return true;
}

bool func_315(int iParam0)
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
	if (PED::_GET_LAST_MOUNT(PLAYER::PLAYER_PED_ID()) != iVar0)
	{
		return false;
	}
	return true;
}

int func_316(int iParam0)
{
	return Local_15.f_234[iParam0 /*2*/].f_1;
}

char* func_317()
{
	return "supply_delivered";
}

char* func_318()
{
	return "HUD_MP_FREE_MODE";
}

int func_319(int iParam0)
{
	return Local_15.f_2[iParam0 /*9*/].f_2;
}

void func_320(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_65() != 0)
	{
		return;
	}
	if (func_560())
	{
		return;
	}
	if (PED::_0x0E2F43516F998269(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1139381.f_3876.f_2[func_506(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1139381.f_3876.f_2[func_506(iParam0, 1) /*4*/].f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1296859.f_16 != Global_1296859)
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
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar8]))
		{
		}
		else if (!GANG::_0x9BE7DCB22D32CCBE(Global_1296859.f_15, Global_1296859.f_154[iVar8]))
		{
		}
		else if (Global_1296859.f_154[iVar8] == Global_1296859.f_10)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar7, Global_1296859.f_154[iVar8]);
		}
		iVar8++;
	}
	func_561(&Var0, uVar7);
}

bool func_321(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_2 != joaat("TARGET"))
		{
		}
		else if (iVar0 == iParam0)
		{
		}
		else
		{
			if (func_176(iVar0, 1) || func_431(iVar0, &(Local_300[Local_557.f_1008 /*8*/])))
			{
				bVar2 = true;
			}
			else
			{
				bVar1 = true;
				iVar0++;
			}
			if (bVar1 && !bVar2)
			{
				return true;
			}
			return false;
		}
	}
}

var func_322(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_562() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_563());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_563());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_563());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_564(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_565(iVar2))
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
				if (iVar9 & 8192 != 0 && func_566(iVar2) != 1)
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
					if (!func_567(iVar10))
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

void func_323(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 53;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uParam0->f_5 = Local_557;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 38, &uParam1);
}

void func_324(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (uParam0->f_4)
	{
		case 1:
			iVar0 = Local_15.f_234[uParam0->f_6 /*2*/];
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				return;
			}
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				return;
			}
			if (!func_43(4))
			{
				return;
			}
			func_569(func_568(iVar0));
			break;
		case 2:
			if ((!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4) && !func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192)) && !func_47(&(Local_300[Local_557.f_1008 /*8*/]), 131072))
			{
				return;
			}
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_7);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
			{
				return;
			}
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				return;
			}
			if (((func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4) && !func_59(64)) && !func_59(32)) && !func_163(uParam0->f_6))
			{
				func_569(func_570(uParam0->f_6));
			}
			func_499(uParam0->f_6);
			func_501(uParam0->f_6);
			break;
		case 7:
			if (!func_43(4))
			{
				return;
			}
			if (uParam0->f_6 < 0 || uParam0->f_6 >= 21)
			{
				return;
			}
			func_313(iVar1, &iVar3, &iVar4);
			if (MISC::IS_BIT_SET(Local_557.f_996[iVar3], iVar4))
			{
				return;
			}
			if (Local_557.f_20 == joaat("ASSASSINATION_TRACKING"))
			{
				if (uParam0->f_1 == PLAYER::PLAYER_ID() || (func_52(uParam0->f_6, &iVar2, 0, 1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), Global_35) < 30f))
				{
					if (func_321(uParam0->f_6))
					{
						func_125(1024);
					}
				}
			}
			MISC::SET_BIT(&(Local_557.f_996[iVar3]), iVar4);
			break;
		case 11:
			func_571(uParam0->f_6);
			break;
	}
}

void func_325(int iParam0, int iParam1)
{
	if (func_176(iParam0, 134217728))
	{
		return;
	}
	if (Local_557.f_20.f_22[iParam0 /*19*/] != joaat("TARGET") && Local_557.f_20.f_22[iParam0 /*19*/] != joaat("POSSIBLE_TARGET"))
	{
		return;
	}
	if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam1))
	{
		Local_15.f_2[iParam0 /*9*/].f_5 = iParam1;
	}
	if (!func_59(16))
	{
		Local_15.f_275 = (Local_15.f_275 - 1);
	}
	func_461(iParam0, 134217728);
}

void func_326(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	MISC::SET_BIT(&(Local_15.f_249[iVar0]), iVar1);
	Local_15.f_275 = (Local_15.f_275 - 1);
	func_100(4194304);
}

void func_327(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_572(iParam0, 3);
}

void func_328(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_573(iParam0, iParam1);
}

void func_329(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 21)
	{
		return;
	}
	if (Local_15.f_2[iParam0 /*9*/].f_2 != joaat("TARGET") || func_176(iParam0, 134217728))
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	Local_15.f_2[iParam0 /*9*/].f_5 = iParam1;
}

void func_330(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_572(iParam0, 3);
}

void func_331(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_572(iParam0, 3);
}

void func_332(int iParam0, var uParam1)
{
	if (func_176(iParam0, 1))
	{
		return;
	}
	func_572(iParam0, 3);
}

void func_333(int iParam0, var uParam1)
{
	if (iParam0 >= 6 || iParam0 < 0)
	{
		return;
	}
	if (func_574(iParam0))
	{
		return;
	}
	func_575(iParam0);
}

void func_334(int iParam0)
{
	if (!func_153(iParam0, 0))
	{
		return;
	}
	if (func_172(iParam0, 2))
	{
		return;
	}
	func_576(iParam0, 2);
}

int func_335(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_577(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_336(int iParam0, int iParam1)
{
	return (Global_1107216.f_33[iParam0 /*16*/].f_3.f_8 && iParam1) != 0;
}

void func_337(int iParam0)
{
	Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_54.f_1 = (Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_54.f_1 || iParam0);
}

void func_338(char* sParam0, int* iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringIntConCat(&cVar0, Local_557, 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, iParam1);
}

void func_339(int iParam0)
{
	func_340(1, iParam0, joaat("REL_WILD_ANIMAL"), 1);
	func_340(1, iParam0, joaat("REL_WILD_ANIMAL_PREDATOR"), 1);
	func_340(1, iParam0, joaat("REL_DOMESTICATED_ANIMAL"), 1);
	func_340(1, iParam0, joaat("REL_ALLIGATOR"), 1);
	func_340(1, iParam0, joaat("REL_BOAR"), 1);
	func_340(1, iParam0, joaat("REL_WILD_ANIMAL_BIRD"), 1);
	func_340(1, iParam0, joaat("REL_HEN_ANIMAL"), 1);
}

void func_340(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	if (bParam3)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
	}
}

var func_341(int iParam0, bool bParam1)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	struct<2> Var4;

	Var4.f_1 = -1;
	iVar3 = func_240(iParam0);
	if (bParam1)
	{
		iVar2 = joaat("RIVAL_ATTEMPTS");
	}
	else
	{
		iVar2 = joaat("ATTEMPTS");
	}
	if (!func_578(iVar3, iVar2, &Var4, &Var0))
	{
		return -1;
	}
	return func_579(Var0, -1);
}

int func_342(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -872351721;
		case 1:
			return -1192837347;
		case 2:
			return 1457454771;
		case 3:
			return -486752250;
		case 4:
			return -81907729;
		case 5:
			return 724299998;
		case 6:
			return 256341061;
		case 7:
			return 95942702;
		case 8:
			return 331094197;
		case 9:
			return -1251795501;
		case 10:
			return -67473273;
		case 11:
			return -422348800;
		case 12:
			return -235687863;
		case 13:
			return 917283806;
		case 14:
			return -1284309372;
		case 15:
			return 110383052;
		case 16:
			return 229174115;
		case 17:
			return 251189665;
		case 18:
			return 1468810894;
		case 19:
			return -1906113237;
		case 20:
			return 92190263;
		case 21:
			return 1352900226;
		case 22:
			return -1834576753;
		case 23:
			return -185755803;
		case 24:
			return 1852727176;
		case 25:
			return -1968510322;
		case 26:
			return 1970643719;
		case 27:
			return -30329033;
		case 28:
			return 644584216;
		case 29:
			return 1077944842;
		case 30:
			return -435940167;
		case 31:
			return 1200880489;
		case 32:
			return 1385823714;
		case 33:
			return -180479720;
		case 34:
			return 582819194;
		case 35:
			return -234450476;
		case 36:
			return -1261869617;
		case 37:
			return -1103749002;
		case 38:
			return -1807236653;
		case 39:
			return 1837403330;
		case 40:
			return -764544644;
		case 41:
			return 79787630;
		case 42:
			return 465120035;
		case 43:
			return 1787479687;
		case 44:
			return 2092186359;
		case 45:
			return 219784559;
		case 46:
			return -1893679960;
		case 47:
			return -485657984;
		case 48:
			return -827172890;
		case 49:
			return 458129012;
		case 50:
			return 1533007347;
		case 51:
			return 485523583;
		case 52:
			return -537276532;
		case 53:
			return 861602793;
		case 54:
			return 275738575;
		case 55:
			return 1520538369;
		case 56:
			return -480788145;
		case 57:
			return -1045199329;
		case 58:
			return -1746234201;
		case 59:
			return 878483537;
		case 60:
			return -1111171646;
		case 61:
			return 227384668;
		case 62:
			return 2066595802;
		case 63:
			return 1137547076;
		case 64:
			return -1786937793;
		case 65:
			return -492382713;
		case 66:
			return -223083781;
		case 67:
			return -1770081554;
		case 68:
			return -1925214904;
		case 69:
			return -1318044545;
		case 70:
			return 509508008;
		case 71:
			return -1584591647;
		case 72:
			return -865441380;
		case 73:
			return 566779387;
		case 74:
			return -209788964;
		case 75:
			return -807337682;
		case 76:
			return -874477517;
		case 77:
			return 2090933413;
		case 78:
			return -852511194;
		case 79:
			return 1159597515;
		case 80:
			return 460674190;
		case 81:
			return 2053368303;
		case 82:
			return -1882633578;
		case 83:
			return 265695803;
		case 84:
			return -2129803861;
		case 85:
			return 1628979087;
		case 86:
			return 413379496;
		case 87:
			return 1967834759;
		case 88:
			return -1878208438;
		case 89:
			return -385659440;
		case 90:
			return 2017657609;
		case 91:
			return 1719410419;
		case 92:
			return -1839625215;
		case 93:
			return 1160908162;
		case 94:
			return 1247393678;
		case 95:
			return 1446570234;
		case 96:
			return -261480992;
		case 97:
			return 1031590257;
		case 98:
			return 1322693839;
		case 99:
			return -1919876099;
		case 100:
			return 2069982589;
		case 101:
			return 625548052;
		case 102:
			return -2036553865;
		case 103:
			return -1249970703;
		case 104:
			return -454599147;
		case 105:
			return 1955180846;
		case 106:
			return -401087351;
		case 107:
			return 732905427;
		case 108:
			return -962528168;
		case 109:
			return -930766145;
		case 110:
			return 1823038874;
		case 111:
			return -176401167;
		case 112:
			return 635104585;
		case 113:
			return -1031804957;
		case 114:
			return -1272790307;
		case 115:
			return 735506410;
		case 116:
			return -1732010034;
		case 117:
			return -1711751769;
		case 118:
			return 2092691923;
		case 119:
			return 484707754;
		case 120:
			return -787028349;
		case 121:
			return -937849669;
		case 122:
			return -424701201;
		case 123:
			return -407841845;
		case 124:
			return 2071017826;
		case 125:
			return 1606032220;
		case 126:
			return 456924499;
		case 127:
			return 307635954;
		case 128:
			return -311657344;
		case 129:
			return -401112943;
		case 130:
			return 1059929194;
		case 131:
			return 871643656;
		case 132:
			return -412523681;
		case 133:
			return -155963228;
		case 134:
			return 597233769;
		case 135:
			return 706368435;
		case 136:
			return -1334467051;
		case 137:
			return -867387895;
		case 138:
			return -1652447499;
		case 139:
			return 1082010721;
		case 140:
			return -655039491;
		case 141:
			return -1296487272;
		case 142:
			return -429389572;
		case 143:
			return -1026827677;
		case 144:
			return 686916651;
		case 145:
			return -1765395338;
		case 146:
			return 1237093265;
		case 147:
			return 209905749;
		case 148:
			return 1078011673;
		case 149:
			return 561062234;
		case 150:
			return 1033186381;
		case 151:
			return 386308088;
		case 152:
			return -375509478;
		case 153:
			return -436871069;
		case 154:
			return 1464077990;
		case 155:
			return 723480330;
		case 156:
			return -1859092546;
		case 157:
			return -2109843125;
		case 158:
			return 749370907;
		case 159:
			return 1525953930;
		case 160:
			return -1839855939;
		case 161:
			return 1158526802;
		case 162:
			return 350192982;
		case 163:
			return 1475346163;
		case 164:
			return 1590382703;
		case 165:
			return 1741894372;
		case 166:
			return 1309785647;
		case 167:
			return -894890997;
		case 168:
			return -2067326263;
		case 169:
			return -1133284398;
		case 170:
			return 101317385;
		case 171:
			return -1463370342;
		case 172:
			return -513112783;
		case 173:
			return 2102445471;
		case 174:
			return 892963390;
		case 175:
			return 89352665;
		case 176:
			return -2076494195;
		case 177:
			return -1976409839;
		case 178:
			return 217995581;
		case 179:
			return -1269124321;
		case 180:
			return -1438322653;
		case 181:
			return 673047879;
		case 182:
			return -1918016700;
		case 183:
			return 258114362;
		case 184:
			return -619208322;
		case 185:
			return 796390761;
		case 186:
			return 912480409;
		case 187:
			return -728132736;
		case 188:
			return 1890996209;
		case 189:
			return -407275447;
		case 190:
			return -1443980387;
		case 191:
			return 2132698637;
		case 192:
			return -597454543;
		case 193:
			return -608357025;
		case 194:
			return 1793981541;
		case 195:
			return -966540255;
		case 196:
			return -1143761632;
		case 197:
			return 1326664274;
		case 198:
			return 691956863;
		case 199:
			return -566322512;
		case 200:
			return 1903857900;
		case 201:
			return 1518210740;
		case 202:
			return -1527836996;
		case 203:
			return -49926176;
		case 204:
			return 1855722710;
		case 205:
			return 764754194;
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

char* func_343(int iParam0)
{
	switch (iParam0)
	{
		case -872351721:
			return "activity/locations/location(id=%x)";
		case -1192837347:
			return "activity/locations/location(%i)";
		case 1457454771:
			return "activity/locations";
		case 331094197:
			return "peds/ped(%i)";
		case -1251795501:
			return "peds";
		case -67473273:
			return "props";
		case -422348800:
			return "props/prop(%i)";
		case -1746234201:
			return "tracking_paths";
		case 878483537:
			return "tracking_paths/path(%i)";
		case -1968510322:
			return "patrol_routes/patrol_route(%i)";
		case 1970643719:
			return "patrol_routes";
		case -30329033:
			return "patrol_node(%i)";
		case 485523583:
			return "defensive_areas";
		case -537276532:
			return "defensive_areas/defensive_volume(%i)";
		case 1520538369:
			return "ambient_restriction_areas";
		case -480788145:
			return "ambient_restriction_areas/ambient_restriction_volume(%i)";
		case -937849669:
			return "respawn_exclusion_areas";
		case -424701201:
			return "respawn_exclusion_areas/respawn_exclusion_volume(%i)";
		case -1318044545:
			return "los_blockers";
		case 509508008:
			return "los_blockers/blocker(%i)";
		case 625548052:
			return "ambient_chests";
		case -2036553865:
			return "ambient_chests/chest(%i)";
		case 732905427:
			return "aggregate_volumes";
		case -962528168:
			return "aggregate_volumes/aggregate_volume(%i)";
		case 1823038874:
			return "waves/wave(%i)";
		case -930766145:
			return "waves";
		case -176401167:
			return "wave_ped(%i)";
		case 484707754:
			return "respawn_points";
		case -787028349:
			return "respawn_points/respawn_point(%i)";
		case 2071017826:
			return "triggers";
		case 1606032220:
			return "triggers/trigger(%i)";
		case 386308088:
			return "herb_restriction_volumes";
		case -375509478:
			return "herb_restriction_volumes/herb_restriction_volume(%i)";
		case -1334467051:
			return "ped_groups";
		case -867387895:
			return "ped_groups/ped_group(%i)";
		case -429389572:
			return "ped_groups/ped_group(%i)/ped(%i)";
		case 723480330:
			return "lighting_rigs";
		case -1859092546:
			return "lighting_rigs/lighting_rig(%i)";
		case 749370907:
			return "region_trespass_volume_handlers";
		case 1525953930:
			return "region_trespass_volume_handlers/region(%i)";
		case -1839855939:
			return "trespass_volume_search(%i)";
		case -1976409839:
			return "pickups";
		case 217995581:
			return "pickups/pickup(%i)";
		case -407275447:
			return "target_zones";
		case -1443980387:
			return "target_zones/target_zone(%i)";
		case 644584216:
			return "decals/decal(%i)";
		case -1527836996:
			return "world_states";
		case -49926176:
			return "world_states/world_state(%i)";
		case 1077944842:
			return "decals";
		case 2132698637:
			return "ped(%i)";
		case -486752250:
			return ":model";
		case -81907729:
			return ":position";
		case 724299998:
			return ":heading";
		case 256341061:
			return ":weapon";
		case 95942702:
			return ":role";
		case 917283806:
			return ":mounted";
		case -1284309372:
			return ":weapon_out";
		case 110383052:
			return ":aggro_group_id";
		case 229174115:
			return ":scenario";
		case 251189665:
			return ":behavior";
		case 1468810894:
			return ":follow_offset";
		case -1906113237:
			return ":follow_target";
		case 92190263:
			return ":mission_time";
		case 1352900226:
			return ":is_sentry";
		case -1834576753:
			return ":use_proximity_alert";
		case -185755803:
			return ":pvp_mission";
		case 1852727176:
			return ":targets_start_visible";
		case -435940167:
			return ":look_at_position";
		case 1200880489:
			return ":duration";
		case 1385823714:
			return ":next_node";
		case -180479720:
			return ":patrol_route_id";
		case 582819194:
			return ":central_location";
		case -1103749002:
			return ":escape_dist";
		case -234450476:
			return ":is_potential_target";
		case -1261869617:
			return ":adds_extra_bounty";
		case -1807236653:
			return ":sentry_aim_dist";
		case 1837403330:
			return ":sentry_alert_dist";
		case -764544644:
			return ":proximity_alert_dist";
		case 79787630:
			return ":blip_search_radius";
		case 465120035:
			return ":blip_offset_radius";
		case -827172890:
			return ":is_law";
		case 219784559:
			return ":central_location_radius";
		case -1893679960:
			return ":central_location_name";
		case -485657984:
			return ":max_search_radius_offset";
		case 1787479687:
			return ":use_search_area";
		case 2092186359:
			return ":use_go_to_area";
		case 458129012:
			return ":locate_all_targets_together";
		case 1533007347:
			return ":defensive_area_id";
		case 861602793:
			return ":rotation";
		case 275738575:
			return ":scale";
		case -1045199329:
			return ":loop_back";
		case -1111171646:
			return ":waypoint_recording";
		case 227384668:
			return ":source_ped_id";
		case 2066595802:
			return ":enable_tracking_paths";
		case 1137547076:
			return ":randomly_select_targets";
		case -1786937793:
			return ":num_targets_to_pick";
		case -492382713:
			return ":dont_spawn_unless_target";
		case -223083781:
			return ":is_dependent";
		case -1770081554:
			return ":clear_hideouts_in_area";
		case -1925214904:
			return ":target_escape_dist";
		case -1584591647:
			return ":start";
		case -865441380:
			return ":end";
		case 566779387:
			return ":is_guard";
		case -235687863:
			return ":place_on_ground";
		case -209788964:
			return ":is_propset";
		case -807337682:
			return ":is_vehicle";
		case -874477517:
			return ":aggro_on_trespass";
		case 2090933413:
			return ":dont_aim_gun_on_disrupt";
		case -852511194:
			return ":has_saddle";
		case 1159597515:
			return ":use_veg_mod";
		case 460674190:
			return ":use_lantern_behavior";
		case 2053368303:
			return ":use_last_known_location";
		case -1882633578:
			return ":last_known_location";
		case 265695803:
			return ":lkl_radius";
		case -2129803861:
			return ":visible_mission_time";
		case 1628979087:
			return ":max_active_tracking_paths";
		case 413379496:
			return ":use_delayed_targeting";
		case 1967834759:
			return ":always_neutral";
		case -1878208438:
			return ":use_long_distance_smoke";
		case -385659440:
			return ":smoke_offset";
		case 2017657609:
			return ":veg_mod_type";
		case 1719410419:
			return ":veg_mod_offset";
		case -1839625215:
			return ":veg_mod_size";
		case -261480992:
			return ":scenario_pos";
		case 1031590257:
			return ":start_off_horse";
		case 1322693839:
			return ":horse_position";
		case -1919876099:
			return ":horse_heading";
		case 2069982589:
			return ":scenario_propset";
		case -1249970703:
			return ":chest_type";
		case -454599147:
			return ":weight";
		case 1955180846:
			return ":num_chests_to_create";
		case -401087351:
			return ":type";
		case 635104585:
			return ":on_peds_remaining";
		case -1031804957:
			return ":delay";
		case -1272790307:
			return ":min_required_players";
		case 735506410:
			return ":max_required_players";
		case -1732010034:
			return ":alerted_behavior";
		case -1711751769:
			return ":move_to_pos";
		case 2092691923:
			return ":alt_move_to_pos";
		case -407841845:
			return ":weapon_to_add_on_move_to_reached";
		case 456924499:
			return ":activator";
		case 307635954:
			return ":ambush_wait_pos";
		case -311657344:
			return ":ambush_wait_heading";
		case -401112943:
			return ":crouch_before_ambush";
		case 1059929194:
			return ":ambush_trigger";
		case 871643656:
			return ":cancel_ambush_trigger";
		case -412523681:
			return ":accuracy";
		case -155963228:
			return ":can_have_treasure_map_loot";
		case 597233769:
			return ":placement_type";
		case 706368435:
			return ":enable_law";
		case -1652447499:
			return ":default_task_allocator";
		case -1296487272:
			return ":id";
		case 1082010721:
			return ":formation";
		case -655039491:
			return ":formation_offset";
		case -1026827677:
			return ":targets_to_add_on_2_starting_players";
		case 686916651:
			return ":targets_to_add_on_3_starting_players";
		case -1765395338:
			return ":targets_to_add_on_4_starting_players";
		case 1237093265:
			return ":targets_to_add_on_5_starting_players";
		case 209905749:
			return ":targets_to_add_on_6_starting_players";
		case 1078011673:
			return ":targets_to_add_on_7_starting_players";
		case 561062234:
			return ":force_flee_on_remaining_targets";
		case 1033186381:
			return ":dependent_target_ped";
		case -436871069:
			return ":health";
		case 1464077990:
			return ":mount_model";
		case -2109843125:
			return ":scene_name";
		case 1158526802:
			return ":radius";
		case 350192982:
			return ":outfit";
		case 1475346163:
			return ":outfit_index";
		case 1590382703:
			return ":loco_motion_type";
		case 1741894372:
			return ":seeing_range";
		case 1309785647:
			return ":hearing_range";
		case -894890997:
			return ":no_draft_horses";
		case -2067326263:
			return ":not_usable_by_player";
		case -1133284398:
			return ":spawn_in_vehicle";
		case 101317385:
			return ":vehicle_to_use";
		case -1463370342:
			return ":vehicle_seat";
		case -513112783:
			return ":starts_anchored";
		case 2102445471:
			return ":use_mount_as_tracking_source_standin";
		case 892963390:
			return ":dont_flee_on_mission_end";
		case 89352665:
			return ":is_dead_ped";
		case -2076494195:
			return ":remove_default_weapons";
		case -1269124321:
			return ":can_be_picked_up_by_player";
		case -1438322653:
			return ":orient_to_ground";
		case 673047879:
			return ":on_object";
		case -1918016700:
			return ":fixed";
		case 258114362:
			return ":pickup_weapon_after_move_to";
		case -619208322:
			return ":pickup_index";
		case 796390761:
			return ":alt_pickup_index";
		case 912480409:
			return ":move_to_heading";
		case -728132736:
			return ":alt_move_to_heading";
		case 1890996209:
			return ":weapon_to_give_ped";
		case -597454543:
			return ":attach_ped";
		case -608357025:
			return ":path_foliage_cost";
		case 1793981541:
			return ":path_deep_snow_cost";
		case -966540255:
			return ":path_climb_cost";
		case -1143761632:
			return ":dismount_on_arrival";
		case 1326664274:
			return ":dismount_delay";
		case 691956863:
			return ":melee_target";
		case -566322512:
			return ":brawler_group";
		case 1903857900:
			return ":width";
		case 1518210740:
			return ":has_discoverable_name";
		case 1160908162:
			return ":use_veg_mod_volume";
		case 1247393678:
			return ":veg_mod_scale";
		case 1446570234:
			return ":veg_mod_rotation";
		case 1855722710:
			return ":crime_config";
		case 764754194:
			return ":set_mission_road_context";
		default:
			break;
	}
	return "";
}

int func_344(var uParam0, int iParam1, char* sParam2)
{
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iParam1, sParam2))
	{
		return 0;
	}
	return 1;
}

bool func_345(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_346(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(bParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_347(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_348(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (func_119(&Var2))
	{
		func_345(Var2, -1786937793, &iVar0, 0);
		if (iParam0 >= 2 && func_345(Var2, -1026827677, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 3 && func_345(Var2, 686916651, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 4 && func_345(Var2, -1765395338, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 5 && func_345(Var2, 1237093265, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 6 && func_345(Var2, 209905749, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 7 && func_345(Var2, 1078011673, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
	}
	return func_580(iVar0, 0, 21);
}

int func_350()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_581(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 5)
	{
		return 5;
	}
	return iVar5;
}

int func_351()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_582(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 21)
	{
		return 21;
	}
	return iVar5;
}

void func_352(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	var uVar6;
	int iVar7;
	vector3 vVar8;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	vector3 vVar16;
	int iVar19;
	bool bVar20;
	int iVar21;

	iVar19 = -1;
	if (!func_116(iParam0, &Var0))
	{
		return;
	}
	if (!func_583(Var0))
	{
		return;
	}
	Local_557.f_20.f_22[iParam0 /*19*/].f_16 = 30f;
	Local_557.f_20.f_22[iParam0 /*19*/].f_17 = 12f;
	Local_557.f_20.f_22[iParam0 /*19*/].f_18 = 30f;
	if (func_348(Var0, -1807236653, &(Local_557.f_20.f_22[iParam0 /*19*/].f_16), 0))
	{
		func_177(iParam0, 1024);
	}
	if (func_348(Var0, 1837403330, &(Local_557.f_20.f_22[iParam0 /*19*/].f_17), 0))
	{
		func_177(iParam0, 2048);
	}
	func_348(Var0, -764544644, &(Local_557.f_20.f_22[iParam0 /*19*/].f_18), 0);
	func_345(Var0, -180479720, &(Local_557.f_20.f_22[iParam0 /*19*/].f_13), 0);
	func_345(Var0, 1533007347, &(Local_557.f_20.f_22[iParam0 /*19*/].f_14), 0);
	func_117(Var0, 95942702, &uVar5, 1);
	func_117(Var0, -486752250, &uVar6, 1);
	func_347(Var0, -81907729, &vVar8, 1);
	func_348(Var0, 724299998, &uVar11, 0);
	func_117(Var0, 256341061, &uVar12, 0);
	func_117(Var0, 251189665, &uVar13, 0);
	func_117(Var0, -1732010034, &uVar14, 0);
	func_117(Var0, 229174115, &uVar15, 0);
	func_347(Var0, 1468810894, &vVar16, 0);
	func_345(Var0, -1906113237, &iVar19, 0);
	if (!func_345(Var0, 110383052, &iVar7, 0))
	{
		iVar7 = -1;
	}
	if (iVar19 < -1 || iVar19 >= Local_557.f_20.f_548)
	{
		iVar19 = -1;
	}
	if (Local_557.f_20.f_22[iParam0 /*19*/].f_13 < 0 || Local_557.f_20.f_22[iParam0 /*19*/].f_13 >= 5)
	{
		Local_557.f_20.f_22[iParam0 /*19*/].f_13 = 0;
	}
	Local_557.f_20.f_22[iParam0 /*19*/] = uVar5;
	Local_557.f_20.f_22[iParam0 /*19*/].f_3 = { vVar8 };
	Local_557.f_20.f_22[iParam0 /*19*/].f_9 = uVar11;
	Local_557.f_20.f_22[iParam0 /*19*/].f_12 = iVar7;
	Local_557.f_20.f_22[iParam0 /*19*/].f_10 = uVar13;
	Local_557.f_20.f_22[iParam0 /*19*/].f_11 = uVar14;
	Local_557.f_20.f_22[iParam0 /*19*/].f_6 = { vVar16 };
	Local_557.f_20.f_22[iParam0 /*19*/].f_15 = iVar19;
	if ((Local_557.f_20.f_22[iParam0 /*19*/].f_10 == joaat("MELEE_TARGET") && Local_557.f_20.f_22[iParam0 /*19*/].f_11 != joaat("FOLLOW_TARGET")) && func_345(Var0, 691956863, &iVar19, 0))
	{
		Local_557.f_20.f_22[iParam0 /*19*/].f_15 = iVar19;
	}
	if (Local_557.f_20.f_22[iParam0 /*19*/].f_10 == joaat("MELEE_TARGET"))
	{
		if (!func_346(Var0, -566322512, &bVar20, 0) || bVar20)
		{
			func_177(iParam0, 2097152);
		}
		else
		{
			func_177(iParam0, 4194304);
		}
	}
	iVar21 = func_23(iParam0);
	func_584(iParam0, Var0, iVar21, uVar6, uVar5);
}

int func_353()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -407275447, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_354(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	var uVar8;
	struct<5> Var9;
	int iVar14;
	int iVar15;
	int iVar16;

	if (func_585(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar5, 1);
		func_348(Var0, 1158526802, &uVar8, 1);
		if (!func_586(&(Local_557.f_921[iParam0 /*4*/]), vVar5, 0f, 0f, 0f, uVar8, uVar8, 50f, joaat("CYLINDER")))
		{
			return;
		}
	}
	else
	{
		return;
	}
	iVar14 = func_587(iParam0);
	iVar15 = 0;
	while (iVar15 < iVar14)
	{
		Var9 = { Var0 };
		if (!func_120(&Var9, 2132698637, iVar15, 0))
		{
		}
		else if (!func_345(Var9, -1296487272, &iVar16, 1))
		{
		}
		else if (iVar16 < 0 || iVar16 >= 21)
		{
		}
		else if (func_51(iVar16, 262144))
		{
		}
		else if (Local_557.f_20.f_22[iVar16 /*19*/] != joaat("TARGET") && Local_557.f_20.f_22[iVar16 /*19*/] != joaat("POSSIBLE_TARGET"))
		{
		}
		else
		{
			func_177(iVar16, 262144);
			MISC::_0xE84AAC1B22A73E99(&(Local_557.f_921[iParam0 /*4*/].f_1), iVar16);
		}
		iVar15++;
	}
}

int func_355()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_588(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 18)
	{
		return 18;
	}
	return iVar5;
}

void func_356(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	bool bVar8;
	int iVar9;
	float fVar10;
	vector3 vVar11;
	int iVar14;
	vector3 vVar15;
	vector3 vVar18;
	int iVar21;
	bool bVar22;
	char cVar23[64];

	if (!func_459(iParam0, &Var0))
	{
		return;
	}
	if (!func_583(Var0))
	{
		return;
	}
	func_117(Var0, -486752250, &(Local_557.f_20.f_422[iParam0 /*4*/]), 0);
	func_347(Var0, -81907729, &vVar5, 1);
	bVar8 = false;
	if (func_346(Var0, -235687863, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 1);
	}
	if (func_346(Var0, -209788964, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 2);
	}
	if (func_346(Var0, -807337682, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 4);
	}
	if (func_346(Var0, -894890997, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 8);
	}
	if (func_346(Var0, -2067326263, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 16);
	}
	if (func_346(Var0, -513112783, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 64);
	}
	if (func_346(Var0, 89352665, &bVar8, 0) && bVar8)
	{
		func_589(iParam0, 128);
	}
	if (func_346(Var0, 1159597515, &bVar8, 0) && bVar8)
	{
		func_117(Var0, 2017657609, &iVar14, 0);
		func_347(Var0, 1719410419, &vVar11, 0);
		if (Local_557.f_20.f_422[iParam0 /*4*/] == 0)
		{
			func_589(iParam0, 256);
		}
		if (!func_348(Var0, -1839625215, &fVar10, 0))
		{
			fVar10 = 10f;
		}
		if (iVar14 == 0)
		{
			iVar9 = 2;
		}
		else
		{
			iVar9 = func_590(iVar14);
		}
		if (func_346(Var0, 1160908162, &bVar8, 0) && bVar8)
		{
			func_347(Var0, 1446570234, &vVar15, 0);
			func_347(Var0, 1247393678, &vVar18, 0);
			iVar21 = 0;
			while (iVar21 < 4)
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Local_557.f_987[iVar21]))
				{
				}
				else
				{
					bVar22 = true;
				}
				else
				{
					iVar21++;
				}
			}
			if (!bVar22)
			{
				return;
			}
			StringCopy(&cVar23, "VOL_VEG_MOD_PROP_", 64);
			StringIntConCat(&cVar23, iParam0, 64);
			Local_557.f_987[iVar21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar5 + vVar11, vVar15, vVar18, func_110(&cVar23));
			Local_557.f_20.f_422[iParam0 /*4*/].f_2 = GRAPHICS::_0xBD3324281E8B9933(Local_557.f_987[iVar21], iVar9, -1, 0);
		}
		else
		{
			Local_557.f_20.f_422[iParam0 /*4*/].f_2 = GRAPHICS::_0xFA50F79257745E74(vVar5 + vVar11, fVar10, iVar9, -1, 0);
		}
	}
}

int func_357()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_591(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

void func_358(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	var uVar7;

	if (!func_108(iParam0, &Var0))
	{
		return;
	}
	if (!func_117(Var0, -401087351, &iVar5, 1))
	{
		return;
	}
	iVar6 = iVar5;
	if (iVar6 == 0)
	{
		return;
	}
	if (iVar6 == joaat("BLOOD_TRAIL") && func_109(Var0, -1111171646, &uVar7, 0))
	{
		func_592(iParam0, 4);
		TASK::REQUEST_WAYPOINT_RECORDING(func_110(&uVar7));
	}
	func_347(Var0, -81907729, &(Local_557.f_20.f_533[iParam0 /*4*/].f_1), 0);
	func_592(iParam0, 1);
}

int func_359()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_593(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 8)
	{
		return 8;
	}
	return iVar5;
}

void func_360(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar20 = func_594(iParam0);
	if (func_595(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar10, 1);
		func_347(Var0, 275738575, &vVar16, 1);
		func_347(Var0, 861602793, &vVar13, 0);
		func_117(Var0, -401087351, &iVar19, 0);
		if (iVar20 > 0)
		{
			Local_557.f_962[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
			func_596(&(Local_557.f_962[iParam0]), vVar10, vVar13, vVar16, iVar19);
			iVar21 = 0;
			while (iVar21 < iVar20)
			{
				Var5 = { Var0 };
				if (!func_120(&Var5, -962528168, iVar21, 0))
				{
				}
				else
				{
					iVar19 = 0;
					vVar13 = { 0f, 0f, 0f };
					vVar10 = { 0f, 0f, 0f };
					vVar16 = { 0f, 0f, 0f };
					func_347(Var5, -81907729, &vVar10, 1);
					func_347(Var5, 275738575, &vVar16, 1);
					func_347(Var5, 861602793, &vVar13, 0);
					func_117(Var5, -401087351, &iVar19, 0);
					func_596(&(Local_557.f_962[iParam0]), vVar10, vVar13, vVar16, iVar19);
				}
				iVar21++;
			}
		}
		else if (!func_586(&(Local_557.f_962[iParam0]), vVar10, vVar13, vVar16, iVar19))
		{
			return;
		}
	}
}

int func_361()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_597(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

void func_362(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;

	if (func_598(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar5, 1);
		func_347(Var0, 275738575, &vVar11, 1);
		func_347(Var0, 861602793, &vVar8, 0);
		func_346(Var0, 764754194, &bVar14, 0);
	}
	Local_557.f_971[iParam0] = VOLUME::_CREATE_VOLUME_BOX(vVar5, vVar8, vVar11);
	if (bVar14)
	{
		PATHFIND::_0xB03944057FD735BA(Local_557.f_971[iParam0], 4, 0);
	}
}

int func_363()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -937849669, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 2)
	{
		return 2;
	}
	return iVar5;
}

void func_364(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar20 = func_599(iParam0);
	if (func_119(&Var0) && func_120(&Var0, -424701201, iParam0, 0))
	{
		func_347(Var0, -81907729, &vVar10, 1);
		func_347(Var0, 275738575, &vVar16, 1);
		func_347(Var0, 861602793, &vVar13, 0);
		func_117(Var0, -401087351, &iVar19, 0);
		if (iVar20 > 0)
		{
			Local_557.f_975[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
			func_596(&(Local_557.f_975[iParam0]), vVar10, vVar13, vVar16, iVar19);
			iVar21 = 0;
			while (iVar21 < iVar20)
			{
				Var5 = { Var0 };
				if (!func_120(&Var5, -962528168, iVar21, 0))
				{
				}
				else
				{
					iVar19 = 0;
					vVar13 = { 0f, 0f, 0f };
					vVar10 = { 0f, 0f, 0f };
					vVar16 = { 0f, 0f, 0f };
					func_347(Var5, -81907729, &vVar10, 1);
					func_347(Var5, 275738575, &vVar16, 1);
					func_347(Var5, 861602793, &vVar13, 0);
					func_117(Var5, -401087351, &iVar19, 0);
					func_596(&(Local_557.f_975[iParam0]), vVar10, vVar13, vVar16, iVar19);
				}
				iVar21++;
			}
		}
		else if (!func_586(&(Local_557.f_975[iParam0]), vVar10, vVar13, vVar16, iVar19))
		{
			return;
		}
	}
}

int func_365()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_600(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_366(int iParam0)
{
	struct<5> Var0;

	if (func_271(iParam0, &Var0))
	{
		func_345(Var0, 227384668, &(Local_557.f_20.f_495[iParam0 /*2*/]), 1);
	}
}

int func_367()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_601(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 4)
	{
		return 4;
	}
	return iVar5;
}

void func_368(int iParam0)
{
	Local_557.f_20.f_508[iParam0 /*6*/] = { func_602(iParam0) };
	Local_557.f_20.f_508[iParam0 /*6*/].f_3 = { func_603(iParam0) };
}

int func_369()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 2071017826, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_370(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_119(&Var0) || !func_120(&Var0, 1606032220, iParam0, 0))
	{
		return;
	}
	func_347(Var0, -81907729, &vVar10, 1);
	func_347(Var0, 275738575, &vVar16, 1);
	func_347(Var0, 861602793, &vVar13, 0);
	func_117(Var0, -401087351, &iVar19, 0);
	iVar20 = func_604(iParam0);
	if (iVar20 > 0)
	{
		Local_557.f_980[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
		func_596(&(Local_557.f_980[iParam0]), vVar10, vVar13, vVar16, iVar19);
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			Var5 = { Var0 };
			if (!func_120(&Var5, -962528168, iVar21, 0))
			{
			}
			else
			{
				iVar19 = 0;
				vVar13 = { 0f, 0f, 0f };
				vVar10 = { 0f, 0f, 0f };
				vVar16 = { 0f, 0f, 0f };
				func_347(Var5, -81907729, &vVar10, 1);
				func_347(Var5, 275738575, &vVar16, 1);
				func_347(Var5, 861602793, &vVar13, 0);
				func_117(Var5, -401087351, &iVar19, 0);
				func_596(&(Local_557.f_980[iParam0]), vVar10, vVar13, vVar16, iVar19);
			}
			iVar21++;
		}
	}
	else if (!func_586(&(Local_557.f_980[iParam0]), vVar10, vVar13, vVar16, iVar19))
	{
		return;
	}
}

int func_371()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 386308088, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

void func_372(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_119(&Var0) || !func_120(&Var0, -375509478, iParam0, 0))
	{
		return;
	}
	func_347(Var0, -81907729, &vVar10, 1);
	func_347(Var0, 275738575, &vVar16, 1);
	func_347(Var0, 861602793, &vVar13, 0);
	func_117(Var0, -401087351, &iVar19, 0);
	iVar20 = func_605(iParam0);
	if (iVar20 > 0)
	{
		Local_557.f_978[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
		func_596(&(Local_557.f_978[iParam0]), vVar10, vVar13, vVar16, iVar19);
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			Var5 = { Var0 };
			if (!func_120(&Var5, -962528168, iVar21, 0))
			{
			}
			else
			{
				iVar19 = 0;
				vVar13 = { 0f, 0f, 0f };
				vVar10 = { 0f, 0f, 0f };
				vVar16 = { 0f, 0f, 0f };
				func_347(Var5, -81907729, &vVar10, 1);
				func_347(Var5, 275738575, &vVar16, 1);
				func_347(Var5, 861602793, &vVar13, 0);
				func_117(Var5, -401087351, &iVar19, 0);
				func_596(&(Local_557.f_978[iParam0]), vVar10, vVar13, vVar16, iVar19);
			}
			iVar21++;
		}
	}
	else if (!func_586(&(Local_557.f_978[iParam0]), vVar10, vVar13, vVar16, iVar19))
	{
		return;
	}
}

int func_373()
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, 749370907, 0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

int func_374(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_375(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_2 = 0;
	uParam0->f_1 = 0;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 30;
		case joaat("REGION_BGV_OLD_MAN_JONES"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 31;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 32;
		case joaat("REGION_BLU_SISIKA"):
			return 33;
		case joaat("REGION_BLU_TRAVELLING_SALESMAN"):
			return 34;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 35;
		case joaat("REGION_CML_DINO_LADY"):
			return 36;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 37;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 38;
		case joaat("REGION_GRT_BEECHERS"):
			return 39;
		case joaat("REGION_GRT_BLACKWATER"):
			return 40;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 41;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 42;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 43;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 53;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 54;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 44;
		case joaat("REGION_GRZ_COHUTTA"):
			return 55;
		case joaat("REGION_GRZ_COLTER"):
			return 45;
		case joaat("REGION_GRZ_COTORRA_SPRINGS"):
			return 56;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 46;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 57;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 47;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 48;
		case joaat("REGION_GRZ_MOUNT_HAGEN_PEAK"):
			return 49;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 50;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 51;
		case joaat("REGION_GRZ_THELOFT"):
			return 58;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 59;
		case joaat("REGION_GRZ_WAPITI"):
			return 60;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 52;
		case joaat("REGION_GRZ_TRAVELLING_SALESMAN"):
			return 61;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 62;
		case joaat("REGION_GUA_CAMP"):
			return 63;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 64;
		case joaat("REGION_GUA_LACAPILLA"):
			return 65;
		case joaat("REGION_GUA_MANICATO"):
			return 66;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 67;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 69;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 70;
		case joaat("REGION_HRT_CROP_FARM"):
			return 71;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 72;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 73;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 74;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 75;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 76;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 77;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 78;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 79;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 80;
		case joaat("REGION_HRT_VALENTINE"):
			return 81;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 82;
		case joaat("REGION_ROA_ANNESBURG"):
			return 83;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 68;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 84;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 85;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 86;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 87;
		case joaat("REGION_ROA_DOVERHILL"):
			return 88;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 89;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 90;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 91;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 92;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 93;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 94;
		case joaat("REGION_ROA_TRAPPER"):
			return 95;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 97;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 98;
		case joaat("REGION_ROA_OLD_MAN_JONES"):
			return 96;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 99;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 100;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 101;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 102;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 103;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 104;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 107;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 108;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 109;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 105;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 106;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 110;
		case joaat("REGION_SCM_RHODES"):
			return 111;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 112;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 113;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 114;
		case joaat("REGION_TAL_COCHINAY"):
			return 115;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 116;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 117;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 118;
		case joaat("REGION_TAL_TRAPPER"):
			return 119;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 135;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 136;
		case joaat("REGION_HEN_TRAVELLING_SALESMAN"):
			return 137;
		case -1573562784:
			return 138;
		case joaat("REGION_CHO_ARMADILLO"):
			return 127;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 128;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 129;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 131;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 130;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 132;
		case joaat("REGION_CHO_TRAVELLING_SALESMAN"):
			return 133;
		case 1869665995:
			return 134;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 120;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 121;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 122;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 123;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 124;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 125;
		case joaat("REGION_RIO_TRAVELLING_SALESMAN"):
			return 126;
		case joaat("REGION_CENTRALUNIONRR"):
			return 139;
		default:
			break;
	}
	return -1;
}

bool func_377(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_378(int iParam0, var uParam1)
{
	struct<5> Var0;
	bool bVar5;
	vector3 vVar6;

	if (!func_459(iParam0, &Var0))
	{
		return false;
	}
	if (!func_347(Var0, -81907729, uParam1, 1))
	{
		return false;
	}
	func_346(Var0, -1878208438, &bVar5, 0);
	if (!bVar5)
	{
		return false;
	}
	func_347(Var0, -385659440, &vVar6, 0);
	*uParam1 = { *uParam1 + vVar6 };
	return true;
}

bool func_379(int iParam0, vector3 vParam1)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_557.f_20.f_422[iParam0 /*4*/].f_3))
	{
		return true;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_126()));
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(MISC::GET_HASH_KEY(func_126())))
	{
		return false;
	}
	GRAPHICS::USE_PARTICLE_FX_ASSET(func_126());
	Local_557.f_20.f_422[iParam0 /*4*/].f_3 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_606(), vParam1, 0f, 0f, 0f, 1f, false, true, false, false);
	return true;
}

int func_380()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 723480330, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 1)
	{
		return 1;
	}
	return iVar5;
}

bool func_381(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_119(&Var0) || !func_120(&Var0, -1859092546, iParam0, 0))
	{
		return false;
	}
	if (!func_109(Var0, -2109843125, uParam3, 1))
	{
		return false;
	}
	if (func_347(Var0, -81907729, uParam1, 0))
	{
		*uParam4 = 1;
		func_347(Var0, 861602793, uParam2, 0);
	}
	return true;
}

bool func_382(int iParam0, vector3 vParam1, vector3 vParam4, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15)
{
	char* sVar0;

	sVar0 = func_110(&uParam7);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return true;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_557.f_950[iParam0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_557.f_950[iParam0], false, false)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_557.f_950[iParam0], false))
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_557.f_950[iParam0]))
	{
		Local_557.f_950[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 1, 0, false, false);
		if (bParam15)
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_557.f_950[iParam0], vParam1, vParam4, 2);
		}
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_557.f_950[iParam0], false, false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_557.f_950[iParam0]);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_557.f_950[iParam0], true))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_557.f_950[iParam0]);
	}
	return false;
}

void func_383(int iParam0)
{
	int iVar0;
	char cVar1[32];
	int iVar5;
	bool bVar6;
	struct<9> Var7;

	StringCopy(&cVar1, func_127(iParam0), 32);
	iVar5 = func_607(iParam0);
	bVar6 = func_608(iParam0);
	TASK::OPEN_PATROL_ROUTE(&cVar1);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		func_609(iParam0, iVar0, &Var7);
		TASK::ADD_PATROL_ROUTE_NODE(iVar0, func_610(Var7.f_3), Var7, Var7.f_4, Var7.f_7, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		if (bVar6 && iVar0 >= (iVar5 - 1))
		{
		}
		else
		{
			func_609(iParam0, iVar0, &Var7);
			TASK::ADD_PATROL_ROUTE_LINK(iVar0, Var7.f_8);
		}
		iVar0++;
	}
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_384()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2.f_1 = 11;
	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = Local_557.f_7.f_12;
			if ((Local_15.f_234[iVar1 /*2*/] != 255 && func_163(iVar1)) && !MISC::_0x8F4F050054005C27(&(Local_557.f_1000), iVar1))
			{
				if (((func_43(4) && NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_234[iVar1 /*2*/].f_1)) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(Local_15.f_234[iVar1 /*2*/].f_1)) && GANG::_0x3F59FE6F37869576(Local_15.f_234[iVar1 /*2*/].f_1, PLAYER::PLAYER_ID()))
				{
					func_389(&Var2, joaat("ATTACK"), func_388(255), 1, GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
				}
				MISC::_0xE84AAC1B22A73E99(&(Local_557.f_1000), iVar1);
			}
			func_268(&(Local_557.f_7.f_12), 7);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = Local_557.f_7.f_12;
			if (((Local_15.f_2[iVar1 /*9*/].f_2 == 1583594396 && func_176(iVar1, 67108864)) && func_176(iVar1, 134217728)) && !MISC::_0x8F4F050054005C27(&(Local_557.f_998), iVar1))
			{
				if (((func_43(4) && NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_2[iVar1 /*9*/].f_5)) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(Local_15.f_2[iVar1 /*9*/].f_5)) && GANG::_0x3F59FE6F37869576(Local_15.f_2[iVar1 /*9*/].f_5, PLAYER::PLAYER_ID()))
				{
					func_389(&Var2, joaat("ATTACK"), func_388(255), 1, GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
				}
				MISC::_0xE84AAC1B22A73E99(&(Local_557.f_998), iVar1);
			}
			func_268(&(Local_557.f_7.f_12), 21);
			iVar0++;
		}
	}
}

bool func_385()
{
	if (func_59(131072))
	{
		return false;
	}
	if (func_59(8388608))
	{
		return false;
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 16))
	{
		if (func_93())
		{
			return false;
		}
		if (func_445(Local_557.f_1004) > 2000)
		{
			return false;
		}
	}
	return true;
}

bool func_386()
{
	return func_45();
}

int func_387()
{
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 65536))
	{
		return 2;
	}
	switch (func_148())
	{
		case 2:
			if (!func_45())
			{
				if (Local_15.f_275 == 0)
				{
					return 1;
				}
				if (Local_15.f_275 == Local_557.f_20.f_549)
				{
					return 2;
				}
			}
			else
			{
				if (!func_59(4194304))
				{
					return 2;
				}
				if (Local_15.f_275 == Local_15.f_276)
				{
					return 2;
				}
				if (Local_15.f_275 == 0)
				{
					return 1;
				}
			}
			break;
		case 3:
			if (Local_15.f_275 == 0)
			{
				return 2;
			}
			if (Local_15.f_275 == Local_557.f_20.f_549)
			{
				return 1;
			}
			break;
		case 1:
		case 4:
			if (Local_15.f_275 > 0)
			{
				return 1;
			}
			return 2;
	}
	return 0;
}

int func_388(int iParam0)
{
	int iVar0;

	iVar0 = func_611(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_240(iVar0);
}

void func_389(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	func_612(iParam0, 0, iParam1);
	func_613(iParam0, &uVar0, 0, bParam3, iParam4);
	func_614(iParam0, 0, iParam2);
	func_615(532584148, iParam0, 0, 255, 0, 1);
}

int func_390()
{
	if (!func_59(8))
	{
		return 0;
	}
	return NETWORK::GET_TIME_DIFFERENCE(Local_15.f_272, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_391(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, struct<2> Param13)
{
	float fVar0;
	int iVar1;
	bool bVar2;

	if (iParam10 == 0)
	{
		return;
	}
	fVar0 = func_616(((BUILTIN::TO_FLOAT(iParam12) / 1000f) / 60f), 0.5f, 30f);
	func_617(iParam2, &iVar1, &bVar2, 0, fVar0);
	func_618(iParam2, &bVar2, 0, iParam4, iParam10, iParam11, bParam7);
	func_619(iParam2, 0, iParam5);
	func_613(iParam2, &bVar2, 0, bParam8, iParam9);
	func_620(iParam2, 0, Param13);
	func_614(iParam2, 0, iParam6);
	func_621(1149539403, uParam0, iParam2, 0, 255, 0, 1);
	func_617(iParam3, &iVar1, &bVar2, 1, fVar0);
	func_613(iParam3, &bVar2, 1, bParam8, iParam9);
	func_618(iParam3, &bVar2, 1, iParam4, iParam10, iParam11, bParam7);
	func_614(iParam3, 1, iParam6);
	if (!bVar2 && iVar1 != 0)
	{
		func_621(iVar1, uParam1, iParam3, 0, 255, 0, 0);
	}
}

void func_392(int iParam0)
{
	int iVar0;

	func_622(iParam0);
	if (Local_15.f_2[iParam0 /*9*/].f_2 == 0)
	{
		return;
	}
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		func_623(iParam0, 0);
		return;
	}
	func_624(iParam0, iVar0);
	func_625(iParam0, iVar0);
	func_626(iParam0, iVar0);
	func_627(iParam0);
	func_628(iParam0, iVar0);
	func_629(iParam0, iVar0);
	func_630(iParam0, iVar0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	func_631(iParam0, iVar0);
	switch (Local_15.f_2[iParam0 /*9*/].f_2)
	{
		case joaat("TARGET"):
			func_632(iParam0);
			break;
		case joaat("EXTRA"):
			func_633(iParam0);
			break;
		case joaat("ANIMAL_EXTRA"):
			func_634(iParam0);
			break;
		case joaat("WAVE_PED"):
			func_635(iParam0);
			break;
		default:
			return;
	}
	func_636(iParam0, iVar0);
}

void func_393(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (Local_15.f_2[iParam0 /*9*/].f_2 == 0 || Local_15.f_2[iParam0 /*9*/].f_2 == 1583594396)
	{
		return;
	}
	if (Local_15.f_2[iParam0 /*9*/].f_4 != 16 && Local_15.f_2[iParam0 /*9*/].f_4 != 17)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/]) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_15.f_2[iParam0 /*9*/]))
	{
		return;
	}
	if (!func_52(iParam0, &iVar2, 1, 0))
	{
		return;
	}
	bVar4 = func_637(iParam0, 60000);
	if (func_176(iParam0, 1048576))
	{
		fVar0 = 1.5f;
		if (bVar4)
		{
			fVar1 = 1.25f;
		}
		else
		{
			fVar1 = 1.5f;
		}
	}
	else if (func_176(iParam0, 2097152))
	{
		fVar0 = 2f;
		if (bVar4)
		{
			fVar1 = 1.501f;
		}
		else
		{
			fVar1 = 1.75f;
		}
	}
	else if (func_176(iParam0, 4194304))
	{
		fVar0 = 2f;
		if (bVar4)
		{
			fVar1 = 1.75f;
		}
		else
		{
			fVar1 = 2f;
		}
	}
	else
	{
		fVar0 = 3f;
		if (bVar4)
		{
			fVar1 = 2.5f;
		}
		else
		{
			fVar1 = 3f;
		}
	}
	if (func_176(iParam0, 8388608))
	{
		fVar1 = 1f;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, fVar0);
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		iVar3 = PED::GET_MOUNT(iVar2);
		if (!ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, fVar1);
		}
	}
}

void func_394(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_198[iParam0]))
	{
		return;
	}
	if (func_50(iParam0, 4))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_15.f_198[iParam0]);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return;
		}
		if (func_50(iParam0, 16) && !func_50(iParam0, 32))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, false);
			func_589(iParam0, 32);
		}
	}
}

void func_395(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	var uVar11;

	if (!func_107(iParam0, 1) || func_107(iParam0, 2))
	{
		return;
	}
	if (!func_452(Local_557.f_20.f_533[iParam0 /*4*/].f_1) && BUILTIN::VDIST(Global_35, Local_557.f_20.f_533[iParam0 /*4*/].f_1) > 150f)
	{
		return;
	}
	if (!func_108(iParam0, &Var0))
	{
		return;
	}
	if (!func_117(Var0, -401087351, &iVar5, 0))
	{
		return;
	}
	iVar6 = iVar5;
	if (iVar6 == joaat("BLOOD_POOL"))
	{
		if (!func_348(Var0, 1903857900, &fVar7, 0))
		{
			fVar7 = 0.3f;
		}
		vVar8 = { Local_557.f_20.f_533[iParam0 /*4*/].f_1 };
		vVar8.f_2 = (vVar8.z + 1f);
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar8, &(vVar8.f_2), false);
		GRAPHICS::_ADD_BLOOD_POOL_2(vVar8, 0.5f, fVar7, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.6f), true, NaNf, false);
	}
	else if (iVar6 == joaat("BLOOD_TRAIL"))
	{
		if (!func_107(iParam0, 4))
		{
			return;
		}
		if (!func_109(Var0, -1111171646, &uVar11, 0))
		{
			return;
		}
		if (!func_107(iParam0, 8))
		{
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_110(&uVar11)))
			{
				return;
			}
			func_592(iParam0, 8);
		}
		if (!func_348(Var0, 1903857900, &fVar7, 0))
		{
			fVar7 = 0.3f;
		}
		GRAPHICS::_0xB9C92616929CC25D(func_110(&uVar11), fVar7);
	}
	func_592(iParam0, 2);
}

bool func_396(int iParam0, bool bParam1, bool bParam2)
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

int func_397(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = func_638();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return joaat("REL_NO_RELATIONSHIP");
	}
	return func_639(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(Global_1296859.f_154[iParam0]));
}

bool func_398(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!func_396(iVar0, 0, 1))
	{
		return false;
	}
	if (func_45())
	{
		if ((!func_47(&(Local_300[iVar0 /*8*/]), 4) && !func_47(&(Local_300[iVar0 /*8*/]), 8192)) && !func_47(&(Local_300[iVar0 /*8*/]), 131072))
		{
			return false;
		}
	}
	else if (!func_47(&(Local_300[iVar0 /*8*/]), 4) && !func_47(&(Local_300[iVar0 /*8*/]), 64))
	{
		return false;
	}
	return true;
}

void func_399()
{
	int iVar0;
	int iVar1;

	if (!func_43(4) || !func_418(1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_557.f_961), iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (GANG::_0x81FB74C83C2ED69F(iVar1))
			{
			}
			else
			{
				func_640(iVar1);
			}
		}
		iVar0++;
	}
}

bool func_400()
{
	if (func_641(255) && !func_642(255))
	{
		return false;
	}
	return true;
}

bool func_401()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) || !GANG::_0x3F59FE6F37869576(iVar0, iVar3))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
			{
				return false;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (!func_47(&(Local_300[iVar2 /*8*/]), 1048576))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

bool func_402()
{
	return (func_643() != 0 || func_644(1));
}

bool func_403()
{
	return func_645() != 0;
}

int func_404(int iParam0)
{
	if (func_403())
	{
		return 0;
	}
	if (!func_402())
	{
		return 0;
	}
	if (func_646())
	{
		func_647(2);
	}
	else
	{
		func_647(1);
	}
	func_648(iParam0);
	return 1;
}

int func_405()
{
	int iVar0;
	int iVar1;

	if (!func_59(8))
	{
		return Local_557.f_20.f_2;
	}
	if (func_59(134217728))
	{
		iVar0 = Local_15.f_273;
	}
	else
	{
		iVar0 = Local_15.f_272;
	}
	if (func_59(134217728))
	{
		iVar1 = Local_557.f_20.f_4;
	}
	else
	{
		iVar1 = Local_557.f_20.f_2;
	}
	iVar1 = (iVar1 - NETWORK::GET_TIME_DIFFERENCE(iVar0, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	iVar1 = func_580(iVar1, 0, Local_557.f_20.f_2);
	return iVar1;
}

bool func_406(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 2);
	iVar1 = (iParam1 / 8);
	return (iParam0 <= iVar0 && iParam0 >= iVar1);
}

void func_407(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_649())
	{
		if ((MISC::GET_GAME_TIMER() - func_650()) < 75000)
		{
			return;
		}
	}
	if (!func_73(Param0))
	{
		return;
	}
	iVar1 = func_507(Param0);
	if (!func_508(iVar1))
	{
		return;
	}
	iVar0 = func_509(iVar1);
	if (!func_510(iVar0))
	{
		return;
	}
	iVar2 = func_511(iVar1);
	func_651(iVar2, iVar0, Param0);
	func_553(MISC::GET_GAME_TIMER());
	func_554(1);
}

void func_408()
{
	Global_1139381.f_5560.f_22 = MISC::GET_FRAME_COUNT();
}

bool func_409(int iParam0)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	switch (func_148())
	{
		case 1:
		case 4:
			if (!func_47(&(Local_300[iVar0 /*8*/]), 4))
			{
				return false;
			}
			return true;
		case 2:
			if (!func_47(&(Local_300[iVar0 /*8*/]), 8192) && !func_47(&(Local_300[iVar0 /*8*/]), 131072))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

void func_410(int iParam0)
{
	SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_28345), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28346), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28347), iParam0);
	if (!func_122(iParam0))
	{
		func_281(iParam0, 5, 1, 1, 0, 0);
	}
}

float func_411(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_412(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_2 != joaat("TARGET"))
		{
		}
		else if (!func_431(iVar0, &(Local_300[Local_557.f_1008 /*8*/])) && !func_176(iVar0, 1))
		{
		}
		else if (!func_52(iVar0, &iVar1, 1, 0))
		{
		}
		else if (BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > fParam0)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_413(var uParam0, int iParam1)
{
	func_139(&(uParam0->f_1), iParam1);
}

bool func_414(int iParam0)
{
	return PED::GET_PED_CONFIG_FLAG(iParam0, 161, false);
}

void func_415()
{
	func_652(2);
}

void func_416(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738.f_3948 = MISC::GET_GAME_TIMER();
	Global_1896738.f_3948.f_1 = iParam0;
}

bool func_417(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_653(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_638())
	{
		return func_653(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_653(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_418(bool bParam0)
{
	struct<2> Var0;

	if (bParam0)
	{
		return func_43(16384);
	}
	if (func_77())
	{
		return false;
	}
	Var0 = { func_654() };
	if (!func_73(Var0))
	{
		return false;
	}
	if (!func_74(Local_557.f_2, Var0))
	{
		return false;
	}
	return true;
}

void func_419(int iParam0, int iParam1)
{
	bool bVar0;

	switch (iParam0)
	{
		case 1:
			func_189(&(Local_300[Local_557.f_1008 /*8*/]), 8192);
			func_655(131072);
			Local_557.f_1006 = iParam1;
			break;
		case 2:
			func_189(&(Local_300[Local_557.f_1008 /*8*/]), 4);
			if (func_45())
			{
				func_655(131072);
			}
			else
			{
				func_408();
			}
			func_413(&(Local_300[Local_557.f_1008 /*8*/]), 65536);
			func_656(16);
			break;
		case 3:
			func_189(&(Local_300[Local_557.f_1008 /*8*/]), 64);
			break;
		case 4:
			func_189(&(Local_300[Local_557.f_1008 /*8*/]), 131072);
			break;
	}
	bVar0 = func_206();
	func_657(Local_557.f_1);
	func_658(Local_557.f_1, 1, !bVar0, 0);
	func_659(6);
	func_125(4);
	func_296(joaat("CAN_KILL"), 0);
	func_91();
}

bool func_420(int iParam0, float fParam1)
{
	int iVar0;

	if (Local_15.f_2[iParam0 /*9*/].f_2 != joaat("TARGET"))
	{
		return false;
	}
	if (!func_52(iParam0, &iVar0, 1, 1))
	{
		return false;
	}
	if (func_447())
	{
		return false;
	}
	if (func_661(iVar0, func_660(PLAYER::PLAYER_ID()), 1) > fParam1)
	{
		return false;
	}
	return true;
}

void func_421()
{
	int iVar0;
	int iVar1;

	if (!func_45())
	{
		return;
	}
	if (func_43(256))
	{
		return;
	}
	if (GANG::_0xD6F6ACF4392187FB(Local_15.f_284) && GANG::_0x0F99F6436528A089(Local_15.f_284))
	{
		Local_557.f_584.f_68 = { func_663(func_662(Local_15.f_284, 0, 0)) };
	}
	iVar0 = Local_15.f_276;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_234[iVar1 /*2*/]) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_234[iVar1 /*2*/]))
		{
			Local_557.f_584.f_39[iVar1 /*4*/] = { func_664(PLAYER::GET_PLAYER_NAME(Local_15.f_234[iVar1 /*2*/])) };
		}
		iVar1++;
	}
	func_125(256);
}

void func_422()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_43(4) || !func_418(1))
	{
		return;
	}
	iVar2 = func_665(&iVar0, &iVar1);
	func_666(iVar2, iVar0, iVar1);
}

void func_423()
{
	bool bVar0;

	if (func_667(&bVar0))
	{
		if (bVar0)
		{
			func_668();
			func_669();
		}
		func_672(&(Local_557.f_584.f_76), &(Local_557.f_584.f_91), func_670(), 0, 30000, 0, func_671(), 0, 0, 0, 0);
	}
	else
	{
		func_132();
	}
}

void func_424()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_673(iVar0);
		iVar0++;
	}
	if (func_45())
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			func_674(iVar1);
			iVar1++;
		}
		if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192))
		{
			func_675();
		}
	}
}

void func_425()
{
	int iVar0;

	if (func_676())
	{
		func_677();
	}
	else
	{
		func_285(&(Local_557.f_584.f_23));
	}
	if (func_678())
	{
		func_679();
	}
	else if (func_680())
	{
		func_681();
	}
	else
	{
		func_285(&(Local_557.f_584.f_22));
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_551)
	{
		if (func_682(iVar0))
		{
			func_683(iVar0);
		}
		else
		{
			func_285(&(Local_557.f_584.f_24[iVar0]));
		}
		iVar0++;
	}
	func_684();
}

void func_426()
{
	bool bVar0;

	if (!func_418(1) && !func_47(&(Local_300[Local_557.f_1008 /*8*/]), 65536))
	{
		return;
	}
	bVar0 = Local_557.f_20.f_549 <= true;
	if (func_45())
	{
		bVar0 = Local_15.f_276 <= true;
	}
	if (func_685())
	{
		func_687(func_686(bVar0));
		func_185(32);
	}
	else if (func_688())
	{
		func_689(func_387());
		func_185(16);
	}
}

void func_427()
{
	if (((!func_418(1) || !func_690(32)) || func_690(16)) || !func_43(1))
	{
		func_134();
		return;
	}
	if (func_691())
	{
		func_692(14, -1);
	}
	else if (func_693())
	{
		if (func_45())
		{
			func_692(7, -1);
		}
		else if (Local_557.f_20 == joaat("ASSASSINATION_TRACKING"))
		{
			if (func_694())
			{
				func_692(7, -1);
			}
			else
			{
				func_692(8, -1);
			}
		}
		else if (Local_15.f_275 > 1)
		{
			func_692(7, -1);
		}
		else
		{
			func_692(8, -1);
		}
	}
	else if (func_695())
	{
		if (Local_15.f_275 > 1)
		{
			func_692(1, -1);
		}
		else
		{
			func_692(2, -1);
		}
	}
	else if (func_696())
	{
		func_692(5, -1);
	}
	else if (func_697())
	{
		func_692(11, -1);
	}
	else if (func_698())
	{
		if (func_258() == joaat("PLAYER") || Local_15.f_275 == 1)
		{
			func_692(13, -1);
		}
		else
		{
			func_692(12, -1);
		}
	}
	else
	{
		func_134();
	}
}

void func_428(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<5> Var2;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	int iVar17;
	int iVar18;

	if (!MISC::_0x80E9C316EF84DD81(&(Local_557.f_921[iParam0 /*4*/].f_1)))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_557.f_921[iParam0 /*4*/]))
	{
		func_699(iParam0);
		return;
	}
	if ((((((func_700(Local_557.f_921[iParam0 /*4*/].f_3, 1) && !func_700(Local_557.f_921[iParam0 /*4*/].f_3, 2)) && func_585(iParam0, &Var2)) && func_345(Var2, -597454543, &iVar1, 0)) && iVar1 >= 0) && iVar1 < 21) && func_52(iVar1, &uVar0, 1, 0))
	{
		PED::_0x7C00CFC48A782DC0(Local_557.f_921[iParam0 /*4*/], uVar0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 0);
		func_701(&(Local_557.f_921[iParam0 /*4*/].f_3), 2);
		func_375(&Var2);
	}
	vVar7 = { VOLUME::_GET_VOLUME_COORDS(Local_557.f_921[iParam0 /*4*/]) };
	vVar13 = { VOLUME::_GET_VOLUME_SCALE(Local_557.f_921[iParam0 /*4*/]) };
	fVar16 = vVar13.x;
	if (func_411(Global_35, vVar7) < fVar16)
	{
		func_699(iParam0);
		return;
	}
	iVar18 = 0;
	while (iVar18 < 21)
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_557.f_921[iParam0 /*4*/].f_1), iVar18))
		{
		}
		else if (func_52(iVar18, &iVar17, 1, 0))
		{
			vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar17, false, false) };
			if ((((func_411(vVar10, vVar7) < fVar16 && !func_176(iVar18, 1)) && Local_15.f_2[iVar18 /*9*/].f_2 != 1583594396) && Local_15.f_2[iVar18 /*9*/].f_2 != 0) && !func_431(iVar18, &(Local_300[Local_557.f_1008 /*8*/])))
			{
			}
			else
			{
				if ((((func_700(Local_557.f_921[iParam0 /*4*/].f_3, 2) && func_585(iParam0, &Var2)) && func_345(Var2, -597454543, &iVar1, 0)) && iVar1 == iVar18) && func_52(iVar1, &uVar0, 0, 1))
				{
					PED::_0x19C975B81BE53C28(Local_557.f_921[iParam0 /*4*/], uVar0);
					func_702(&(Local_557.f_921[iParam0 /*4*/].f_3), 2);
				}
				func_295(iVar18, 262144);
				MISC::_0xB909149F2BB5F6DA(&(Local_557.f_921[iParam0 /*4*/].f_1), iVar18);
			}
			iVar18++;
			if (!MISC::_0x80E9C316EF84DD81(&(Local_557.f_921[iParam0 /*4*/].f_1)))
			{
				func_699(iParam0);
			}
		}
	}
}

bool func_429(int iParam0)
{
	if (Local_15.f_2[iParam0 /*9*/].f_2 != joaat("TARGET") && func_176(iParam0, 4096))
	{
		return false;
	}
	return true;
}

void func_430(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	if (MISC::IS_BIT_SET(uParam1->f_2[iVar0], iVar1))
	{
		return;
	}
	MISC::SET_BIT(&(uParam1->f_2[iVar0]), iVar1);
	func_285(&(Local_557.f_584[iParam0]));
}

bool func_431(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(uParam1->f_2[iVar0], iVar1);
}

bool func_432(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_661(iParam0, Global_35, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_433(var uParam0)
{
	if (!func_47(uParam0, 8192))
	{
		return false;
	}
	if (func_47(uParam0, 16384))
	{
		return false;
	}
	return true;
}

bool func_434()
{
	return func_703(Global_1940258, 8192);
}

void func_435(bool bParam0, bool bParam1)
{
	if (func_566(255) == 4)
	{
		return;
	}
	if (func_452(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_143(0);
	}
	else
	{
		if (bParam1)
		{
			func_704(0, 0, 0, 1);
		}
		func_141(0);
		func_705(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = 0f;
		Global_1102219.f_3849.f_5 = 1;
		Global_1102219.f_3849.f_16 = 0;
		Global_1102219.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_17 = { Global_1901947.f_50.f_1, Global_1901947.f_50.f_1, Global_1901947.f_50.f_1 };
		Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_706(&(Global_1102219.f_3888));
		Global_1102219.f_3888.f_6 = { Global_1102219.f_3849.f_17.f_6 };
		Global_1102219.f_3888 = Global_1102219.f_3849;
		Global_1102219.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219.f_26.f_3341 = 0;
			Global_1102219.f_26.f_3342 = 0;
		}
	}
	func_707(Global_1102219.f_3849, 36);
	func_708(Global_1102219.f_3888, 36);
}

bool func_436(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (!func_47(uParam0, 4))
	{
		return false;
	}
	if (func_45())
	{
		return false;
	}
	fVar1 = 150f;
	iVar2 = 0;
	while (iVar2 < 21)
	{
		if (Local_15.f_2[iVar2 /*9*/].f_2 != joaat("TARGET"))
		{
		}
		else if (Local_557.f_20 == joaat("ASSASSINATION_TRACKING") && !func_431(iVar2, &(Local_300[Local_557.f_1008 /*8*/])))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iVar2 /*9*/]))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(Local_15.f_2[iVar2 /*9*/]);
			fVar0 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar3, false, false));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				*uParam1 = iVar3;
			}
		}
		iVar2++;
	}
	if (fVar1 == 150f)
	{
		return false;
	}
	return true;
}

void func_437(bool bParam0)
{
	if (bParam0)
	{
		if (func_43(2))
		{
			return;
		}
		if (func_438(255))
		{
			return;
		}
		func_136(1);
		func_125(2);
	}
	else
	{
		if (!func_43(2))
		{
			return;
		}
		func_136(0);
		func_44(2);
	}
}

bool func_438(int iParam0)
{
	return func_417(49, iParam0);
}

bool func_439(int iParam0)
{
	return func_417(48, iParam0);
}

void func_440(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	int iVar15;
	int iVar16;

	if (!func_43(2))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	fVar2 = 150f;
	iVar3 = 0;
	while (iVar3 < 21)
	{
		if (Local_15.f_2[iVar3 /*9*/].f_2 != joaat("TARGET"))
		{
		}
		else if (Local_557.f_20 == joaat("ASSASSINATION_TRACKING") && !func_431(iVar3, &(Local_300[Local_557.f_1008 /*8*/])))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iVar3 /*9*/]))
		{
		}
		else
		{
			iVar4 = NETWORK::NET_TO_PED(Local_15.f_2[iVar3 /*9*/]);
			fVar1 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar4, false, false));
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar0 = iVar4;
			}
		}
		iVar3++;
	}
	if (fVar2 == 150f)
	{
		return;
	}
	fVar5 = 95f;
	fVar6 = 150f;
	vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	if (INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vVar7))
	{
		func_709(&vVar7, 200f);
	}
	else
	{
		func_709(&vVar7, 1088421888 /* Float: 7f */);
	}
	uParam0->f_17.f_6 = { vVar7 };
	uParam0->f_17 = { fVar6, fVar6, 25f };
	uParam0->f_17.f_9 = joaat("VOLSPHERE");
	uParam0->f_6.f_6 = { vVar7 };
	uParam0->f_6 = { fVar5, fVar5, 25f };
	uParam0->f_6.f_9 = joaat("VOLSPHERE");
	uParam0->f_4 = func_710(iVar0);
	uParam0->f_5 = 3;
	uParam1->f_6 = { vVar7 };
	uParam1->f_5 = 1;
	*uParam1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
	iVar10 = func_711();
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 < iVar10)
		{
			if (!func_712(iVar11, &vVar12))
			{
			}
			else if (func_452(vVar12))
			{
			}
			else
			{
				NETWORK::_0xFD1AC0B3858F224C(vVar12, func_713(vVar12, vVar7));
			}
			iVar11++;
		}
	}
	iVar15 = func_363();
	if (iVar15 > 0)
	{
		iVar16 = 0;
		while (iVar16 < iVar15)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(Local_557.f_975[iVar16]))
			{
			}
			else
			{
				NETWORK::_0x405DDEFB1F531B18(Local_557.f_975[iVar16], 0, 0, 0);
			}
			iVar16++;
		}
	}
}

int func_441(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_439(255))
	{
		if ((Param0.f_17.f_9 != joaat("VOLBOX") && Param0.f_17.f_9 != joaat("VOLSPHERE")) && Param0.f_17.f_9 != joaat("VOLCYLINDER"))
		{
			Param0.f_17.f_9 = joaat("VOLSPHERE");
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != joaat("VOLBOX") && Param0.f_6.f_9 != joaat("VOLSPHERE")) && Param0.f_6.f_9 != joaat("VOLCYLINDER"))
			{
				Param0.f_6.f_9 = joaat("VOLSPHERE");
			}
		}
		func_705(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = { Param0 };
		func_706(&(Global_1102219.f_3888));
		Global_1102219.f_3888 = { Param30 };
		Global_1102219.f_3919 = iParam39;
		Global_1102219.f_3920 = iParam40;
		Global_1102219.f_3921 = iParam41;
		func_707(Global_1102219.f_3849, 36);
		func_708(Global_1102219.f_3888, 36);
		func_143(48);
		return 1;
	}
	return 0;
}

bool func_442(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return true;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return true;
	}
	if (iVar0 > 256)
	{
		return true;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(uParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, 0, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_443(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	vector3 vVar5;
	int iVar8;

	if (!func_121(&Var0, iParam0, iParam1))
	{
		return true;
	}
	if (!func_347(Var0, -81907729, &vVar5, 1))
	{
		return true;
	}
	if (BUILTIN::VDIST(Global_35, vVar5) > 200f)
	{
		return true;
	}
	if (!NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vVar5, 1f, 1120403456 /* Float: 100f */))
	{
		return true;
	}
	if (!func_30(Local_557.f_957))
	{
		Local_557.f_957 = GRAPHICS::CREATE_TRACKED_POINT();
		if (func_30(Local_557.f_957))
		{
			GRAPHICS::SET_TRACKED_POINT_INFO(Local_557.f_957, vVar5 + Vector(0.5f, 0f, 0f), 0.5f);
		}
		return false;
	}
	iVar8 = GRAPHICS::_0xDFE332A5DA6FE7C9(Local_557.f_957);
	if (iVar8 == -1)
	{
		return false;
	}
	*bParam2 = GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_557.f_957);
	return true;
}

bool func_444(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return true;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return false;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return true;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_445(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_446(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1893587.f_2;
	iVar1 = Local_557.f_952[iParam0];
	if (!func_377(iVar1))
	{
		return;
	}
	if (func_377(iVar0) && iVar1 == iVar0)
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_557.f_952.f_2), iParam0))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1887339[iVar1 /*36*/].f_10, false))
			{
				return;
			}
			if (!func_714(iParam0, iVar1))
			{
				return;
			}
			MISC::_0xE84AAC1B22A73E99(&(Local_557.f_952.f_2), iParam0);
			Local_557.f_952.f_4 = 0;
		}
	}
	else if (MISC::_0x8F4F050054005C27(&(Local_557.f_952.f_2), iParam0))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1887339[iVar1 /*36*/].f_10, false))
		{
			return;
		}
		MISC::_0xB909149F2BB5F6DA(&(Local_557.f_952.f_2), iParam0);
	}
}

bool func_447()
{
	return func_417(1, 255);
}

void func_448(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_557.f_980[iParam0]))
	{
		return;
	}
	if (func_715(iParam0))
	{
		return;
	}
	if (func_574(iParam0))
	{
		return;
	}
	if (!func_716(iParam0))
	{
		return;
	}
	func_717(iParam0);
	func_174(10, iParam0, func_173(0, 8), -1);
}

void func_449(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	*bParam1 = 0;
	*bParam2 = 0;
	*bParam3 = 0;
	*uParam0 = 0;
	while (*uParam0 < 21)
	{
		if (Local_15.f_2[*uParam0 /*9*/].f_2 == 1583594396)
		{
		}
		else if (!func_718(*uParam0, 255))
		{
		}
		else if (func_176(*uParam0, 8))
		{
			*bParam2 = 1;
		}
		else if (func_176(*uParam0, 1024))
		{
			*bParam3 = 1;
		}
		else
		{
			*bParam1 = 1;
		}
		*uParam0++;
	}
}

Vector3 func_450(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_719(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_451(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_453(iParam0, &vVar3, uParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -134912699;
	DATAFILE::_DATAFILE_GET_VECTOR(&vVar0, &vVar3);
	return vVar0;
}

bool func_452(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_453(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_158(iParam0, uParam1))
	{
		return false;
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
			Var2.f_3 = uParam2;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
			{
			}
			else
			{
				*uParam1 = { Var2 };
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

var func_454(int iParam0)
{
	return Global_1297717[iParam0 /*4*/].f_1;
}

var func_455(int iParam0)
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

void func_456(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 26, &uParam1);
}

void func_457(var uParam0)
{
	if (Global_1051252.f_16[0] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[0]))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 31, 26, Global_1051252.f_16[0]);
}

void func_458(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	MISC::SET_BIT(&(Local_15.f_251[iVar0]), iVar1);
}

bool func_459(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -422348800;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_460(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.05f;
			break;
		case 2:
			fVar0 = 0.05f;
			break;
	}
	bVar2 = fVar1 < fVar0;
	return bVar2;
}

void func_461(int iParam0, int iParam1)
{
	func_266(&(Local_15.f_2[iParam0 /*9*/].f_3), iParam1);
}

int func_462()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1976409839, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 2)
	{
		return 2;
	}
	return iVar5;
}

bool func_463(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	int iVar8;

	if (OBJECT::DOES_PICKUP_EXIST(Local_15.f_217[iParam0 /*2*/]))
	{
		return true;
	}
	if (!func_720(iParam0, &iVar0, &vVar1, &bVar7, &vVar4))
	{
		return false;
	}
	func_721(iParam0, &iVar8);
	if (bVar7)
	{
		Local_15.f_217[iParam0 /*2*/] = OBJECT::CREATE_PICKUP_ROTATE(iVar0, vVar1, vVar4, iVar8, -1, 2, true, 0, 0, 0f, 0);
	}
	else
	{
		Local_15.f_217[iParam0 /*2*/] = OBJECT::CREATE_PICKUP(iVar0, vVar1, iVar8, -1, true, 0, 0, 0f, 0);
	}
	if (!OBJECT::DOES_PICKUP_EXIST(Local_15.f_217[iParam0 /*2*/]))
	{
		return false;
	}
	func_576(iParam0, 1);
	return true;
}

bool func_464(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (Local_557.f_20.f_422[iParam0 /*4*/] == 0)
	{
		return true;
	}
	if (!func_459(iParam0, &Var0))
	{
		return true;
	}
	if (!func_583(Var0))
	{
		return true;
	}
	if (((func_247(iParam0, &iVar5) && iVar5 >= 0) && iVar5 < 21) && !func_248(iVar5))
	{
		return true;
	}
	vVar6 = { func_722(iParam0) };
	fVar9 = func_723(iParam0);
	vVar10 = { func_724(iParam0) };
	if (func_452(vVar6))
	{
		return true;
	}
	if (func_50(iParam0, 2))
	{
		iVar13 = Local_557.f_20.f_422[iParam0 /*4*/];
		if (PROPSET::_DOES_PROPSET_OF_TYPE_EXIST_NEAR_COORDS(Local_557.f_20.f_422[iParam0 /*4*/], vVar6))
		{
			MISC::CLEAR_AREA(vVar6, 0.25f, 2097152);
			return false;
		}
		iVar14 = func_725(iParam0);
		iVar15 = PROPSET::_CREATE_PROPSET_2(iVar13, vVar6, iVar14, fVar9, 1200f, true, true);
		Local_15.f_198[iParam0] = NETWORK::_PROPSET_TO_NET(iVar15);
	}
	else if (func_50(iParam0, 4))
	{
		iVar16 = Local_557.f_20.f_422[iParam0 /*4*/];
		if (!STREAMING::IS_MODEL_VALID(iVar16))
		{
			return true;
		}
		if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false) <= NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false))
		{
			return true;
		}
		if (!func_726(&(Local_15.f_198[iParam0]), iVar16, vVar6, fVar9, 1, func_50(iParam0, 8), 0, 0))
		{
			return false;
		}
		iVar17 = NETWORK::NET_TO_VEH(Local_15.f_198[iParam0]);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar17))
		{
			return false;
		}
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar16))
		{
			if (func_50(iParam0, 64))
			{
				VEHICLE::SET_BOAT_ANCHOR(iVar17, true);
			}
			else
			{
				VEHICLE::_0x6B53F4B811E583D2(iVar17, 0);
				VEHICLE::SET_BOAT_ANCHOR(iVar17, false);
			}
			VEHICLE::_SET_BOAT_ANCHOR_BUOYANCY_COEFFICIENT(iVar17, 200f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar17, 0f);
			VEHICLE::_0x1098CDA477890165(iVar17, 1);
			VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(iVar17, 0, 1);
		}
	}
	else if (func_50(iParam0, 128))
	{
		iVar18 = Local_557.f_20.f_422[iParam0 /*4*/];
		if (!STREAMING::IS_MODEL_VALID(iVar18))
		{
			return true;
		}
		if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) <= NETWORK::GET_NUM_CREATED_MISSION_PEDS(false))
		{
			return true;
		}
		if (!func_727(&(Local_15.f_198[iParam0]), iVar18, vVar6, fVar9, 1, 0, 1, 1, 1))
		{
			return false;
		}
		iVar19 = NETWORK::NET_TO_PED(Local_15.f_198[iParam0]);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar19))
		{
			return false;
		}
		func_728(iVar19, 1, 1);
	}
	else
	{
		iVar20 = Local_557.f_20.f_422[iParam0 /*4*/];
		if (!STREAMING::IS_MODEL_VALID(iVar20))
		{
			return true;
		}
		if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false) <= NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(false))
		{
			return true;
		}
		if (!func_729(&(Local_15.f_198[iParam0]), iVar20, vVar6, 1, 0))
		{
			return false;
		}
		iVar21 = NETWORK::NET_TO_OBJ(Local_15.f_198[iParam0]);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
		{
			return false;
		}
		if (!func_452(vVar10))
		{
			ENTITY::SET_ENTITY_ROTATION(iVar21, vVar10, 2, true);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(iVar21, fVar9);
		}
		if (func_50(iParam0, 1))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iVar21, 0);
		}
	}
	return true;
}

bool func_465(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	struct<5> Var12;
	int iVar17;

	if (Local_557.f_20.f_22[iParam0 /*19*/] == 0)
	{
		return true;
	}
	if (func_730())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/]))
		{
			iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
			PED::DELETE_PED(&iVar0);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1))
		{
			iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1);
			PED::DELETE_PED(&iVar0);
		}
		return true;
	}
	if ((Local_557.f_20.f_22[iParam0 /*19*/] == joaat("POSSIBLE_TARGET") && !func_248(iParam0)) && func_51(iParam0, 8))
	{
		return true;
	}
	if (((((((func_51(iParam0, 64) && func_250(iParam0, &iVar1)) && Local_557.f_20.f_22[iParam0 /*19*/] != joaat("TARGET")) && iVar1 >= 0) && iVar1 < 21) && Local_557.f_20.f_22[iVar1 /*19*/] == joaat("POSSIBLE_TARGET")) && !func_248(iVar1)) && func_51(iVar1, 8))
	{
		return true;
	}
	iVar2 = func_21(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar2))
	{
		return true;
	}
	if (func_452(Local_557.f_20.f_22[iParam0 /*19*/].f_3))
	{
		return true;
	}
	bVar5 = func_731(iParam0, &iVar3, &iVar4);
	if (bVar5)
	{
		if (!func_50(iVar3, 4) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_198[iVar3]))
		{
			bVar5 = false;
		}
	}
	bVar6 = func_214(iParam0);
	bVar9 = (!func_732(iParam0, &uVar7) && !func_733(iParam0, &uVar8));
	bVar10 = !func_734(iParam0);
	if (func_51(iParam0, 65536))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1))
		{
			if (!func_116(iParam0, &Var12) || !func_735(Var12, 1464077990, &iVar11))
			{
				iVar11 = iVar2;
			}
			if (func_727(&(Local_15.f_2[iParam0 /*9*/].f_1), iVar11, func_736(iParam0), func_737(iParam0), 1, 0, 1, 1, 1))
			{
				iVar17 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1);
				ENTITY::FREEZE_ENTITY_POSITION(iVar17, true);
				ENTITY::SET_ENTITY_VISIBLE(iVar17, false);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar17, true);
				ENTITY::SET_ENTITY_COLLISION(iVar17, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar17, true);
				PED::SET_PED_CONFIG_FLAG(iVar17, 168, false);
			}
			return false;
		}
		bVar6 = false;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1))
	{
		NETWORK::_0x7182EDDA1EE7DB5A(Local_15.f_2[iParam0 /*9*/].f_1);
	}
	if (bVar5)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/]) && !func_738(&(Local_15.f_2[iParam0 /*9*/]), Local_15.f_198[iVar3], iVar2, iVar4, 1, bVar10, 1))
		{
			return false;
		}
	}
	else if (bVar6 && !func_51(iParam0, 16))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1))
		{
			if (!func_727(&(Local_15.f_2[iParam0 /*9*/].f_1), func_25(iParam0), Local_557.f_20.f_22[iParam0 /*19*/].f_3, Local_557.f_20.f_22[iParam0 /*19*/].f_9, 1, 0, 1, 1, 1))
			{
				return false;
			}
			ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1), 0);
			NETWORK::_0x7182EDDA1EE7DB5A(Local_15.f_2[iParam0 /*9*/].f_1);
			return false;
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/]) && !func_739(&(Local_15.f_2[iParam0 /*9*/]), Local_15.f_2[iParam0 /*9*/].f_1, iVar2, -1, 1, bVar10, 1, 0))
		{
			return false;
		}
	}
	else
	{
		if ((func_51(iParam0, 16) && bVar6) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1))
		{
			if (!func_727(&(Local_15.f_2[iParam0 /*9*/].f_1), func_25(iParam0), func_736(iParam0), func_737(iParam0), 1, 0, 1, 1, 1))
			{
				return false;
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1))
			{
				NETWORK::_0x7182EDDA1EE7DB5A(Local_15.f_2[iParam0 /*9*/].f_1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1), true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1), 288, false);
				ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1), 0);
			}
			return false;
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/]) && !func_727(&(Local_15.f_2[iParam0 /*9*/]), iVar2, Local_557.f_20.f_22[iParam0 /*19*/].f_3, Local_557.f_20.f_22[iParam0 /*19*/].f_9, 1, 0, bVar9, bVar10, 1))
		{
			return false;
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/]))
	{
		NETWORK::_0x7182EDDA1EE7DB5A(Local_15.f_2[iParam0 /*9*/]);
		if ((bVar6 && !bVar9) && !PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/])))
		{
			return false;
		}
		if ((bVar6 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1)) && !PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1)))
		{
			return false;
		}
	}
	func_740(iParam0);
	return true;
}

void func_466()
{
	Local_557.f_1014 = 0;
}

int func_467()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1334467051, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 5)
	{
		return 5;
	}
	return iVar5;
}

bool func_468(int iParam0)
{
	var uVar0;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	struct<5> Var9;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;

	if (!func_119(&uVar0) || !func_120(&uVar0, -867387895, 0, 0))
	{
		return true;
	}
	iVar5 = func_741(iParam0);
	if (iVar5 == 0)
	{
		return true;
	}
	if (PED::DOES_GROUP_EXIST(Local_15.f_192[iParam0]))
	{
		return true;
	}
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		func_375(&Var9);
		if (!func_119(&Var9) || !func_120(&Var9, -429389572, iParam0, iVar6))
		{
		}
		else if (!func_345(Var9, -1296487272, &iVar7, 0))
		{
		}
		else if (iVar7 < 0 || iVar7 >= 21)
		{
		}
		else if (Local_557.f_20.f_22[iVar7 /*19*/] == 0)
		{
		}
		else
		{
			bVar8 = true;
		}
		iVar6++;
	}
	if (!bVar8)
	{
		return true;
	}
	iVar14 = func_742(iParam0);
	iVar15 = func_743(iParam0);
	Local_15.f_192[iParam0] = PED::CREATE_GROUP(iVar14);
	PED::SET_GROUP_FORMATION(Local_15.f_192[iParam0], iVar15);
	if (iVar15 == 5)
	{
		PED::_0x478F6B9920446CE2(Local_15.f_192[iParam0], 0);
	}
	else
	{
		PED::_0x478F6B9920446CE2(Local_15.f_192[iParam0], 1);
	}
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		func_375(&Var9);
		if (!func_119(&Var9) || !func_120(&Var9, -429389572, iParam0, iVar6))
		{
		}
		else if (!func_345(Var9, -1296487272, &iVar7, 0))
		{
		}
		else if (iVar7 < 0 || iVar7 >= 21)
		{
		}
		else if (!func_52(iVar7, &iVar17, 1, 0))
		{
		}
		else
		{
			if (!bVar16)
			{
				PED::SET_PED_AS_GROUP_LEADER(iVar17, Local_15.f_192[iParam0], false);
				bVar16 = true;
			}
			else
			{
				if (iVar15 == 5 && func_347(Var9, -655039491, &vVar19, 1))
				{
					PED::ADD_CUSTOM_FORMATION_LOCATION(Local_15.f_192[iParam0], vVar19, (iVar18 - 1));
				}
				PED::SET_PED_AS_GROUP_MEMBER(iVar17, Local_15.f_192[iParam0]);
				PED::_0x0E9E95FDEDCC9D35(iVar17, (iVar18 - 1), 0);
			}
			iVar18++;
		}
		iVar6++;
	}
	return true;
}

void func_469(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;

	*iParam1 = 0;
	*iParam2 = -1;
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_283))
	{
		return;
	}
	if (GANG::_0x901E0DC25080C8B9(iVar0) == Local_15.f_282)
	{
		return;
	}
	if (iVar0 == Local_15.f_283)
	{
		return;
	}
	if (func_744(iVar0))
	{
		return;
	}
	*iParam2 = 0;
	fVar1 = 1800f;
	iVar2 = 0;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_283))
	{
	}
	else
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_660(iVar0), func_660(Local_15.f_283), false);
		if (fVar1 < 1800f && fVar1 > 50f)
		{
			iVar2 = BUILTIN::ROUND(((500f / 1800f) * (1800f - fVar1)));
			if (iVar2 < 0)
			{
				iVar2 = 0;
			}
		}
	}
	*iParam1 = (*iParam1 + iVar2);
	if (fVar1 < 1800f && fVar1 > 50f)
	{
		*iParam2 += 4;
	}
	if (!func_745(65536, iParam0))
	{
		*iParam2 += 2;
	}
	if (func_746(iVar0, 0) >= 3)
	{
		*iParam2++;
	}
	if (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(iVar0)) && GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iVar0)) > 1)
	{
		*iParam1 += 150;
	}
	*iParam1 = (*iParam1 + (110 * func_747(iVar0)));
}

void func_470(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	*iParam1 = 0;
	*iParam2 = -1;
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_283))
	{
		return;
	}
	if (GANG::_0xD6F6ACF4392187FB(Local_15.f_282) && GANG::_0x901E0DC25080C8B9(iVar0) == Local_15.f_282)
	{
		return;
	}
	if (iVar0 == Local_15.f_283)
	{
		return;
	}
	if (!GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(iVar0)))
	{
		return;
	}
	if (!GANG::_0x424B17A7DC5C90BC(iVar0))
	{
		return;
	}
	if (GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iVar0)) < 2)
	{
		return;
	}
	if (func_748(iVar0, func_173(0, 8)))
	{
		return;
	}
	*iParam2 = 0;
	fVar1 = 1800f;
	iVar2 = 0;
	fVar6 = 50f;
	fVar7 = 1800f;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_283))
	{
	}
	else
	{
		iVar4 = 0;
		while (iVar4 < 32)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
			}
			else if (iVar0 != iVar3 && !GANG::_0x3F59FE6F37869576(iVar0, iVar3))
			{
			}
			else
			{
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_660(iVar0), func_660(Local_15.f_283), false);
				if (fVar5 > fVar6)
				{
					fVar6 = fVar5;
				}
				if (fVar5 < fVar7)
				{
					fVar7 = fVar5;
				}
			}
			iVar4++;
		}
		fVar1 = ((fVar7 + fVar6) / 2f);
		if (fVar6 < 1800f && fVar7 > 50f)
		{
			iVar2 = BUILTIN::ROUND(((500f / 1800f) * (1800f - fVar1)));
			if (iVar2 < 0)
			{
				iVar2 = 0;
			}
		}
	}
	*iParam1 = (*iParam1 + iVar2);
	if (fVar6 < 1800f && fVar7 > 50f)
	{
		*iParam2 += 4;
	}
	if (!func_745(65536, iParam0))
	{
		*iParam2 += 2;
	}
	if (func_749(GANG::_0x901E0DC25080C8B9(iVar0)) >= 3)
	{
		*iParam2++;
	}
	*iParam1 = (*iParam1 + (100 * GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iVar0))));
	*iParam1 = (*iParam1 + (110 * func_750(GANG::_0x901E0DC25080C8B9(iVar0))));
}

void func_471()
{
	if (!func_59(8) && !func_472(2097152))
	{
		return;
	}
	func_473(0);
	if (func_751())
	{
		func_752();
	}
	if (!func_59(16) && func_753())
	{
		func_100(16);
	}
}

bool func_472(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_47(&(Local_300[iVar0 /*8*/]), iParam0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1)))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_473(bool bParam0)
{
	if (func_59(8) && !bParam0)
	{
		return;
	}
	Local_15.f_272 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_100(8);
}

void func_474(int iParam0, bool bParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;

	if (MISC::_0x8F4F050054005C27(&(Local_15.f_222.f_10), iParam0))
	{
		return;
	}
	iVar0 = func_580(func_26(iParam0), 0, 10);
	if (iVar0 == 0)
	{
		return;
	}
	if (!func_754(&Var1, iParam0))
	{
		return;
	}
	if (!func_345(Var1, 110383052, &iVar6, 0))
	{
		iVar6 = -1;
	}
	if (!func_345(Var1, -1031804957, &iVar7, 0))
	{
		iVar7 = 0;
	}
	if (Local_15.f_222.f_3[iParam0] == 0)
	{
		if (!func_755(iVar6))
		{
			return;
		}
		Local_15.f_222.f_3[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return;
	}
	else if (Local_15.f_222 == -1 && Local_15.f_222.f_1 == -1)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(Local_15.f_222.f_3[iParam0], NETWORK::GET_NETWORK_TIME_ACCURATE()) < iVar7)
		{
			return;
		}
		iVar8 = func_756();
		if (!func_345(Var1, 635104585, &iVar9, 0))
		{
			iVar9 = 20;
		}
		if (iVar8 > iVar9)
		{
			return;
		}
		Local_15.f_222 = iParam0;
		Local_15.f_222.f_1 = 0;
		*bParam1 = 1;
		return;
	}
	*bParam1 = 1;
	iVar8 = func_756();
	if (Local_15.f_222.f_1 >= iVar0)
	{
		func_757(268435456);
		Local_15.f_222 = -1;
		Local_15.f_222.f_1 = -1;
		MISC::_0xE84AAC1B22A73E99(&(Local_15.f_222.f_10), iParam0);
		*bParam1 = 0;
	}
	else if (!func_59(268435456))
	{
		if (func_472(262144))
		{
			return;
		}
		func_100(268435456);
		return;
	}
	if (!func_758(262144))
	{
		return;
	}
	bVar10 = func_472(524288);
	if (!bVar10)
	{
		if (!func_759(Local_15.f_222, Local_15.f_222.f_1))
		{
			return;
		}
	}
	func_757(268435456);
	Local_15.f_222.f_1++;
	Local_15.f_222.f_2 = -1;
}

void func_475(int iParam0)
{
	if (Local_15.f_234[iParam0 /*2*/] == 255)
	{
		return;
	}
	if (!func_163(iParam0) && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_234[iParam0 /*2*/]))
	{
		func_760(iParam0);
	}
}

void func_476(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Local_15.f_2[iParam0 /*9*/].f_2 != 1583594396)
	{
		return;
	}
	if (!func_176(iParam0, 67108864) || func_176(iParam0, 134217728))
	{
		return;
	}
	if (!func_52(iParam0, &iVar0, 0, 1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (func_445(PED::GET_PED_TIME_OF_DEATH(iVar0)) < 1200)
	{
		return;
	}
	iVar3 = 255;
	if (func_52(iParam0, &iVar0, 0, 1))
	{
		iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
		if (PED::IS_PED_A_PLAYER(iVar2))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
		}
	}
	func_325(iParam0, iVar3);
}

void func_477(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;

	if (func_176(iParam0, 1))
	{
		if (((Local_15.f_2[iParam0 /*9*/].f_2 != 1583594396 && !func_176(iParam0, 524288)) && func_479(iParam0, 1, 0)) && func_637(iParam0, 1200))
		{
			func_461(iParam0, 524288);
		}
		return;
	}
	if (!func_52(iParam0, &iVar0, 0, 0))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if ((PED::GET_PED_CONFIG_FLAG(iVar0, 9, false) || PED::GET_PED_CONFIG_FLAG(iVar0, 11, false)) || PED::GET_PED_CONFIG_FLAG(iVar0, 10, false))
		{
			return;
		}
		iVar1 = PED::GET_PED_CAUSE_OF_DEATH(iVar0);
		if (WEAPON::IS_WEAPON_VALID(iVar1))
		{
			if (WEAPON::_0x5809DBCA0A37C82B(iVar1) && WEAPON::_0xEA522F991E120D45(iVar1))
			{
				return;
			}
			if (func_761(iVar1))
			{
				return;
			}
		}
		func_572(iParam0, 8);
		return;
	}
	if (Local_557.f_20.f_22[iParam0 /*19*/].f_10 == joaat("FOLLOW_TARGET") || Local_557.f_20.f_22[iParam0 /*19*/].f_10 == joaat("MELEE_TARGET"))
	{
		if (Local_557.f_20.f_22[iParam0 /*19*/].f_10 == joaat("MELEE_TARGET"))
		{
			if (Local_557.f_20.f_22[iParam0 /*19*/].f_11 != joaat("FOLLOW_TARGET"))
			{
				iVar3 = Local_557.f_20.f_22[iParam0 /*19*/].f_15;
			}
			else
			{
				func_762(iParam0, &iVar3);
			}
		}
		else
		{
			iVar3 = Local_557.f_20.f_22[iParam0 /*19*/].f_15;
		}
		if (iVar3 >= 0 && iVar3 < 21)
		{
			if (!func_52(Local_557.f_20.f_22[iParam0 /*19*/].f_15, &iVar2, 0, 0))
			{
				func_572(iParam0, 9);
			}
			else if (PED::IS_PED_BEING_STEALTH_KILLED(iVar2) || PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
				func_572(iParam0, 10);
			}
		}
	}
	if (Local_557.f_20.f_22[iParam0 /*19*/].f_12 != -1)
	{
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (Local_557.f_20.f_22[iVar4 /*19*/].f_12 != Local_557.f_20.f_22[iParam0 /*19*/].f_12)
			{
			}
			else if (Local_557.f_20.f_22[iVar4 /*19*/] == joaat("ANIMAL_EXTRA") && Local_557.f_20.f_22[iParam0 /*19*/] != joaat("ANIMAL_EXTRA"))
			{
			}
			else if (!func_176(iVar4, 524288))
			{
			}
			else
			{
				func_572(iParam0, 5);
				return;
			}
			iVar4++;
		}
	}
	if (!func_51(iParam0, 65536) && func_54(iParam0, &iVar5, 0))
	{
		if (func_763(iVar5) || (!PED::IS_PED_ON_MOUNT(iVar0) && !func_51(iParam0, 16)))
		{
			func_572(iParam0, 11);
			return;
		}
	}
	if (func_176(iParam0, 8) && func_764(iParam0, iVar0, Local_557.f_20.f_22[iParam0 /*19*/].f_17, &uVar6))
	{
		func_572(iParam0, 2);
		return;
	}
	if (func_176(iParam0, 16))
	{
		if (func_765(iVar0, Local_557.f_20.f_22[iParam0 /*19*/].f_18))
		{
			func_572(iParam0, 7);
			return;
		}
	}
	if ((((func_55(Local_15.f_2[iParam0 /*9*/].f_2) && func_766(iParam0, &iVar7, &uVar8)) && func_767(iVar7)) && func_574(iVar7)) && !func_176(iParam0, 4))
	{
		func_572(iParam0, 6);
		return;
	}
	if ((((!PED::IS_PED_BEING_STUNNED(iVar0, 0) && !PED::IS_PED_BEING_STEALTH_KILLED(iVar0)) && !PED::_0x3BDFCF25B58B0415(iVar0)) && !PED::IS_PED_RAGDOLL(iVar0)) && func_768(iParam0))
	{
		func_461(iParam0, 64);
		func_572(iParam0, 4);
		return;
	}
	bVar10 = Local_557.f_20.f_22[iParam0 /*19*/].f_10 == joaat("MELEE_TARGET");
	if (func_769(iParam0, iVar0, PED::IS_PED_HUMAN(iVar0), bVar10, &bVar9))
	{
		if (bVar9)
		{
			func_572(iParam0, 4);
		}
		else
		{
			func_572(iParam0, 12);
		}
		return;
	}
}

bool func_478(int iParam0)
{
	return iParam0 == joaat("TARGET");
}

bool func_479(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/]))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!bParam1)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!bParam2 || !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
		{
			return false;
		}
	}
	return true;
}

void func_480(int iParam0)
{
	switch (Local_15.f_2[iParam0 /*9*/].f_2)
	{
		case joaat("TARGET"):
			func_461(iParam0, 67108864);
			break;
		case 0:
			return;
	}
	if (!func_176(iParam0, 67108864))
	{
		func_62(iParam0, 1);
	}
	func_770(iParam0, 1583594396);
}

void func_481(int iParam0)
{
	var uVar0;
	var uVar1;

	if (!func_176(iParam0, 8) && !func_176(iParam0, 1024))
	{
		return;
	}
	if (!func_52(iParam0, &uVar0, 0, 0))
	{
		return;
	}
	if (Local_15.f_2[iParam0 /*9*/].f_6 != 255)
	{
		if (func_771(iParam0, uVar0))
		{
			if (func_176(iParam0, 65536))
			{
				func_772(iParam0);
			}
			else if (func_176(iParam0, 32768))
			{
				func_461(iParam0, 65536);
			}
			else
			{
				func_461(iParam0, 32768);
				return;
			}
		}
		else
		{
			func_773(iParam0, 32768);
			func_773(iParam0, 65536);
			return;
		}
	}
	if (!func_774(iParam0, &uVar1))
	{
		return;
	}
	func_775(iParam0, uVar1);
}

void func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if ((func_59(65536) && !func_176(iParam0, 262144)) && func_776(iParam0, iVar0))
	{
		func_461(iParam0, 262144);
	}
	if (func_777(iParam0) != 16)
	{
		if (!func_51(iParam0, 32768) && func_778())
		{
			func_779(iParam0, 16);
		}
		if (((func_51(iParam0, 4096) && func_176(iParam0, 1)) && func_780(iParam0, &iVar1)) && Local_15.f_275 <= iVar1)
		{
			func_779(iParam0, 16);
		}
	}
	if (func_176(iParam0, 1) && !func_781(Local_15.f_2[iParam0 /*9*/].f_4))
	{
		switch (Local_557.f_20.f_22[iParam0 /*19*/].f_11)
		{
			case joaat("COWER"):
				iVar2 = 15;
				break;
			case joaat("FLEE"):
				iVar2 = 16;
				break;
			case joaat("FLEE_WITH_COMBAT"):
				iVar2 = 17;
				break;
			case joaat("FOLLOW_TARGET"):
				iVar2 = 18;
				break;
			case joaat("MOVE_TO_POINT"):
				iVar2 = 19;
				break;
			case joaat("WAIT_FOR_AMBUSH"):
				iVar2 = 20;
				break;
			case joaat("COMBAT"):
				iVar2 = 14;
				break;
			case joaat("PICK_UP_WEAPON"):
				iVar2 = 21;
				break;
			default:
				iVar2 = 14;
				break;
		}
		if (func_176(iParam0, 4096))
		{
			if (iVar2 == 14 || iVar2 == 17)
			{
				iVar2 = 16;
			}
		}
		func_779(iParam0, iVar2);
	}
	switch (func_777(iParam0))
	{
		case 0:
			if (func_51(iParam0, 1) && !func_782(iVar0, func_23(iParam0)))
			{
				return;
			}
			switch (Local_557.f_20.f_22[iParam0 /*19*/].f_10)
			{
				case joaat("PERFORM_SCENARIO"):
					iVar3 = 2;
					break;
				case joaat("WANDER"):
					iVar3 = 3;
					break;
				case joaat("FOLLOW_TARGET"):
					iVar3 = 4;
					break;
				case joaat("FOLLOW_WAYPOINT_RECORDING"):
					iVar3 = 12;
					break;
				case joaat("FOLLOW_WAYPOINT_RECORDING_IN_VEHICLE"):
					iVar3 = 13;
					break;
				case joaat("MOVE_IN_TRAFFIC"):
					iVar3 = 6;
					break;
				case joaat("PATROL"):
					iVar3 = 8;
					break;
				case joaat("USE_WORLD_SCENARIO"):
					iVar3 = 9;
					break;
				case -74090560:
					iVar3 = 10;
					break;
				case joaat("WAIT_FOR_AMBUSH"):
					iVar3 = 10;
					break;
				case joaat("MELEE_TARGET"):
					iVar3 = 5;
					break;
				default:
					iVar3 = 1;
					break;
			}
			func_779(iParam0, iVar3);
			break;
		case 7:
			func_783(iParam0, iVar0);
			break;
		case 5:
			if (!func_784(iParam0, iVar0))
			{
				return;
			}
			if (func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 11:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4) && func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else if (!func_452(func_787(iParam0)))
			{
				func_779(iParam0, 7);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 20:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (!func_176(iParam0, 4) && !func_452(func_787(iParam0)))
			{
				func_779(iParam0, 19);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
		case 16:
		case 17:
			func_788(iParam0, iVar0);
			break;
		case 18:
			if (!func_789(iParam0, iVar0))
			{
				return;
			}
			func_779(iParam0, 14);
			break;
		case 19:
			if (!func_783(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 268435456))
			{
				func_779(iParam0, 21);
			}
			else if (func_176(iParam0, 4096))
			{
				func_779(iParam0, 16);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
		case 21:
			if (!func_790(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4096) || WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false) == joaat("WEAPON_UNARMED"))
			{
				func_779(iParam0, 16);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
	}
}

void func_483(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (func_777(iParam0) != 16)
	{
		if (!func_51(iParam0, 32768) && func_778())
		{
			func_779(iParam0, 16);
		}
		if (((func_51(iParam0, 4096) && func_176(iParam0, 1)) && func_780(iParam0, &iVar1)) && Local_15.f_275 <= iVar1)
		{
			func_779(iParam0, 16);
		}
	}
	if (func_176(iParam0, 1) && !func_781(Local_15.f_2[iParam0 /*9*/].f_4))
	{
		switch (Local_557.f_20.f_22[iParam0 /*19*/].f_11)
		{
			case joaat("COWER"):
				iVar2 = 15;
				break;
			case joaat("FLEE"):
				iVar2 = 16;
				break;
			case joaat("FLEE_WITH_COMBAT"):
				iVar2 = 17;
				break;
			case joaat("FOLLOW_TARGET"):
				iVar2 = 18;
				break;
			case joaat("MOVE_TO_POINT"):
				iVar2 = 19;
				break;
			case joaat("WAIT_FOR_AMBUSH"):
				iVar2 = 20;
				break;
			case joaat("COMBAT"):
				iVar2 = 14;
				break;
			case joaat("PICK_UP_WEAPON"):
				iVar2 = 21;
				break;
			default:
				iVar2 = 14;
				break;
		}
		if (func_176(iParam0, 4096))
		{
			if (iVar2 == 14 || iVar2 == 17)
			{
				iVar2 = 16;
			}
		}
		func_779(iParam0, iVar2);
	}
	switch (func_777(iParam0))
	{
		case 0:
			if (func_51(iParam0, 1) && !func_782(iVar0, func_23(iParam0)))
			{
				return;
			}
			switch (Local_557.f_20.f_22[iParam0 /*19*/].f_10)
			{
				case joaat("PERFORM_SCENARIO"):
					iVar3 = 2;
					break;
				case joaat("WANDER"):
					iVar3 = 3;
					break;
				case joaat("FOLLOW_TARGET"):
					iVar3 = 4;
					break;
				case joaat("FOLLOW_WAYPOINT_RECORDING"):
					iVar3 = 12;
					break;
				case joaat("FOLLOW_WAYPOINT_RECORDING_IN_VEHICLE"):
					iVar3 = 13;
					break;
				case joaat("MOVE_IN_TRAFFIC"):
					iVar3 = 6;
					break;
				case joaat("PATROL"):
					iVar3 = 8;
					break;
				case joaat("USE_WORLD_SCENARIO"):
					iVar3 = 9;
					break;
				case -74090560:
					iVar3 = 10;
					break;
				case joaat("WAIT_FOR_AMBUSH"):
					iVar3 = 10;
					break;
				case joaat("MELEE_TARGET"):
					iVar3 = 5;
					break;
				default:
					iVar3 = 1;
					break;
			}
			func_779(iParam0, iVar3);
			break;
		case 7:
			func_783(iParam0, iVar0);
			break;
		case 5:
			if (!func_784(iParam0, iVar0))
			{
				return;
			}
			if (func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 11:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4) && func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else if (!func_452(func_787(iParam0)))
			{
				func_779(iParam0, 7);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 20:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (!func_176(iParam0, 4) && !func_452(func_787(iParam0)))
			{
				func_779(iParam0, 19);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
		case 16:
		case 17:
			func_788(iParam0, iVar0);
			break;
		case 18:
			if (!func_789(iParam0, iVar0))
			{
				return;
			}
			func_779(iParam0, 14);
			break;
		case 19:
			if (!func_783(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 268435456))
			{
				func_779(iParam0, 21);
			}
			else if (func_176(iParam0, 4096))
			{
				func_779(iParam0, 16);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
		case 21:
			if (!func_790(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4096) || WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false) == joaat("WEAPON_UNARMED"))
			{
				func_779(iParam0, 16);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
	}
}

void func_484(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (func_777(iParam0) != 16)
	{
		if (!func_51(iParam0, 32768) && func_778())
		{
			func_779(iParam0, 16);
		}
		if (((func_51(iParam0, 4096) && func_176(iParam0, 1)) && func_780(iParam0, &iVar1)) && Local_15.f_275 <= iVar1)
		{
			func_779(iParam0, 16);
		}
	}
	if (func_176(iParam0, 1) && !func_781(Local_15.f_2[iParam0 /*9*/].f_4))
	{
		switch (Local_557.f_20.f_22[iParam0 /*19*/].f_11)
		{
			case joaat("FLEE"):
				iVar2 = 16;
				break;
			case joaat("FOLLOW_TARGET"):
				iVar2 = 18;
				break;
			case joaat("MOVE_TO_POINT"):
				iVar2 = 19;
				break;
			case joaat("WAIT_FOR_AMBUSH"):
				iVar2 = 20;
				break;
			case joaat("COMBAT"):
				iVar2 = 14;
				break;
			default:
				iVar2 = 16;
				break;
		}
		if (func_176(iParam0, 4096))
		{
			if (iVar2 == 14)
			{
				iVar2 = 16;
			}
		}
		func_779(iParam0, iVar2);
	}
	switch (func_777(iParam0))
	{
		case 0:
			switch (Local_557.f_20.f_22[iParam0 /*19*/].f_10)
			{
				case joaat("PERFORM_SCENARIO"):
					iVar3 = 2;
					break;
				case joaat("WANDER"):
					iVar3 = 3;
					break;
				case joaat("FOLLOW_TARGET"):
					iVar3 = 4;
					break;
				case joaat("FOLLOW_WAYPOINT_RECORDING"):
					iVar3 = 12;
					break;
				case joaat("PATROL"):
					iVar3 = 8;
					break;
				case joaat("USE_WORLD_SCENARIO"):
					iVar3 = 9;
					break;
				case -74090560:
					iVar3 = 10;
					break;
				case joaat("WAIT_FOR_AMBUSH"):
					iVar3 = 10;
					break;
				case joaat("MELEE_TARGET"):
					iVar3 = 5;
					break;
				default:
					iVar3 = 1;
					break;
			}
			func_779(iParam0, iVar3);
			break;
		case 7:
			func_783(iParam0, iVar0);
			break;
		case 5:
			if (!func_784(iParam0, iVar0))
			{
				return;
			}
			if (func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 11:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4) && func_785(iParam0) != 0)
			{
				func_779(iParam0, 2);
			}
			else if (!func_452(func_787(iParam0)))
			{
				func_779(iParam0, 7);
			}
			else
			{
				func_779(iParam0, 1);
			}
			break;
		case 20:
			if (!func_786(iParam0, iVar0))
			{
				return;
			}
			if (!func_176(iParam0, 4) && !func_452(func_787(iParam0)))
			{
				func_779(iParam0, 19);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
		case 16:
		case 17:
			func_788(iParam0, iVar0);
			break;
		case 18:
			if (!func_789(iParam0, iVar0))
			{
				return;
			}
			func_779(iParam0, 14);
			break;
		case 19:
			if (!func_783(iParam0, iVar0))
			{
				return;
			}
			if (func_176(iParam0, 4096))
			{
				func_779(iParam0, 16);
			}
			else
			{
				func_779(iParam0, 14);
			}
			break;
	}
}

void func_485(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (func_777(iParam0) != 24 && func_778())
	{
		func_779(iParam0, 24);
	}
	if (!func_791(iParam0, &iVar1, &iVar2))
	{
		return;
	}
	switch (func_777(iParam0))
	{
		case 0:
			if (func_792(iVar1, iVar2, &vVar3))
			{
				func_779(iParam0, 23);
				return;
			}
			func_779(iParam0, 22);
			break;
		case 23:
			if (!func_792(iVar1, iVar2, &vVar3) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vVar3) < 4f)
			{
				func_461(iParam0, 2048);
			}
			if (!func_176(iParam0, 2048))
			{
				return;
			}
			func_779(iParam0, 22);
			break;
		case 22:
			if (Local_15.f_2[iParam0 /*9*/].f_7 == 0)
			{
				Local_15.f_2[iParam0 /*9*/].f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
	}
}

bool func_486(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Local_15.f_2[iParam0 /*9*/].f_2 != 1583594396)
	{
		return false;
	}
	if (func_176(iParam0, 67108864))
	{
		return false;
	}
	if ((func_176(iParam0, 1) && func_176(iParam0, 524288)) && func_55(Local_15.f_2[iParam0 /*9*/].f_2))
	{
		if (Local_557.f_20.f_22[iParam0 /*19*/].f_12 != -1)
		{
			iVar0 = 0;
			while (iVar0 < 21)
			{
				if (!func_55(Local_15.f_2[iVar0 /*9*/].f_2))
				{
				}
				else if (Local_557.f_20.f_22[iVar0 /*19*/].f_12 != Local_557.f_20.f_22[iParam0 /*19*/].f_12)
				{
				}
				else if (func_176(iVar0, 1))
				{
				}
				else
				{
					return false;
				}
				iVar0++;
			}
		}
		iVar7 = func_205();
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (MISC::_0x8F4F050054005C27(&(Local_15.f_222.f_10), iVar6))
			{
			}
			else
			{
				func_375(&Var1);
				if (!func_754(&Var1, iVar6))
				{
				}
				else if (func_345(Var1, 110383052, &iVar8, 0) && Local_557.f_20.f_22[iParam0 /*19*/].f_12 != iVar8)
				{
				}
				else if (Local_15.f_222.f_3[iVar6] != 0)
				{
				}
				else
				{
					return false;
				}
			}
			iVar6++;
		}
	}
	return true;
}

void func_487(int iParam0)
{
	func_62(iParam0, 1);
	Local_15.f_2[iParam0 /*9*/].f_5 = 255;
	Local_15.f_2[iParam0 /*9*/].f_6 = 255;
	Local_15.f_2[iParam0 /*9*/].f_7 = 0;
	Local_15.f_2[iParam0 /*9*/].f_8 = -1;
	Local_15.f_2[iParam0 /*9*/].f_4 = 0;
	Local_15.f_2[iParam0 /*9*/].f_2 = 0;
	Local_15.f_2[iParam0 /*9*/].f_3 = 0;
	Local_15.f_2[iParam0 /*9*/].f_1 = 0;
	Local_15.f_2[iParam0 /*9*/] = 0;
}

bool func_488(int iParam0)
{
	int iVar0;

	iVar0 = func_793(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_489(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

bool func_490(int iParam0)
{
	if (func_794(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_491()
{
	return true;
}

bool func_492(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = Global_1296859.f_21;
		}
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = Global_1296859.f_21;
		return true;
	}
	return false;
}

void func_493(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_795(*uParam0);
}

void func_494(var uParam0)
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

void func_495()
{
	AUDIO::_0x9D746964E0CF2C5F(func_796(), func_797());
	AUDIO::_0x9D746964E0CF2C5F(func_798(), func_797());
	AUDIO::_0x9D746964E0CF2C5F(func_799(), func_797());
	AUDIO::_0x9D746964E0CF2C5F(func_800(), func_797());
	AUDIO::_0x9D746964E0CF2C5F(func_801(), func_802());
	AUDIO::_0x9D746964E0CF2C5F(func_803(), func_804());
}

void func_496(var uParam0)
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

void func_497(int iParam0)
{
	if (Global_1903133.f_1 != iParam0)
	{
		Global_1903133.f_1 = iParam0;
	}
}

void func_498(int iParam0)
{
	Global_1903133 = iParam0;
}

void func_499(int iParam0)
{
	if (Global_1071686.f_21689[iParam0 /*8*/].f_4 != 0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1071686.f_21689[iParam0 /*8*/]))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1071686.f_21689[iParam0 /*8*/], Global_1071686.f_21689[iParam0 /*8*/].f_4);
		}
		Global_1071686.f_21689[iParam0 /*8*/].f_4 = 0;
		func_805(iParam0);
	}
}

void func_500(int iParam0)
{
	if (Global_1071686.f_21689[iParam0 /*8*/].f_5 != 0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1071686.f_21689[iParam0 /*8*/]))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1071686.f_21689[iParam0 /*8*/], Global_1071686.f_21689[iParam0 /*8*/].f_5);
		}
		Global_1071686.f_21689[iParam0 /*8*/].f_5 = 0;
		func_805(iParam0);
	}
}

void func_501(int iParam0)
{
	if (Global_1071686.f_21689[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21689[iParam0 /*8*/].f_1 = 0;
		func_805(iParam0);
	}
}

void func_502(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28348), iParam0);
}

void func_503(int iParam0)
{
	if (Global_1071686.f_21952[iParam0 /*18*/].f_4 != 0)
	{
		Global_1071686.f_21952[iParam0 /*18*/].f_4 = 0;
		func_805(iParam0);
	}
}

int func_504(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER");
		case 2:
			return joaat("PERSONA_HONOR_ACTION__MURDER");
		case 3:
			return joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER");
		case 4:
			return joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER");
		case 5:
			return joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE");
		case 6:
			return joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS");
		case 7:
			return joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER");
		case 8:
			return joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED");
		case 9:
			return joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER");
		case 10:
			return joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER");
		case 11:
			return joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT");
		case 12:
			return joaat("PERSONA_HONOR_ACTION__MURDER_HORSE");
		case 13:
			return joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS");
		case 14:
			return joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI");
		case 15:
			return joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI");
		case 16:
			return joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER");
		case 17:
			return joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER");
		case 18:
			return joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER");
		case 19:
			return joaat("PERSONA_HONOR_ACTION__TRAMPLE");
		case 20:
			return joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES");
		case 21:
			return joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION");
		case 22:
			return joaat("PERSONA_HONOR_ACTION__GRIEFING");
		case 23:
			return joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION");
		case 24:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL");
		case 25:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL");
		case 26:
			return joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL");
		case 27:
			return joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP");
		case 28:
			return joaat("PERSONA_HONOR_ACTION__RUSTLING");
		case 29:
			return joaat("PERSONA_HONOR_ACTION__HERDING_STEAL");
		case 30:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG");
		case 31:
			return joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW");
		case 32:
			return joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG");
		case 33:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE");
		case 34:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN");
		case 35:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN");
		case 36:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY");
		case 37:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE");
		case 38:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY");
		case 39:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE");
		case 40:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY");
		case 41:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE");
		case 42:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY");
		case 43:
			return joaat("PERSONA_HONOR_ACTION__LOOTING");
		case 44:
			return joaat("PERSONA_HONOR_ACTION__THEFT");
		case 45:
			return joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY");
		case 46:
			return joaat("PERSONA_HONOR_ACTION__ARSON");
		case 47:
			return joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW");
		case 48:
			return joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT");
		case 49:
			return joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL");
		case 50:
			return joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL");
		case 51:
			return joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL");
		case 52:
			return joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL");
		case 53:
			return joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL");
		case 54:
			return joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT");
		case 55:
			return joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT");
		case 56:
			return joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER");
		case 57:
			return joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL");
		case 58:
			return 1723535349;
		case 59:
			return joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER");
		case 60:
			return joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD");
		case 61:
			return joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER");
		case 62:
			return joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT");
		case 63:
			return joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD");
		case 64:
			return -2086327823;
		case 65:
			return 1623086000;
		case 66:
			return 796310207;
		case 67:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE");
		case 68:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER");
		case 69:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI");
		case 70:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE");
		case 71:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN");
		case 72:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL");
		case 73:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER");
		case 74:
			return joaat("PERSONA_HONOR_ACTION__RESOURCEFUL");
		case 75:
			return joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT");
		case 76:
			return joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH");
		case 77:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE");
		case 78:
			return joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL");
		case 79:
			return joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP");
		case 80:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS");
		case 81:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER");
		case 82:
			return joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS");
		case 83:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE");
		case 84:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN");
		case 85:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN");
		case 86:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY");
		case 87:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE");
		case 88:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY");
		case 89:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE");
		case 90:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY");
		case 91:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE");
		case 92:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY");
		case 93:
			return joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE");
		case 94:
			return joaat("PERSONA_HONOR_ACTION__MERCY_KILL");
		case 95:
			return joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED");
		case 96:
			return joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE");
		case 97:
			return joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE");
		case 98:
			return joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL");
		case 99:
			return joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST");
		case 100:
			return joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST");
		case 101:
			return joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN");
		case 102:
			return joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE");
		case 103:
			return -29468993;
		case 104:
			return 669386338;
		case 105:
			return joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE");
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

void func_505(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1139381.f_3876.f_2[func_506(iParam0, 1) /*4*/] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_806(iParam0);
	}
	Global_1139381.f_3876.f_2[func_506(iParam0, 1) /*4*/] = bParam1;
}

int func_506(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 98;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 101;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 62;
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 68;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 102;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 92;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 67;
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 59;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 95;
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 93;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 74;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 82;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 105;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 70;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 79;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 75;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 100;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 73;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 77;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 96;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 87;
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 61;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 69;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 89;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 60;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 72;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 76;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 83;
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 97;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 78;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 90;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 81;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
		case 1623086000:
			return 65;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 71;
		case 1723535349:
			return 58;
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 99;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 84;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 85;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 91;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 80;
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return 63;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 88;
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
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

int func_507(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_74(Param0, func_807(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_508(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_509(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3;
}

bool func_510(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_511(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_1;
}

bool func_512(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

int func_513(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_3;
}

int func_514(int iParam0)
{
	return Global_1118808[iParam0 /*35*/].f_1;
}

int func_515(int iParam0)
{
	return Global_1118808[iParam0 /*35*/];
}

bool func_516()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_517(int iParam0, int iParam1, struct<2> Param2, int iParam4)
{
	struct<28> Var0;

	if (!Global_1109804.f_18)
	{
		return;
	}
	if (!func_73(Param2))
	{
		return;
	}
	if (!func_510(iParam0))
	{
		return;
	}
	if (!func_512(iParam1))
	{
		return;
	}
	if (!func_808(iParam4))
	{
		return;
	}
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
	Var0.f_5 = iParam0;
	Var0.f_6 = iParam1;
	Var0.f_7 = { Param2 };
	Var0.f_9 = iParam4;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_4 = 1;
	func_457(&Var0);
}

int func_518()
{
	return Global_1902818;
}

void func_519(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_810(joaat("COOLDOWN_START"), func_809(iParam0)) };
	func_811(Var0, iParam1);
}

void func_520(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_810(joaat("COOLDOWN_TYPE"), func_809(iParam0)) };
	func_812(Var0, iParam1);
}

void func_521(int iParam0)
{
	if (func_292(&(Global_1109804.f_247.f_6), iParam0, 2))
	{
	}
}

void func_522(int iParam0)
{
	if (func_292(&(Global_1130367[PLAYER::PLAYER_ID() /*7*/]), iParam0, 2))
	{
	}
}

void func_523(int iParam0)
{
	func_813(&(Global_1298378.f_156), iParam0);
}

void func_524(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_810(joaat("LAST_INTERACTED"), func_809(iParam0)) };
	func_811(Var0, iParam1);
}

void func_525(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam1)
	{
		iVar0 = joaat("RIVAL_ATTEMPTS");
	}
	else
	{
		iVar0 = joaat("ATTEMPTS");
	}
	Var1 = { func_810(iVar0, func_809(iParam0)) };
	func_814(Var1);
}

int func_526(int iParam0)
{
	return func_815(iParam0);
}

void func_527(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar35;

	if (!func_816(*uParam0))
	{
		return;
	}
	vVar3 = 10;
	vVar3.f_1.f_1 = -1;
	vVar3.f_1.f_2 = -1;
	vVar3.f_1.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar35.f_1 = -1;
	func_817(&vVar3);
	iVar0 = vVar3.f_31;
	while (iVar0 >= 0)
	{
		if (iVar0 == 0)
		{
		}
		else
		{
			if (iVar0 == 10)
			{
			}
			else
			{
				iVar1 = 0;
				if (!func_816(vVar3[(iVar0 - 1) /*3*/]))
				{
				}
				else
				{
					vVar35.x = vVar3[(iVar0 - 1) /*3*/];
					vVar35.f_1 = vVar3[(iVar0 - 1) /*3*/].f_2;
					vVar35.f_2 = func_818(vVar3[(iVar0 - 1) /*3*/].f_1);
					if (func_819(uParam0, &vVar35))
					{
						iVar2 = func_820((iVar0 - 1));
					}
					else
					{
						iVar1 = func_820((iVar0 - 1));
						func_821(iVar1, iVar0);
					}
				}
			}
			iVar0 = (iVar0 + -1);
		}
	}
	if (iVar2 == 0)
	{
		iVar2 = func_822(uParam0);
		if (iVar2 == 0)
		{
			return;
		}
	}
	func_821(iVar2, 0);
}

void func_528(int iParam0, struct<2> Param1, bool bParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_240(iParam0);
	iVar2 = func_823();
	iVar3 = func_154(Param1);
	iVar5 = func_526(iVar0);
	if (bParam3)
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = 1;
	}
	switch (iVar5)
	{
		case 15:
			if (func_824(iParam0, 4))
			{
				iVar4 = 1;
			}
			else
			{
				iVar4 = 0;
			}
			break;
		default:
			iVar4 = 0;
			break;
	}
	if (!func_824(iParam0, 8))
	{
		iVar2 = 0;
	}
	func_825(iVar0, iVar1, &uParam4, iVar3, iVar2, iVar4);
	if (func_824(iParam0, 8))
	{
		if (iVar2 != 0)
		{
			func_826(iParam0);
			func_827(iParam0);
		}
	}
}

int func_529(int iParam0)
{
	switch (func_514(iParam0))
	{
		case joaat("BOUNTY"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_530(int iParam0, int iParam1)
{
	Global_1109804.f_260.f_5[iParam0] = (Global_1109804.f_260.f_5[iParam0] + iParam1);
}

void func_531(int iParam0)
{
	if (Global_1194053.f_440 != 2)
	{
		return;
	}
	if (Global_1194053.f_440.f_1 != 0)
	{
		return;
	}
	Global_1194053.f_440.f_1 = iParam0;
	POSSE::_0xC584FF658B2E55DA(iParam0);
}

void func_532(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam1)
	{
		iVar0 = joaat("RIVAL_ATTEMPTS");
		iVar1 = func_828(iParam0);
	}
	else
	{
		iVar0 = joaat("ATTEMPTS");
		iVar1 = func_829(iParam0);
	}
	Var2 = { func_810(iVar0, iVar1) };
	func_814(Var2);
}

void func_533()
{
	func_830(4);
	func_831(1);
}

bool func_534(int iParam0, int iParam1)
{
	return (Global_1128574[iParam0 /*56*/].f_34 && iParam1) != 0;
}

void func_535(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1128574[iVar0 /*56*/].f_34 = (Global_1128574[iVar0 /*56*/].f_34 || iParam0);
}

struct<2> func_536(int iParam0)
{
	return Global_1210161.f_1[iParam0 /*10*/].f_4;
}

bool func_537(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_832(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_538(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_832(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_539(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

void func_540(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_73(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_538(Param0) && !func_537(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_67(Param0) == 0)
	{
	}
	if ((bParam3 == 0 || bParam3 == 1) || bParam3 == 4)
	{
		if (func_832(Param0) == 3)
		{
			func_833(1, -1706799532);
		}
		else if (func_832(Param0) == 4)
		{
			func_833(0, -1706799532);
		}
	}
	if ((func_832(Param0) == 3 || func_832(Param0) == 1) || ((bParam5 && func_832(Param0) == 4) && STATS::_0x01F4D242765C6B24(func_67(Param0))))
	{
		if (bParam3 != -1)
		{
			func_834(Param0, bParam3, bParam4, 255, 0);
		}
		else
		{
			func_834(Param0, 2, bParam4, 255, 0);
		}
	}
	func_835(Param0, 0);
	if (func_74(func_836(0), Param0))
	{
		func_837(1);
		func_838(0);
		func_839(0);
		func_840(1);
	}
	func_841(Param0);
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_842(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_541(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_539(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_542(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_810(joaat("LAST_MISSION"), func_809(iParam0)) };
	func_843(Var0, iParam1);
}

void func_543(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_810(joaat("LAST_MISSION_TYPE"), func_809(iParam0)) };
	func_844(Var0, iParam1);
}

void func_544(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_810(joaat("WIN_TYPE"), func_809(iParam0)) };
	func_845(Var0, iParam1);
}

void func_545(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<2> Var1;

	if (bParam1)
	{
		if (bParam2)
		{
			iVar0 = joaat("RIVAL_WINS");
		}
		else
		{
			iVar0 = joaat("RIVAL_LOSSES");
		}
	}
	else if (bParam2)
	{
		iVar0 = joaat("WINS");
	}
	else
	{
		iVar0 = joaat("LOSSES");
	}
	Var1 = { func_810(iVar0, func_809(iParam0)) };
	func_814(Var1);
}

void func_546(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;

	if (bParam1)
	{
		return;
	}
	Var0 = { func_810(joaat("REWARD_STREAK"), func_809(iParam0)) };
	if (bParam2)
	{
		func_814(Var0);
	}
	else
	{
		func_846(Var0, 0);
	}
}

void func_547(int iParam0, bool bParam1, bool bParam2, struct<2> Param3, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	Var0 = -1;
	vVar2 = joaat("NONE");
	vVar2.f_2 = 255;
	Var0 = func_240(iParam0);
	Var0.f_1 = func_154(Param3);
	vVar2.f_2 = bParam7;
	if (bParam1)
	{
		vVar2.f_1 = 2;
	}
	else
	{
		vVar2.f_1 = 1;
	}
	iVar8 = func_526(Var0);
	iVar6 = func_242(Var0);
	iVar5 = 0;
	switch (iVar8)
	{
		case 0:
			if (bParam2)
			{
				vVar2.x = -1365731393;
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 11:
			if (bParam2)
			{
				switch (iVar6)
				{
					case joaat("SETUP"):
						vVar2.x = -1365731393;
						func_847(256);
						break;
					case joaat("RESUPPLY"):
						vVar2.x = -1365731393;
						func_847(256);
						break;
					case joaat("SELL"):
						if (func_824(iParam0, 2))
						{
							vVar2.x = -406386912;
						}
						else
						{
							vVar2.x = -356110550;
						}
						break;
					default:
						vVar2.x = -1365731393;
						break;
				}
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 7:
			if (bParam2)
			{
				iVar7 = bParam5->f_2;
				switch (iVar7)
				{
					case 0:
						vVar2.x = -508253498;
						break;
					case 1:
						vVar2.x = 566295171;
						break;
					case 2:
						vVar2.x = -1881397389;
						break;
					default:
						vVar2.x = -1365731393;
						break;
				}
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 15:
			if (bParam2)
			{
				if (func_824(iParam0, 4))
				{
					vVar2.x = 1759419243;
				}
				else
				{
					vVar2.x = -1365731393;
				}
			}
			else if (func_824(iParam0, 4))
			{
				vVar2.x = 475709606;
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
		case 18:
			if (bParam2)
			{
				if (func_824(iParam0, 16))
				{
					if (bParam6)
					{
						vVar2.x = 1759419243;
					}
					else
					{
						vVar2.x = 2062237572;
					}
				}
				else
				{
					vVar2.x = -1365731393;
				}
			}
			else
			{
				vVar2.x = 1923632299;
			}
			iVar5 = func_823();
			break;
		default:
			if (bParam2)
			{
				vVar2.x = -1365731393;
			}
			else
			{
				vVar2.x = 1923632299;
			}
			break;
	}
	func_848(&Var0, &vVar2, bParam5, iVar5);
}

void func_548(int iParam0, int iParam1, int iParam2, struct<2> Param3)
{
	struct<28> Var0;
	var uVar31;

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
	SCRIPTS::_0x31010318BA9897AC(&uVar31, PLAYER::PLAYER_ID());
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_4 = 7;
	Var0.f_16 = iParam2;
	Var0.f_7 = { Param3 };
	func_456(&Var0, uVar31);
}

void func_549(bool bParam0)
{
	if (Global_1194053.f_440 != 2)
	{
		return;
	}
	if (Global_1194053.f_440.f_1 == 0)
	{
		return;
	}
	Global_1194053.f_440.f_1 = 0;
	POSSE::_0xC684FF658B2E55DA(bParam0);
}

void func_550(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam2)
	{
		iVar0 = joaat("WINS");
	}
	else
	{
		iVar0 = joaat("LOSSES");
	}
	if (bParam1)
	{
		iVar1 = func_828(iParam0);
	}
	else
	{
		iVar1 = func_829(iParam0);
	}
	Var2 = { func_810(iVar0, iVar1) };
	func_814(Var2);
}

void func_551(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (GANG::_0x0F99F6436528A089(iVar0) && GANG::_0x149A2751AB66AC02(iVar0) >= 2)
		{
			func_849(17, 1);
		}
	}
	func_850(4);
	func_831(1);
	func_851(60);
	if (SAVE::_0x3CF46F55C6585590())
	{
	}
	else if (SAVE::_0x1840F3B30ED0105F(-1706799532))
	{
	}
	func_555(1);
	func_555(2);
}

void func_552(int iParam0)
{
	func_852(iParam0);
	func_853(iParam0, MISC::GET_GAME_TIMER());
}

void func_553(int iParam0)
{
	Global_1109804.f_21.f_37.f_1 = iParam0;
}

void func_554(int iParam0)
{
	Global_1109804.f_21.f_37 = iParam0;
}

void func_555(int iParam0)
{
	Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_48 = (Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_48 - (Global_1128574[PLAYER::PLAYER_ID() /*56*/].f_48 && iParam0));
}

void func_556(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_557(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_558(int iParam0)
{
	return func_854(iParam0);
}

var func_559(int iParam0)
{
	return Global_1109804.f_21.f_2.f_1[iParam0];
}

bool func_560()
{
	if (func_65() != 0)
	{
		return true;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_HONOR")))
	{
		return true;
	}
	if (Global_1139381.f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1139381.f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return true;
	}
	return false;
}

void func_561(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 5, &uParam1);
}

int func_562()
{
	return Global_1051252.f_12;
}

char* func_563()
{
	return "unnamed";
}

int func_564(int iParam0)
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

bool func_565(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_417(36, iParam0);
}

int func_566(int iParam0)
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

bool func_567(int iParam0)
{
	if (func_855(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_856(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

char* func_568(int iParam0)
{
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		if (Local_557.f_20.f_16 == joaat("PLAYER"))
		{
			return "";
		}
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_UPDATE_PLAYER_KILLED", func_857(PLAYER::GET_PLAYER_NAME(iParam0), joaat("COLOR_ENEMY")));
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_AS_UPDATE_PLAYER_KILLED", func_857(PLAYER::GET_PLAYER_NAME(iParam0), joaat("COLOR_POSSE_ALLY")));
}

void func_569(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	Local_557.f_584.f_331 = func_858(sParam0, joaat("COLOR_WHITE"), -2, 0, 0, 0, 1);
}

char* func_570(int iParam0)
{
	if (!func_859(iParam0))
	{
		return "NET_AS_UPDATE_TARGET_PLAYER_DISCONNECTED_GEN";
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_UPDATE_TARGET_PLAYER_DISCONNECTED", func_857(func_860(iParam0), joaat("COLOR_ENEMY")));
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_AS_UPDATE_TARGET_PLAYER_DISCONNECTED", func_857(func_860(iParam0), joaat("COLOR_POSSE_ALLY")));
}

void func_571(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (OBJECT::DOES_PICKUP_EXIST(Local_15.f_217[iParam0 /*2*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP(Local_15.f_217[iParam0 /*2*/]))
	{
		OBJECT::REMOVE_PICKUP(Local_15.f_217[iParam0 /*2*/]);
	}
	if (!DATAFILE::_0x7907969497EA92F5(Local_557.f_577) || !DATAFILE::_0x603AC35FD4602C76(Local_557.f_577))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_4 != 21)
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_15.f_2[iVar0 /*9*/]))
		{
		}
		else if (!func_52(iVar0, &iVar3, 1, 0))
		{
		}
		else if (!func_861(iVar0, &iVar1, &iVar2) || !func_153(iVar1, 0))
		{
		}
		else
		{
			if ((func_176(iVar0, 268435456) && func_176(iVar0, 2)) && func_153(iVar2, 0))
			{
				iVar1 = iVar2;
			}
			if (iVar1 != iParam0)
			{
			}
			else if (!func_862(iParam0, &iVar4))
			{
			}
			else
			{
				func_863(iVar3, iVar4, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				if (!func_176(iVar0, 4096))
				{
					func_864(iVar0, 0);
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_572(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar12;

	if (func_176(iParam0, 1))
	{
		return;
	}
	func_461(iParam0, 1);
	switch (iParam1)
	{
		case 2:
		case 3:
		case 6:
			func_461(iParam0, 16777216);
			break;
	}
	if (func_55(Local_15.f_2[iParam0 /*9*/].f_2) && ((Local_557.f_20.f_22[iParam0 /*19*/].f_11 == joaat("MOVE_TO_POINT") || Local_557.f_20.f_22[iParam0 /*19*/].f_11 == joaat("FLEE")) || Local_557.f_20.f_22[iParam0 /*19*/].f_11 == joaat("FLEE_WITH_COMBAT")))
	{
		vVar0 = { func_787(iParam0) };
		vVar3 = { func_865(iParam0) };
		if (func_452(vVar0))
		{
			func_461(iParam0, 2048);
		}
		else if (((!func_452(vVar3) && !func_452(vVar0)) && func_866(vVar0, 120f, &uVar6, &uVar9, &fVar7)) && (!func_866(vVar3, 120f, &uVar6, &uVar9, &fVar8) || fVar8 > fVar7))
		{
			func_461(iParam0, 2);
		}
	}
	Local_15.f_2[iParam0 /*9*/].f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!func_59(1024) && Local_557.f_20.f_22[iParam0 /*19*/] != joaat("ANIMAL_EXTRA"))
	{
		func_100(1024);
		func_867(iParam1);
	}
	if (func_52(iParam0, &iVar12, 1, 0) && PED::IS_PED_HUMAN(iVar12))
	{
		func_868(iParam0, iVar12, 4, 8, 1, 0, 0, iParam1);
	}
}

void func_573(int iParam0, int iParam1)
{
	Local_15.f_234[iParam0 /*2*/].f_1 = iParam1;
}

bool func_574(int iParam0)
{
	return MISC::_0x8F4F050054005C27(&(Local_15.f_253), iParam0);
}

void func_575(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_15.f_253), iParam0);
}

void func_576(int iParam0, int iParam1)
{
	func_266(&(Local_15.f_217[iParam0 /*2*/].f_1), iParam1);
}

int func_577(int iParam0)
{
	return Global_1107216.f_33[iParam0 /*16*/];
}

bool func_578(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&Var0, bParam2, 4);
	return func_869(iParam0, iParam1, &Var0, uParam3);
}

int func_579(var uParam0, int iParam1, int iParam2)
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

int func_580(int iParam0, int iParam1, int iParam2)
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

bool func_581(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 1970643719;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_582(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -1251795501;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_583(struct<5> Param0)
{
	int iVar0;
	int iVar1;

	if (func_345(Param0, -1272790307, &iVar0, 0) && Local_15.f_278 < iVar0)
	{
		return false;
	}
	if (func_345(Param0, 735506410, &iVar1, 0) && Local_15.f_278 > iVar1)
	{
		return false;
	}
	return true;
}

void func_584(int iParam0, struct<5> Param1, int iParam6, int iParam7, int iParam8)
{
	var uVar0;

	if (func_118(iParam6))
	{
		func_870(&Param1, iParam0, -1284309372, 1, 1);
	}
	if (iParam8 == joaat("ANIMAL_EXTRA") && PED::_IS_THIS_MODEL_A_HORSE(iParam7))
	{
		func_870(&Param1, iParam0, -852511194, 32, 1);
	}
	if (func_345(Param1, 561062234, &uVar0, 0))
	{
		func_177(iParam0, 4096);
	}
	func_870(&Param1, iParam0, -492382713, 8, 0);
	func_870(&Param1, iParam0, -223083781, 64, 0);
	func_870(&Param1, iParam0, 1031590257, 16, 0);
	func_870(&Param1, iParam0, 2102445471, 65536, 0);
	func_870(&Param1, iParam0, 892963390, 32768, 0);
	func_870(&Param1, iParam0, 1518210740, 16777216, 0);
}

bool func_585(int iParam0, var uParam1)
{
	if (func_119(uParam1) && func_120(uParam1, -1443980387, iParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_586(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10)
{
	switch (iParam10)
	{
		case joaat("SPHERE"):
			*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam1, vParam4, vParam7);
			break;
		case joaat("CYLINDER"):
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam1, vParam4, vParam7);
			break;
		default:
			*uParam0 = VOLUME::_CREATE_VOLUME_BOX(vParam1, vParam4, vParam7);
			break;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return false;
	}
	return true;
}

int func_587(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1443980387, iParam0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_588(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -67473273;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

void func_589(int iParam0, int iParam1)
{
	func_266(&(Local_557.f_20.f_422[iParam0 /*4*/].f_1), iParam1);
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CULL"):
			return 1;
		case joaat("FLATTEN"):
			return 2;
		case joaat("FLATTEN_DEEP_SURFACE"):
			return 4;
		case joaat("EXPLODE"):
			return 8;
		case joaat("PUSH"):
			return 16;
		case joaat("DECAL"):
			return 32;
		default:
			break;
	}
	return 2;
}

bool func_591(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 1077944842;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

void func_592(int iParam0, int iParam1)
{
	func_266(&(Local_557.f_20.f_533[iParam0 /*4*/]), iParam1);
}

bool func_593(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 485523583;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

int func_594(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_595(iParam0, &Var0) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_595(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -537276532;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

void func_596(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10)
{
	switch (iParam10)
	{
		case joaat("SPHERE"):
			VOLUME::_0x5B7D7BF36D2DE18B(*uParam0, vParam1, vParam4, vParam7);
			break;
		case joaat("CYLINDER"):
			VOLUME::_0xBCE668AAF83608BE(*uParam0, vParam1, vParam4, vParam7);
			break;
		default:
			VOLUME::_0x39816F6F94F385AD(*uParam0, vParam1, vParam4, vParam7);
			break;
	}
}

bool func_597(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 1520538369;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_598(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -480788145;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

int func_599(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if ((func_119(&Var0) && func_120(&Var0, -424701201, iParam0, 0)) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_600(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -1746234201;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_601(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -1318044545;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

Vector3 func_602(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	if (func_871(iParam0, &Var0))
	{
		func_347(Var0, -1584591647, &vVar5, 0);
	}
	return vVar5;
}

Vector3 func_603(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	if (func_871(iParam0, &Var0))
	{
		func_347(Var0, -865441380, &vVar5, 0);
	}
	return vVar5;
}

int func_604(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if ((func_119(&Var0) && func_120(&Var0, 1606032220, iParam0, 0)) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_605(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if ((func_119(&Var0) && func_120(&Var0, -375509478, iParam0, 0)) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

char* func_606()
{
	return "scr_campfire_distance_smoke_script";
}

int func_607(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	if (func_872(iParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

bool func_608(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_872(iParam0, &Var0))
	{
		func_346(Var0, -1045199329, &uVar5, 0);
	}
	return uVar5;
}

void func_609(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	var uVar5;

	*uParam2 = { 0f, 0f, 0f };
	uParam2->f_4 = { 0f, 0f, 0f };
	uParam2->f_3 = 0;
	uParam2->f_7 = 0;
	uParam2->f_8 = 0;
	if (func_873(iParam0, iParam1, &Var0))
	{
		func_347(Var0, -81907729, uParam2, 1);
		func_347(Var0, -435940167, &(uParam2->f_4), 0);
		func_117(Var0, 229174115, &uVar5, 0);
		func_345(Var0, 1200880489, &(uParam2->f_7), 0);
		func_345(Var0, 1385823714, &(uParam2->f_8), 0);
	}
	uParam2->f_3 = uVar5;
}

char* func_610(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case joaat("WORLD_HUMAN_GUARD_LEAN_WALL"):
			return "WORLD_HUMAN_GUARD_LEAN_WALL";
		case joaat("WORLD_HUMAN_GUARD_SCOUT"):
			return "WORLD_HUMAN_GUARD_SCOUT";
		case joaat("WORLD_HUMAN_GUARD_MILITARY"):
			return "WORLD_HUMAN_GUARD_MILITARY";
		case joaat("WORLD_HUMAN_SMOKE"):
			return "WORLD_HUMAN_SMOKE";
		case joaat("WORLD_HUMAN_SMOKE_CIGAR"):
			return "WORLD_HUMAN_SMOKE_CIGAR";
		case joaat("WORLD_HUMAN_SMOKE_INTERACTION"):
			return "WORLD_HUMAN_SMOKE_INTERACTION";
		case joaat("WORLD_HUMAN_SMOKE_NERVOUS_STRESSED"):
			return "WORLD_HUMAN_SMOKE_NERVOUS_STRESSED";
		case joaat("WORLD_HUMAN_LEAN_BACK_RAILING"):
			return "WORLD_HUMAN_LEAN_BACK_RAILING";
		case joaat("WORLD_HUMAN_DRUNK_BRACE_WALL"):
			return "WORLD_HUMAN_DRUNK_BRACE_WALL";
		case joaat("WORLD_HUMAN_LEAN_BACK_WALL"):
			return "WORLD_HUMAN_LEAN_BACK_WALL";
		case joaat("WORLD_HUMAN_LEAN_BACK_WALL_DRINKING"):
			return "WORLD_HUMAN_LEAN_BACK_WALL_DRINKING";
		case joaat("WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS"):
			return "WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS";
		case joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING"):
			return "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING";
		case joaat("WORLD_HUMAN_LEAN_RAILING"):
			return "WORLD_HUMAN_LEAN_RAILING";
		case joaat("WORLD_HUMAN_LEAN_RAILING_NO_PROPS"):
			return "WORLD_HUMAN_LEAN_RAILING_NO_PROPS";
		case joaat("WORLD_HUMAN_LEAN_RAILING_SMOKING"):
			return "WORLD_HUMAN_LEAN_RAILING_SMOKING";
		case joaat("WORLD_HUMAN_LEAN_FENCE_FWD_CHECK_OUT_LIVESTOCK"):
			return "WORLD_HUMAN_LEAN_FENCE_FWD_CHECK_OUT_LIVESTOCK";
		case joaat("WORLD_HUMAN_STAND_WAITING"):
			return "WORLD_HUMAN_STAND_WAITING";
		case joaat("WORLD_HUMAN_WAITING_IMPATIENT"):
			return "WORLD_HUMAN_WAITING_IMPATIENT";
		case joaat("WORLD_HUMAN_STARE_STOIC"):
			return "WORLD_HUMAN_STARE_STOIC";
		case joaat("WORLD_HUMAN_BROOM_WORKING"):
			return "WORLD_HUMAN_BROOM_WORKING";
		case joaat("WORLD_HUMAN_SHOP_BROWSE"):
			return "WORLD_HUMAN_SHOP_BROWSE";
		case joaat("WORLD_HUMAN_BUCKET_POUR_LOW"):
			return "WORLD_HUMAN_BUCKET_POUR_LOW";
		case joaat("WORLD_HUMAN_FIRE_TEND_KNEEL"):
			return "WORLD_HUMAN_FIRE_TEND_KNEEL";
		case joaat("WORLD_HUMAN_PEE"):
			return "WORLD_HUMAN_PEE";
		case joaat("WORLD_HUMAN_CROUCH_INSPECT"):
			return "WORLD_HUMAN_CROUCH_INSPECT";
		case joaat("WORLD_HUMAN_FEED_CHICKEN"):
			return "WORLD_HUMAN_FEED_CHICKEN";
		case joaat("WORLD_HUMAN_INSPECT"):
			return "WORLD_HUMAN_INSPECT";
		case joaat("WORLD_HUMAN_SIT_FALL_ASLEEP"):
			return "WORLD_HUMAN_SIT_FALL_ASLEEP";
		case joaat("WORLD_HUMAN_DRINKING_DRUNK"):
			return "WORLD_HUMAN_DRINKING_DRUNK";
		case joaat("WORLD_HUMAN_PITCH_HAY_SCOOP"):
			return "WORLD_HUMAN_PITCH_HAY_SCOOP";
		case joaat("PROP_HUMAN_SEAT_CHAIR"):
			return "PROP_HUMAN_SEAT_CHAIR";
		case joaat("WORLD_HUMAN_HAMMER_TABLE"):
			return "WORLD_HUMAN_HAMMER_TABLE";
		case joaat("PROP_HUMAN_REPAIR_WAGON_WHEEL_ON_LARGE"):
			return "PROP_HUMAN_REPAIR_WAGON_WHEEL_ON_LARGE";
		case joaat("WORLD_HUMAN_FARMER_RAKE"):
			return "WORLD_HUMAN_FARMER_RAKE";
		case joaat("WORLD_HUMAN_FARMER_WEEDING"):
			return "WORLD_HUMAN_FARMER_WEEDING";
		case joaat("WORLD_HUMAN_KNOCK_DOOR"):
			return "WORLD_HUMAN_KNOCK_DOOR";
		case joaat("WORLD_HUMAN_BUTCHER_RABBIT"):
			return "WORLD_HUMAN_BUTCHER_RABBIT";
		case joaat("WORLD_HUMAN_STAND_FISHING"):
			return "WORLD_HUMAN_STAND_FISHING";
		case joaat("WORLD_HUMAN_DRINKING"):
			return "WORLD_HUMAN_DRINKING";
		case joaat("WORLD_HUMAN_PICKAXE_WALL"):
			return "WORLD_HUMAN_PICKAXE_WALL";
		case joaat("WORLD_HUMAN_CLIPBOARD"):
			return "WORLD_HUMAN_CLIPBOARD";
		case joaat("WORLD_HUMAN_POCKET_MIRROR"):
			return "WORLD_HUMAN_POCKET_MIRROR";
		case joaat("WORLD_HUMAN_WRITE_NOTEBOOK"):
			return "WORLD_HUMAN_WRITE_NOTEBOOK";
		case joaat("WORLD_HUMAN_STERNGUY_IDLES"):
			return "WORLD_HUMAN_STERNGUY_IDLES";
		default:
			break;
	}
	return "";
}

int func_611(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = func_874(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_513(iVar0);
}

void func_612(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("ATTACK"):
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -1102018457);
					break;
			}
			break;
		case joaat("DEFEND"):
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 1428825552);
					break;
			}
			break;
		case joaat("DELIVER"):
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 1968287849);
					break;
			}
			break;
		case joaat("COLLECT"):
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 2039472637);
					break;
			}
			break;
	}
}

void func_613(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	bVar0 = iParam4 <= true;
	if (bParam3)
	{
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_875(iParam0, -57805484);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_875(iParam0, 512977886);
					break;
			}
		}
	}
	else
	{
		*bParam1 = 1;
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_875(iParam0, -1570113901);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_875(iParam0, -1876025097);
					break;
			}
		}
	}
}

void func_614(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_875(iParam0, func_876(iParam2));
			break;
	}
}

int func_615(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	return func_877(iParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

float func_616(float fParam0, float fParam1, float fParam2)
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

void func_617(int iParam0, int iParam1, bool bParam2, int iParam3, float fParam4)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam4);
	func_580(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				func_875(iParam0, 1628925866);
				break;
			case 1:
				*bParam2 = 1;
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
					func_875(iParam0, 1295140836);
					break;
				case 1:
					*bParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1526522745);
					break;
				case 1:
					*bParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1901367336);
					break;
				case 1:
					*iParam1 = 1706540001;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -2012562028);
					break;
				case 1:
					*iParam1 = 1706540001;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1811294830);
					break;
				case 1:
					*iParam1 = 1706540001;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1580699377);
					break;
				case 1:
					*iParam1 = -398376814;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -529994165);
					break;
				case 1:
					*iParam1 = -398376814;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1356198962);
					break;
				case 1:
					*iParam1 = -398376814;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 592638986);
					break;
				case 1:
					*iParam1 = -1203216227;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -71665830);
					break;
				case 1:
					*iParam1 = -1203216227;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -369634347);
					break;
				case 1:
					*iParam1 = -1203216227;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 523648593);
					break;
				case 1:
					*iParam1 = 329552932;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 224041626);
					break;
				case 1:
					*iParam1 = 329552932;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1119225168);
					break;
				case 1:
					*iParam1 = 329552932;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 820076967);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1790072136);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1490530707);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1908007825);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 2085779592);
					break;
				case 1:
					*iParam1 = 1754742276;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -169152669);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -544685409);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -649710054);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1023735420);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1126990539);
					break;
				case 1:
					*iParam1 = 1995855690;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1501736823);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1614824464);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -1845287019);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1073415046);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, 1906960099);
					break;
				case 1:
					*iParam1 = 1122037536;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					func_875(iParam0, -2023453588);
					break;
				case 1:
					*iParam1 = -1520125470;
					break;
			}
			break;
	}
}

void func_618(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
						func_875(iParam0, 102861655);
					}
					switch (iVar1)
					{
						case 5:
							func_875(iParam0, 1606837351);
							break;
						case 10:
							func_875(iParam0, 1993982606);
							break;
						case 15:
							func_875(iParam0, -1120317616);
							break;
						case 20:
							func_875(iParam0, 1497203110);
							break;
						case 25:
							func_875(iParam0, 1461747036);
							break;
						case 30:
							func_875(iParam0, 1705384279);
							break;
						case 35:
							func_875(iParam0, 587764757);
							break;
						case 40:
							func_875(iParam0, 496010113);
							break;
						case 45:
							func_875(iParam0, -8927412);
							break;
						case 50:
							func_875(iParam0, -1913265366);
							break;
						case 55:
							func_875(iParam0, -1185662490);
							break;
						case 60:
							func_875(iParam0, 1041027017);
							break;
						case 65:
							func_875(iParam0, -1593666129);
							break;
						case 70:
							func_875(iParam0, 1825778741);
							break;
						case 75:
							func_875(iParam0, -1544873376);
							break;
						case 80:
							func_875(iParam0, 1557926776);
							break;
						case 85:
							func_875(iParam0, 1088477734);
							break;
						case 90:
							func_875(iParam0, 1557926776);
							break;
						case 95:
							func_875(iParam0, 956550028);
							break;
						default:
							func_875(iParam0, -781986478);
							break;
					}
					break;
				case 1:
					if (iVar1 <= 0)
					{
						*bParam1 = 1;
					}
					break;
			}
			break;
		case joaat("ALL_OR_NOTHING"):
			if (bParam6)
			{
				switch (iParam2)
				{
					case 0:
						func_875(iParam0, 413085053);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_875(iParam0, 102861655);
						break;
					case 1:
						*bParam1 = 1;
						break;
				}
			}
			break;
	}
}

void func_619(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("PVP"):
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -73489229);
					break;
			}
			break;
		case joaat("COOP"):
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 1981105632);
					break;
			}
			break;
	}
}

void func_620(int iParam0, int iParam1, struct<2> Param2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_507(Param2);
	if (!func_508(iVar0))
	{
		return;
	}
	iVar1 = func_509(iVar0);
	if (func_510(iVar1))
	{
		iVar2 = func_878(func_515(iVar1));
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
				func_875(iParam0, 1900669220);
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 402273926);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -1111096805);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -738447737);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 704666254);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 963311971);
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -1751075375);
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -1527623564);
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -465252584);
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -225219659);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 2108535411);
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -1845896441);
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 1961468135);
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, 1723008122);
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -648222260);
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_875(iParam0, -921745103);
					break;
			}
			break;
	}
}

int func_621(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_877(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

void func_622(int iParam0)
{
	if ((Local_15.f_2[iParam0 /*9*/].f_2 == 1583594396 || Local_15.f_2[iParam0 /*9*/].f_2 == 0) || !func_479(iParam0, 1, func_478(Local_15.f_2[iParam0 /*9*/].f_2)))
	{
		func_623(iParam0, 0);
		if (!func_176(iParam0, 67108864))
		{
			func_879(iParam0);
		}
	}
	if (Local_15.f_2[iParam0 /*9*/].f_2 == 1583594396)
	{
		func_880(iParam0);
		if (((Local_15.f_2[iParam0 /*9*/].f_2 == 1583594396 && Local_15.f_2[iParam0 /*9*/].f_5 == PLAYER::PLAYER_ID()) && func_176(iParam0, 67108864)) && func_176(iParam0, 134217728))
		{
			func_171(iParam0);
		}
	}
}

void func_623(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_718(iParam0, 255))
		{
			return;
		}
		func_881(iParam0);
	}
	else
	{
		if (!func_718(iParam0, 255))
		{
			return;
		}
		func_882(iParam0);
		func_883(iParam0, 2);
		if (func_176(iParam0, 1024))
		{
			func_883(iParam0, 1);
		}
	}
}

void func_624(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_51(iParam0, 33554432))
	{
		if (func_55(Local_15.f_2[iParam0 /*9*/].f_2) && func_51(iParam0, 16777216))
		{
			bVar0 = true;
		}
		if ((!bVar0 && PED::IS_PED_HUMAN(iParam1)) && !func_176(iParam0, 128))
		{
			MISC::_0xF63FA29D4A9ACA86(iParam1, func_884(iParam1));
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_884(iParam1)));
		}
		func_177(iParam0, 33554432);
	}
	if (!func_51(iParam0, 8388608) && func_43(4))
	{
		if (func_55(Local_15.f_2[iParam0 /*9*/].f_2) && func_51(iParam0, 16777216))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			iVar1 = func_885(iParam0, iParam1, 1);
			if (iVar1 != 0)
			{
				PLAYER::_0x7C32191D9FB2BDEA(iVar1);
			}
		}
		if (Local_15.f_2[iParam0 /*9*/].f_2 == joaat("TARGET") && !bVar0)
		{
			MISC::_0xF63FA29D4A9ACA86(iParam1, func_886());
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_886()));
		}
		else if (((!bVar0 && PED::IS_PED_HUMAN(iParam1)) && !func_176(iParam0, 4096)) && !func_176(iParam0, 128))
		{
			MISC::_0xF63FA29D4A9ACA86(iParam1, func_887());
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_887()));
		}
		func_177(iParam0, 8388608);
	}
}

void func_625(int iParam0, int iParam1)
{
	if (!func_55(Local_15.f_2[iParam0 /*9*/].f_2))
	{
		return;
	}
	if (!func_176(iParam0, 33554432) && Local_15.f_2[iParam0 /*9*/].f_2 != joaat("TARGET"))
	{
		return;
	}
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return;
	}
	if (func_51(iParam0, 512) || func_51(iParam0, 1048576))
	{
		return;
	}
	if (func_176(iParam0, 33554432))
	{
		func_888(iParam1, 0);
		func_177(iParam0, 512);
	}
	else if (Local_15.f_2[iParam0 /*9*/].f_2 == joaat("TARGET"))
	{
		func_889(iParam1);
		func_177(iParam0, 1048576);
	}
}

void func_626(int iParam0, int iParam1)
{
}

void func_627(int iParam0)
{
	var uVar0;

	if (func_51(iParam0, 16384))
	{
		return;
	}
	if (Local_557.f_20.f_22[iParam0 /*19*/].f_10 != joaat("FOLLOW_WAYPOINT_RECORDING") && Local_557.f_20.f_22[iParam0 /*19*/].f_10 != joaat("FOLLOW_WAYPOINT_RECORDING_IN_VEHICLE"))
	{
		return;
	}
	if (!func_272(iParam0, &uVar0))
	{
		return;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(func_110(&uVar0));
	if (!func_51(iParam0, 8192))
	{
		func_177(iParam0, 8192);
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_110(&uVar0)))
	{
		return;
	}
	func_177(iParam0, 16384);
}

void func_628(int iParam0, int iParam1)
{
	if (func_176(iParam0, 1))
	{
		func_623(iParam0, 0);
		if (PED::_0x2BA9D7BF629F920C(iParam1) != 80f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
		{
			PED::SET_PED_SEEING_RANGE(iParam1, 80f);
			PED::SET_PED_HEARING_RANGE(iParam1, 80f);
		}
		return;
	}
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return;
	}
	if (Local_15.f_2[iParam0 /*9*/].f_2 == joaat("ANIMAL_EXTRA"))
	{
		return;
	}
	if (!func_43(2048))
	{
		if ((!func_176(iParam0, 8) && !func_176(iParam0, 1024)) && !func_176(iParam0, 8192))
		{
			func_623(iParam0, 0);
			return;
		}
	}
	if (!func_890(iParam0, iParam1, PLAYER::PLAYER_PED_ID()))
	{
		func_623(iParam0, 0);
		return;
	}
	func_623(iParam0, 1);
}

void func_629(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return;
	}
	if (func_176(iParam0, 1))
	{
		if (!func_891(iParam0, 16) && PED::IS_PED_FLEEING(iParam1))
		{
			func_868(iParam0, iParam1, 5, 16, 1, 0, 0, 0);
		}
		if (Local_15.f_2[iParam0 /*9*/].f_4 == 22)
		{
			func_868(iParam0, iParam1, 6, 32, 1, 0, 0, 0);
		}
		return;
	}
	if (!func_892(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (func_176(iParam0, 8))
	{
		if (Local_557.f_1012 > 25000)
		{
			func_868(iParam0, iParam1, 3, 8, 1, 0, 0, 0);
		}
		else if (Local_557.f_1012 > 15000)
		{
			func_868(iParam0, iParam1, 2, 4, 1, 0, 0, 0);
		}
		else if (Local_557.f_1012 > 9000)
		{
			func_868(iParam0, iParam1, 1, 2, 1, 0, 0, 0);
		}
		else if (Local_557.f_1012 > 0)
		{
			func_868(iParam0, iParam1, 0, 1, 1, bVar1, 0, 0);
		}
	}
	else if (func_176(iParam0, 1024))
	{
		iVar2 = 8000;
		if (func_43(2048))
		{
			iVar2 = 4000;
			bVar1 = true;
		}
		if (Local_557.f_1013 > iVar2)
		{
			func_868(iParam0, iParam1, 3, 8, 1, 0, 0, 0);
		}
		else if (Local_557.f_1013 > 0)
		{
			func_868(iParam0, iParam1, 0, 1, 1, bVar1, 0, 0);
		}
	}
	else
	{
		iVar2 = 30000;
		if (func_43(2048))
		{
			iVar2 = 20000;
			bVar1 = true;
		}
		if (Local_557.f_1011 > 15000)
		{
			func_868(iParam0, iParam1, 2, 4, 1, 0, 0, 0);
		}
		else if (Local_557.f_1011 > 9000)
		{
			func_868(iParam0, iParam1, 1, 2, 1, 0, 0, 0);
		}
		else if (Local_557.f_1011 > 0)
		{
			func_868(iParam0, iParam1, 0, 1, 1, bVar1, 0, 0);
		}
	}
}

void func_630(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return;
	}
	if (!func_892(iParam0))
	{
		return;
	}
	if (func_176(iParam0, 1))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (func_176(iParam0, 8192))
	{
		iVar1 = PED::_0xEF2E6F870783369B(iParam1, 0);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar1) && func_893(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
		{
			func_174(5, iParam0, func_173(0, 8), -1);
			return;
		}
	}
	bVar4 = func_43(2048);
	if (func_176(iParam0, 8))
	{
		if (bVar4)
		{
			iVar2 = 15000;
		}
		else
		{
			iVar2 = 25000;
		}
		iVar3 = 4;
		if (Local_557.f_1012 < iVar2)
		{
			return;
		}
	}
	else if (func_176(iParam0, 1024))
	{
		if (bVar4)
		{
			iVar2 = 4000;
		}
		else
		{
			iVar2 = 8000;
		}
		iVar3 = 3;
		if (Local_557.f_1013 < iVar2)
		{
			return;
		}
	}
	else
	{
		return;
	}
	func_174(iVar3, iParam0, func_173(0, 8), -1);
}

void func_631(int iParam0, int iParam1)
{
	if (func_59(65536) && Local_15.f_2[iParam0 /*9*/].f_2 == joaat("TARGET"))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 277, !func_894(iParam0));
	}
	if (func_176(iParam0, 1) && !func_176(iParam0, 4096))
	{
		if (Local_15.f_2[iParam0 /*9*/].f_2 == joaat("ANIMAL_EXTRA"))
		{
			return;
		}
		if (func_176(iParam0, 128))
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_557.f_578.f_3)
			{
				if (func_51(iParam0, 2097152) || func_51(iParam0, 4194304))
				{
					TASK::CLEAR_PED_TASKS(iParam1, true, false);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_557.f_578.f_3);
			}
		}
		else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_557.f_578.f_1)
		{
			if (func_51(iParam0, 2097152) || func_51(iParam0, 4194304))
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_557.f_578.f_1);
		}
	}
	else if (func_55(Local_15.f_2[iParam0 /*9*/].f_2) && func_51(iParam0, 2097152))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_557.f_578.f_4)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_557.f_578.f_4);
		}
	}
	else if (func_55(Local_15.f_2[iParam0 /*9*/].f_2) && func_51(iParam0, 4194304))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_557.f_578.f_5)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_557.f_578.f_5);
		}
	}
	else if (func_176(iParam0, 128))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_557.f_578.f_2)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_557.f_578.f_2);
		}
	}
	else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_557.f_578)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_557.f_578);
	}
}

void func_632(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (func_176(iParam0, 1))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			PED::_0xEEED8FAFEC331A70(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1);
		}
	}
	switch (func_777(iParam0))
	{
		case 0:
			if ((func_51(iParam0, 1) && !func_782(iVar0, func_23(iParam0))) && !func_895(iVar0, 716706914))
			{
				func_896(iParam0, func_23(iParam0), 1, 1, 0);
			}
			break;
		case 1:
			func_897(iParam0, iVar0);
			break;
		case 2:
			func_898(iParam0, iVar0);
			break;
		case 5:
			func_899(iParam0, iVar0);
			break;
		case 3:
			func_900(iParam0, iVar0);
			break;
		case 4:
			func_901(iParam0, iVar0);
			break;
		case 12:
			func_902(iParam0, iVar0, 0);
			break;
		case 13:
			func_902(iParam0, iVar0, 1);
			break;
		case 6:
			func_903(iParam0, iVar0);
			break;
		case 7:
			func_904(iParam0, iVar0);
			break;
		case 8:
			func_905(iParam0, iVar0);
			break;
		case 9:
			func_906(iParam0, iVar0);
			break;
		case 10:
			func_907(iParam0, iVar0);
			break;
		case 11:
			func_908(iParam0, iVar0);
			break;
		case 14:
			func_909(iParam0, iVar0);
			break;
		case 15:
			func_910(iParam0, iVar0);
			break;
		case 16:
			func_911(iParam0, iVar0, 0);
			break;
		case 17:
			func_911(iParam0, iVar0, 1);
			break;
		case 18:
			func_912(iParam0, iVar0);
			break;
		case 19:
			func_904(iParam0, iVar0);
			break;
		case 20:
			func_908(iParam0, iVar0);
			break;
		case 21:
			func_913(iParam0, iVar0);
			break;
	}
}

void func_633(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	switch (func_777(iParam0))
	{
		case 0:
			if ((func_51(iParam0, 1) && !func_782(iVar0, func_23(iParam0))) && !func_895(iVar0, 716706914))
			{
				func_896(iParam0, func_23(iParam0), 1, 1, 0);
			}
			break;
		case 1:
			func_897(iParam0, iVar0);
			break;
		case 2:
			func_898(iParam0, iVar0);
			break;
		case 5:
			func_899(iParam0, iVar0);
			break;
		case 3:
			func_900(iParam0, iVar0);
			break;
		case 4:
			func_901(iParam0, iVar0);
			break;
		case 12:
			func_902(iParam0, iVar0, 0);
			break;
		case 13:
			func_902(iParam0, iVar0, 1);
			break;
		case 6:
			func_903(iParam0, iVar0);
			break;
		case 7:
			func_904(iParam0, iVar0);
			break;
		case 8:
			func_905(iParam0, iVar0);
			break;
		case 9:
			func_906(iParam0, iVar0);
			break;
		case 10:
			func_907(iParam0, iVar0);
			break;
		case 11:
			func_908(iParam0, iVar0);
			break;
		case 14:
			func_909(iParam0, iVar0);
			break;
		case 15:
			func_910(iParam0, iVar0);
			break;
		case 16:
			func_911(iParam0, iVar0, 0);
			break;
		case 17:
			func_911(iParam0, iVar0, 1);
			break;
		case 18:
			func_912(iParam0, iVar0);
			break;
		case 19:
			func_904(iParam0, iVar0);
			break;
		case 20:
			func_908(iParam0, iVar0);
			break;
		case 21:
			func_913(iParam0, iVar0);
			break;
	}
}

void func_634(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	switch (func_777(iParam0))
	{
		case 2:
			func_898(iParam0, iVar0);
			break;
		case 3:
			func_900(iParam0, iVar0);
			break;
		case 5:
			func_899(iParam0, iVar0);
			break;
		case 4:
			func_901(iParam0, iVar0);
			break;
		case 12:
			func_902(iParam0, iVar0, 0);
			break;
		case 13:
			func_902(iParam0, iVar0, 1);
			break;
		case 7:
			func_904(iParam0, iVar0);
			break;
		case 8:
			func_905(iParam0, iVar0);
			break;
		case 9:
			func_906(iParam0, iVar0);
			break;
		case 10:
			func_907(iParam0, iVar0);
			break;
		case 11:
			func_908(iParam0, iVar0);
			break;
		case 14:
			func_909(iParam0, iVar0);
			break;
		case 16:
			func_911(iParam0, iVar0, 0);
			break;
		case 18:
			func_912(iParam0, iVar0);
			break;
		case 19:
			func_904(iParam0, iVar0);
			break;
		case 20:
			func_908(iParam0, iVar0);
			break;
	}
}

void func_635(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (!func_791(iParam0, &iVar7, &iVar8))
	{
		return;
	}
	switch (func_777(iParam0))
	{
		case 22:
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			if (((Local_15.f_2[iParam0 /*9*/].f_7 != 0 && PED::IS_PED_ON_MOUNT(iVar0)) && func_914(iVar7, iVar8, &iVar9)) && func_445(Local_15.f_2[iParam0 /*9*/].f_7) > iVar9)
			{
				func_915(iParam0);
				return;
			}
			func_916(iParam0);
			break;
		case 23:
			if (!func_792(iVar7, iVar8, &vVar4))
			{
				return;
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				fVar10 = 2.5f;
			}
			else
			{
				fVar10 = 3f;
			}
			if (!func_917(iVar7, iVar8, &fVar11))
			{
				fVar11 = 40000f;
			}
			func_918(iParam0, vVar4, fVar10, fVar11, 1048576000 /* Float: 0.25f */, 0);
			break;
		case 24:
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
			func_919(iParam0, vVar1, 150f, 0);
			break;
	}
}

void func_636(int iParam0, int iParam1)
{
	if (!func_51(iParam0, 2))
	{
		EVENT::_0xBB1E41DD3D3C6250(iParam1, func_920(0), 0);
		EVENT::_0xBB1E41DD3D3C6250(iParam1, func_920(9), 1);
		func_177(iParam0, 2);
	}
	else
	{
		if (func_176(iParam0, 1))
		{
			return;
		}
		if (func_921(iParam0))
		{
			return;
		}
		if (!func_922(iParam0, iParam1, 0) && !func_922(iParam0, iParam1, 1))
		{
			return;
		}
		func_923(iParam0, &(Local_300[Local_557.f_1008 /*8*/]));
	}
}

bool func_637(int iParam0, int iParam1)
{
	return NETWORK::GET_TIME_DIFFERENCE(Local_15.f_2[iParam0 /*9*/].f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) > iParam1;
}

int func_638()
{
	return Global_1102219.f_3672;
}

int func_639(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REL_PLAYER_0");
		case 1:
			return joaat("REL_PLAYER_1");
		case 2:
			return joaat("REL_PLAYER_2");
		case 3:
			return joaat("REL_PLAYER_3");
		case 4:
			return joaat("REL_PLAYER_4");
		case 5:
			return joaat("REL_PLAYER_5");
		case 6:
			return joaat("REL_PLAYER_6");
		case 7:
			return joaat("REL_PLAYER_7");
		case 8:
			return joaat("REL_PLAYER_8");
		case 9:
			return joaat("REL_PLAYER_9");
		case 10:
			return joaat("REL_PLAYER_10");
		case 11:
			return joaat("REL_PLAYER_11");
		case 12:
			return joaat("REL_PLAYER_12");
		case 13:
			return joaat("REL_PLAYER_13");
		case 14:
			return joaat("REL_PLAYER_14");
		case 15:
			return joaat("REL_PLAYER_15");
		case 16:
			return joaat("REL_PLAYER_16");
		case 17:
			return joaat("REL_PLAYER_17");
		case 18:
			return joaat("REL_PLAYER_18");
		case 19:
			return joaat("REL_PLAYER_19");
		case 20:
			return joaat("REL_PLAYER_20");
		case 21:
			return joaat("REL_PLAYER_21");
		case 22:
			return joaat("REL_PLAYER_22");
		case 23:
			return joaat("REL_PLAYER_23");
		case 24:
			return joaat("REL_PLAYER_24");
		case 25:
			return joaat("REL_PLAYER_25");
		case 26:
			return joaat("REL_PLAYER_26");
		case 27:
			return joaat("REL_PLAYER_27");
		case 28:
			return joaat("REL_PLAYER_28");
		case 29:
			return joaat("REL_PLAYER_29");
		case 30:
			return joaat("REL_PLAYER_30");
		case 31:
			return joaat("REL_PLAYER_31");
		default:
			break;
	}
	return joaat("REL_NO_RELATIONSHIP");
}

void func_640(int iParam0)
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 354, true);
	Global_1071686.f_21416.f_1[iParam0 /*8*/].f_4 = MISC::GET_FRAME_COUNT();
}

bool func_641(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return (func_303(iParam0, 1) && !func_303(iParam0, 2));
}

bool func_642(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return func_303(iParam0, 2);
}

int func_643()
{
	return Global_1301323.f_150;
}

bool func_644(int iParam0)
{
	return (Global_1301323.f_288.f_2 && iParam0) != 0;
}

int func_645()
{
	return Global_1301323.f_288;
}

bool func_646()
{
	int iVar0;

	iVar0 = func_924();
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(iVar0, false);
}

void func_647(int iParam0)
{
	Global_1301323.f_288 = iParam0;
}

void func_648(int iParam0)
{
	Global_1301323.f_288.f_1 = iParam0;
}

bool func_649()
{
	return Global_1109804.f_21.f_37;
}

int func_650()
{
	return Global_1109804.f_21.f_37.f_1;
}

void func_651(int iParam0, int iParam1, struct<2> Param2)
{
	struct<28> Var0;
	var uVar31;

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
	SCRIPTS::_0x31010318BA9897AC(&uVar31, PLAYER::PLAYER_ID());
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_4 = 7;
	Var0.f_16 = joaat("IDLE_TIME_RUNNING_OUT_NEAR");
	Var0.f_7 = { Param2 };
	func_456(&Var0, uVar31);
}

void func_652(int iParam0)
{
	func_266(&(Global_1071686.f_23887.f_4), iParam0);
}

bool func_653(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

struct<2> func_654()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_836(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_836(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

void func_655(int iParam0)
{
	Global_1102219.f_3 = (Global_1102219.f_3 || iParam0);
}

void func_656(int iParam0)
{
	func_139(&(Local_557.f_6), iParam0);
}

void func_657(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_536(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (func_537(Var0))
	{
		return;
	}
	if (func_538(Var0))
	{
		return;
	}
	func_541(iParam0, 2);
	func_556(iParam0, 3);
	func_556(iParam0, 6);
	func_925(Var0);
}

void func_658(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_536(iParam0) };
	if (!func_73(Var0))
	{
		return;
	}
	if (!func_537(Var0))
	{
		return;
	}
	if (func_538(Var0))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	}
	if (bParam1)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	func_541(iParam0, 3);
	func_926(Var0, 1, bParam2, bParam3);
}

void func_659(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900688.f_1 == 2 || Global_1900688.f_1 == 5) || Global_1900688.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_65() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_299(Global_1893587.f_2);
	Global_1900688.f_1 = 3;
	Global_1900688.f_2 = 0;
	Global_1900688.f_7 = iVar0;
	Global_1900688.f_8 = iParam0;
	Global_1900688.f_9 = iVar1;
	if (Global_1900688.f_9 != -1 && Global_1900688.f_9 != 0)
	{
		func_301(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
	}
	else if (Global_1900688.f_11 != -1)
	{
		func_301(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_11);
	}
}

Vector3 func_660(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

float func_661(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

char* func_662(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3;
	struct<10> Var10;
	int iVar20;
	int iVar21;

	sVar0 = "Invalid Posse";
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return sVar0;
	}
	iVar1 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (func_927(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1102219.f_17 != Global_1100469[iVar2 /*53*/].f_17)
				{
					sVar0 = func_928(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION())
			{
				sVar0 = func_928(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_929(iVar1) };
				iVar21 = 0;
				while (iVar21 <= (POSSE::_0xC084FF658B2E61DA(&Var3) - 1))
				{
					if (POSSE::_0xC084FF658B2E81DA(&Var3, iVar21, &Var10) && Var10.f_9)
					{
						iVar20 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_931(func_930(Var10.f_1), joaat("COLOR_PURE_WHITE"));
						}
						else
						{
							sVar0 = func_931(func_930(Var10.f_1), iParam2);
						}
					}
					else
					{
						iVar21++;
					}
				}
				if (iVar20 == 0)
				{
					return func_928(iParam0, bParam1, iParam2);
				}
				if (func_932(func_930(Var10.f_1)))
				{
					if (bParam1 == 1 && func_933(iVar1, sVar0))
					{
						sVar0 = func_928(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_928(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_928(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

struct<8> func_663(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

struct<4> func_664(char* sParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, sParam0, 32);
	return cVar0;
}

int func_665(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_289(Local_557.f_584.f_333);
	bVar1 = func_934();
	iVar2 = func_148();
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (iVar4 == 0)
		{
		}
		else if (func_935(iVar4, iVar2, bVar1, bVar0, iParam0, iParam1))
		{
			return iVar4;
		}
		iVar3++;
	}
	return 0;
}

void func_666(int iParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = func_936(iParam0);
	iVar1 = func_937(iParam0);
	sVar2 = func_938(iParam0, iParam1, sParam2);
	func_939(sVar2, iVar1, bVar0);
	if (func_940(iParam0, &iVar3))
	{
		func_185(iVar3);
	}
}

bool func_667(bool bParam0)
{
	if (!func_43(4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_59(2))
	{
		return false;
	}
	if (func_45() && !func_59(262144))
	{
		return false;
	}
	if (!func_59(8))
	{
		return false;
	}
	if (func_90() < 5)
	{
		return false;
	}
	if (func_690(16))
	{
		return false;
	}
	if (!func_690(32) || func_289(Local_557.f_584.f_335))
	{
		return false;
	}
	switch (Local_557.f_20.f_16)
	{
		case 1320143426:
			if (!func_59(134217728))
			{
				return false;
			}
			if (Local_15.f_275 == Local_557.f_20.f_549 && !func_941())
			{
				*bParam0 = 0;
			}
			else
			{
				*bParam0 = 1;
			}
			if (func_43(65536) && func_47(&(Local_300[Local_557.f_1008 /*8*/]), 1024))
			{
				*bParam0 = 1;
			}
			break;
		case joaat("PLAYER"):
			*bParam0 = 0;
			break;
		case joaat("POSSE"):
			*bParam0 = 1;
			break;
	}
	return true;
}

void func_668()
{
	int iVar0;
	int iVar1;

	if (func_45())
	{
		iVar1 = Local_15.f_276;
		if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!func_162(iVar0))
				{
					func_942(&(Local_557.f_584.f_91), 2, iVar0);
				}
				else if (func_163(iVar0))
				{
					func_942(&(Local_557.f_584.f_91), 7, iVar0);
				}
				else
				{
					func_942(&(Local_557.f_584.f_91), 1, iVar0);
				}
				iVar0++;
			}
		}
		else if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192) || func_47(&(Local_300[Local_557.f_1008 /*8*/]), 131072))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!func_162(iVar0))
				{
					func_942(&(Local_557.f_584.f_91), 2, iVar0);
				}
				else if (func_163(iVar0))
				{
					func_942(&(Local_557.f_584.f_91), 8, iVar0);
				}
				else
				{
					func_942(&(Local_557.f_584.f_91), 5, iVar0);
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar1 = Local_557.f_20.f_549;
		if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (iVar0 >= Local_15.f_275)
				{
					func_942(&(Local_557.f_584.f_91), 7, iVar0);
				}
				else
				{
					func_942(&(Local_557.f_584.f_91), 1, iVar0);
				}
				iVar0++;
			}
		}
		else if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 64))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (iVar0 >= Local_15.f_275)
				{
					func_942(&(Local_557.f_584.f_91), 2, iVar0);
				}
				else
				{
					func_942(&(Local_557.f_584.f_91), 1, iVar0);
				}
				iVar0++;
			}
		}
	}
}

void func_669()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_690(64))
	{
		iVar1 = func_943();
		iVar2 = func_944(iVar1);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			func_945(&(Local_557.f_584.f_91), iVar2, iVar0);
			func_946(&(Local_557.f_584.f_91), iVar1, iVar0);
			iVar0++;
		}
		func_185(64);
	}
}

int func_670()
{
	int iVar0;

	if (func_59(134217728))
	{
		iVar0 = (Local_557.f_20.f_4 - NETWORK::GET_TIME_DIFFERENCE(Local_15.f_273, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	else
	{
		iVar0 = (Local_557.f_20.f_2 - NETWORK::GET_TIME_DIFFERENCE(Local_15.f_272, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	return iVar0;
}

int func_671()
{
	if (func_45())
	{
		if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 131072) || func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192))
		{
			return joaat("DEFEND");
		}
		else
		{
			return joaat("ATTACK");
		}
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 64))
	{
		return joaat("DEFEND");
	}
	return joaat("ATTACK");
}

void func_672(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam7 != 0)
	{
		iVar1 = -1;
	}
	if (((func_947(uParam0, &bVar0) && func_948(uParam0)) && func_949(uParam0, uParam1, iParam7, 0, 0, 0, 0)) && func_950(uParam0, -213385216, &bVar0))
	{
		func_951(uParam0, iParam2, bParam3, iParam4, sParam5);
		func_952(uParam1, iParam6, bParam8, bParam9, bParam10, iVar1, 0);
	}
	if (bVar0)
	{
		func_287(uParam1, 0, 0);
		func_288(uParam0, 1);
	}
}

void func_673(int iParam0)
{
	if ((Local_15.f_2[iParam0 /*9*/].f_2 == 0 || func_778()) || !func_690(32))
	{
		func_284(iParam0);
		return;
	}
	if (func_953(iParam0))
	{
		func_954(iParam0);
	}
	else if (func_955(iParam0))
	{
		func_956(iParam0);
	}
	else if (func_957(iParam0))
	{
		func_144(iParam0);
	}
	else
	{
		func_284(iParam0);
	}
}

void func_674(int iParam0)
{
	int iVar0;

	if (!func_45())
	{
		return;
	}
	if (Local_15.f_234[iParam0 /*2*/] == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (Local_15.f_234[iParam0 /*2*/] == 255)
	{
		return;
	}
	if (func_958(iParam0))
	{
		if (Local_557.f_584.f_31[iParam0] == Local_15.f_234[iParam0 /*2*/])
		{
			return;
		}
		iVar0 = Local_15.f_234[iParam0 /*2*/];
		func_959(iVar0, -2145527776);
		func_960(iVar0, joaat("BLIP_AMBIENT_VIP"));
		Local_557.f_584.f_31[iParam0] = Local_15.f_234[iParam0 /*2*/];
		func_961(Local_15.f_234[iParam0 /*2*/]);
		func_962(iVar0, joaat("VIP"));
	}
	else if (func_963(iParam0))
	{
		if (Local_557.f_584.f_31[iParam0] == Local_15.f_234[iParam0 /*2*/])
		{
			return;
		}
		iVar0 = Local_15.f_234[iParam0 /*2*/];
		func_960(iVar0, joaat("BLIP_MP_DEFEND_TARGET"));
		func_959(iVar0, -1384718582);
		Local_557.f_584.f_31[iParam0] = Local_15.f_234[iParam0 /*2*/];
		func_502(Local_15.f_234[iParam0 /*2*/]);
		func_962(iVar0, joaat("VIP"));
	}
	else
	{
		func_290(iParam0);
	}
}

void func_675()
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_557.f_7.f_9);
	if (func_964(iVar0))
	{
		func_965(Local_557.f_7.f_9);
	}
	else
	{
		func_291(Local_557.f_7.f_9);
	}
}

bool func_676()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_59(67108864))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (func_411(Global_35, Local_557.f_20.f_7) > Local_557.f_20.f_19)
	{
		return false;
	}
	return true;
}

void func_677()
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23))
	{
		return;
	}
	iVar0 = 1;
	Local_557.f_584.f_23 = MAP::_BLIP_ADD_FOR_COORD(func_966(iVar0), Local_557.f_20.f_10);
	if (func_967(iVar0, &iVar1))
	{
		MAP::SET_BLIP_SPRITE(Local_557.f_584.f_23, iVar1, false);
	}
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_557.f_584.f_23, func_968());
	if (func_690(131072))
	{
		MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_23, 231194138);
	}
	if (func_690(32768))
	{
		MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_23, -1878373110);
	}
}

bool func_678()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_43(32768))
	{
		return false;
	}
	if (func_90() != 5 || func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (!func_969())
	{
		return false;
	}
	return true;
}

void func_679()
{
	vector3 vVar0;

	if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_22))
	{
		return;
	}
	vVar0 = { Local_557.f_20.f_7 + Vector(0f, Local_15.f_271, Local_15.f_270) };
	Local_557.f_584.f_22 = MAP::_BLIP_ADD_FOR_RADIUS(-308585968, vVar0, Local_557.f_20.f_19);
	MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_22, -521680853);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_557.f_584.f_22, func_970());
	if (func_690(65536))
	{
		MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_22, 231194138);
	}
	if (func_690(16384))
	{
		MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_22, -1878373110);
	}
}

bool func_680()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (func_90() != 5 || func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (!func_43(65536))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 256))
	{
		return false;
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 1024))
	{
		return false;
	}
	return true;
}

void func_681()
{
	if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_22))
	{
		return;
	}
	Local_557.f_584.f_22 = MAP::_BLIP_ADD_FOR_RADIUS(-308585968, Local_557.f_20.f_7, Local_557.f_20.f_19);
	MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_22, -521680853);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_557.f_584.f_22, func_971());
	MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_22, -1878373110);
}

bool func_682(int iParam0)
{
	if (!MISC::_0x80E9C316EF84DD81(&(Local_557.f_921[iParam0 /*4*/].f_1)))
	{
		return false;
	}
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (func_90() != 5 || func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_557.f_921[iParam0 /*4*/]))
	{
		return false;
	}
	if (func_43(65536) && !func_47(&(Local_300[Local_557.f_1008 /*8*/]), 1024))
	{
		return false;
	}
	return true;
}

void func_683(int iParam0)
{
	int iVar0;

	if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_24[iParam0]))
	{
		return;
	}
	iVar0 = MAP::_0xA6EF0C54A3443E70(408396114, Local_557.f_921[iParam0 /*4*/]);
	MAP::_BLIP_SET_MODIFIER(iVar0, 1995761918);
	MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
	Local_557.f_584.f_24[iParam0] = iVar0;
}

void func_684()
{
	if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23))
	{
		if (func_690(128))
		{
			func_972();
		}
		else
		{
			func_973();
		}
	}
	else
	{
		func_974();
	}
	if (func_975())
	{
		if (func_690(131072) || func_690(65536))
		{
			if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23))
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584.f_23, 231194138);
			}
			if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_22))
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584.f_22, 231194138);
			}
			func_656(131072);
			func_656(65536);
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23) && !func_690(128))
	{
		if (!func_690(131072))
		{
			MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_23, 231194138);
			if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_22))
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584.f_22, 231194138);
			}
			func_185(131072);
			func_656(65536);
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_22))
	{
		if (!func_690(65536))
		{
			if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23))
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584.f_23, 231194138);
			}
			MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_22, 231194138);
			func_656(131072);
			func_185(65536);
		}
	}
}

bool func_685()
{
	if (!func_43(4))
	{
		return false;
	}
	if (func_690(32))
	{
		return false;
	}
	if (!func_43(1))
	{
		return false;
	}
	if (!func_59(2))
	{
		return false;
	}
	if (func_45() && !func_59(262144))
	{
		return false;
	}
	if (func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	if (CAM::_0xA2B1C7EF759A63CE() > 0f && !CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	return true;
}

char* func_686(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_148();
	bVar1 = func_45();
	switch (iVar0)
	{
		case 2:
			if (bVar1)
			{
				if (Local_557.f_20.f_16 == joaat("POSSE"))
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_START_PVP", func_931(func_662(Local_15.f_284, 1, 0), joaat("COLOR_RED")));
				}
				else
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_START_PVP", func_931(PLAYER::GET_PLAYER_NAME(Local_15.f_234[0 /*2*/]), joaat("COLOR_RED")));
				}
			}
			if (bParam0)
			{
				if (!func_138(Local_557.f_20.f_15, 33554432))
				{
					return "NET_AS_SHARD_BODY_START_ST_SEARCH";
				}
				return "NET_AS_SHARD_BODY_START_ST";
			}
			if (!func_138(Local_557.f_20.f_15, 33554432))
			{
				return "NET_AS_SHARD_BODY_START_SEARCH";
			}
			return "NET_AS_SHARD_BODY_START";
		case 3:
			if (bParam0)
			{
				return "NET_AS_SHARD_BODY_START_ST_C";
			}
			return "NET_AS_SHARD_BODY_START_C";
		case 1:
			if (Local_557.f_20.f_16 == joaat("POSSE"))
			{
				return "NET_AS_SHARD_BODY_START_POSSE";
			}
			return "NET_AS_SHARD_BODY_START_TARGET";
		case 4:
			return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_START_ALLY", func_931(PLAYER::GET_PLAYER_NAME(Local_15.f_234[0 /*2*/]), joaat("COLOR_POSSE_ALLY")));
		default:
			break;
	}
	return "";
}

void func_687(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	Local_557.f_584.f_335 = func_977(func_976(), sParam0);
}

bool func_688()
{
	if (func_690(16))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 65536))
	{
		return true;
	}
	if (!func_43(4))
	{
		return false;
	}
	if (!func_59(64) && !func_59(32))
	{
		return false;
	}
	if (func_385())
	{
		return false;
	}
	return true;
}

void func_689(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	bVar2 = (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4) && !func_43(16777216));
	func_306(bVar2, &iVar0, &iVar1);
	bVar3 = iVar1 == true;
	bVar4 = !bVar2;
	Local_557.f_584.f_335 = func_979(func_976(), func_978(iParam0, bVar3), iVar0, iVar1, bVar4);
}

bool func_690(int iParam0)
{
	return func_138(Local_557.f_6, iParam0);
}

bool func_691()
{
	if (!func_43(65536))
	{
		return false;
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 1024))
	{
		return false;
	}
	if (func_59(536870912) && func_47(&(Local_300[Local_557.f_1008 /*8*/]), 1024))
	{
		return false;
	}
	return true;
}

void func_692(int iParam0, int iParam1)
{
	if (func_289(Local_557.f_584.f_334) && Local_557.f_584.f_336 == iParam0)
	{
		return;
	}
	func_134();
	Local_557.f_584.f_336 = iParam0;
	Local_557.f_584.f_334 = func_981(func_980(iParam0), iParam1, 0, 0, 0, 1);
}

bool func_693()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (Local_557.f_20 == joaat("ASSASSINATION_TRACKING") && !func_941())
	{
		return false;
	}
	return true;
}

bool func_694()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_2 != joaat("TARGET"))
		{
		}
		else if (!func_431(iVar0, &(Local_300[Local_557.f_1008 /*8*/])))
		{
		}
		else
		{
			iVar1++;
			if (iVar1 <= 1)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_695()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return false;
	}
	if (func_59(33554432))
	{
		return false;
	}
	if (func_941())
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	return true;
}

bool func_696()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 64))
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	return true;
}

bool func_697()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192))
	{
		return false;
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 16384))
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	return true;
}

bool func_698()
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192))
	{
		if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 131072))
		{
			return false;
		}
	}
	else if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 16384))
	{
		return false;
	}
	if (Local_15.f_275 <= 0)
	{
		return false;
	}
	if (func_90() != 5)
	{
		return false;
	}
	if (func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	return true;
}

void func_699(int iParam0)
{
	int iVar0;

	func_285(&(Local_557.f_584.f_24[iParam0]));
	if (VOLUME::_DOES_VOLUME_EXIST(Local_557.f_921[iParam0 /*4*/]))
	{
		VOLUME::_DELETE_VOLUME(Local_557.f_921[iParam0 /*4*/]);
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_557.f_921[iParam0 /*4*/].f_1), iVar0))
		{
		}
		else
		{
			func_295(iVar0, 262144);
			MISC::_0xB909149F2BB5F6DA(&(Local_557.f_921[iParam0 /*4*/].f_1), iVar0);
		}
		iVar0++;
	}
	MISC::_0xD2D74F89DF844A50(&(Local_557.f_921[iParam0 /*4*/].f_1));
}

bool func_700(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_701(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_702(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_703(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_704(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_982(iParam0);
	if (!func_983(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_984(128) && !func_985(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_986() == 4)
	{
		func_143(18);
	}
	func_987(1024);
}

void func_705(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_706(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_707(struct<29> Param0, var uParam29, int iParam30)
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

void func_708(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_709(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

int func_710(int iParam0)
{
	return iParam0;
}

int func_711()
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, 484707754, 0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

bool func_712(int iParam0, var uParam1)
{
	struct<5> Var0;

	if ((func_119(&Var0) && func_120(&Var0, -787028349, iParam0, 0)) && func_347(Var0, -81907729, uParam1, 0))
	{
		return true;
	}
	return false;
}

float func_713(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return MISC::ATAN2(vVar0.x, vVar0.y);
}

bool func_714(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	vector3 vVar11;
	var uVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;

	if (Local_557.f_952.f_4 > 30)
	{
		return true;
	}
	if (!func_119(&Var0) || !func_120(&Var0, 1525953930, iParam0, 0))
	{
		return true;
	}
	iVar5 = func_988(iParam0);
	iVar15 = ITEMSET::CREATE_ITEMSET(true);
	iVar20 = 0;
	while (iVar20 < iVar5)
	{
		Var6 = { Var0 };
		if ((!func_120(&Var6, -1839855939, iVar20, 0) || !func_347(Var6, -81907729, &vVar11, 1)) || !func_348(Var6, 1158526802, &uVar14, 1))
		{
		}
		else
		{
			iVar15 = ITEMSET::CREATE_ITEMSET(true);
			if (!ITEMSET::IS_ITEMSET_VALID(iVar15))
			{
			}
			else
			{
				iVar17 = VOLUME::_0x2B32B11520626229(vVar11, uVar14, iVar15);
				iVar18 = 0;
				while (iVar18 < iVar17)
				{
					iVar16 = MISC::_0xF18AF483DF70BBDE(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar18, iVar15));
					if (!VOLUME::_DOES_VOLUME_EXIST(iVar16))
					{
					}
					else if (!VOLUME::_0xCA5C90D40665D5CE(iVar16, 2) && !VOLUME::_0xCA5C90D40665D5CE(iVar16, 3))
					{
					}
					else
					{
						VOLUME::_0x3EFABB21E14A6BD1(iVar16, 2, 0);
						VOLUME::_0x3EFABB21E14A6BD1(iVar16, 3, 0);
						bVar19 = true;
					}
					iVar18++;
				}
				ITEMSET::DESTROY_ITEMSET(iVar15);
			}
		}
		iVar20++;
	}
	Local_557.f_952.f_4++;
	if (!bVar19)
	{
		return false;
	}
	return true;
}

bool func_715(int iParam0)
{
	return MISC::_0x8F4F050054005C27(&(Local_557.f_992), iParam0);
}

bool func_716(int iParam0)
{
	if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_557.f_980[iParam0], Global_35))
	{
		return false;
	}
	switch (func_989(iParam0))
	{
		case 1823139082:
			if (!func_43(4))
			{
				return false;
			}
			break;
		case -1913113499:
		default:
			break;
	}
	if (func_447())
	{
		return false;
	}
	return true;
}

void func_717(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_557.f_992), iParam0);
}

bool func_718(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_557.f_1008;
	}
	return MISC::_0x8F4F050054005C27(&(Local_300[iParam1 /*8*/].f_6), iParam0);
}

Vector3 func_719(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_720(int iParam0, int iParam1, var uParam2, bool bParam3, var uParam4)
{
	struct<5> Var0;
	var uVar5;

	if (!func_990(iParam0, &Var0))
	{
		return false;
	}
	if (func_117(Var0, -401087351, &uVar5, 0))
	{
		*iParam1 = uVar5;
	}
	else
	{
		return false;
	}
	if (!func_347(Var0, -81907729, uParam2, 0))
	{
		return false;
	}
	*bParam3 = func_347(Var0, 861602793, uParam4, 0);
	return true;
}

int func_721(int iParam0, int iParam1)
{
	struct<5> Var0;
	bool bVar5;

	if (!func_990(iParam0, &Var0))
	{
		return 0;
	}
	*iParam1 = 0;
	if (func_346(Var0, -235687863, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 8;
	}
	if (!func_346(Var0, -1269124321, &bVar5, 0) || !bVar5)
	{
		*iParam1 |= 32768;
	}
	if (func_346(Var0, -1438322653, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 16;
	}
	if (func_346(Var0, 673047879, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 8192;
	}
	if (func_346(Var0, -1918016700, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 2;
	}
	return 1;
}

Vector3 func_722(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	if (func_459(iParam0, &Var0))
	{
		func_347(Var0, -81907729, &vVar5, 0);
	}
	return vVar5;
}

float func_723(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_459(iParam0, &Var0))
	{
		func_348(Var0, 724299998, &uVar5, 0);
	}
	return uVar5;
}

Vector3 func_724(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	if (func_459(iParam0, &Var0))
	{
		func_347(Var0, 861602793, &vVar5, 0);
	}
	return vVar5;
}

int func_725(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (!func_459(iParam0, &Var0) || !func_117(Var0, 597233769, &iVar5, 0))
	{
		return 1;
	}
	switch (iVar5)
	{
		case joaat("PROPSET_SNAP_TO_GROUND"):
			return 0;
		case joaat("PROPSET_ALIGN_TO_GROUND"):
			return 1;
		case 1390021295:
			return 4;
		case -656190934:
			return 5;
		case joaat("ALIGN_AS_ONE"):
			return 7;
		default:
			break;
	}
	return 1;
}

bool func_726(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!func_991(iParam1))
	{
		return false;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return false;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (func_992(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(1054492269, vParam2, true, false, true, true));
	}
	else if (func_993(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(-950361972, vParam2, true, false, true, true));
	}
	else if (iParam8 != 0 && VEHICLE::_0xB9D5BDDA88E1BB66(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_DRAFT_VEHICLE(iParam1, vParam2, bParam5, true, bParam6, bParam7, iParam8, bParam9));
	}
	else
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::CREATE_VEHICLE(iParam1, vParam2, bParam5, true, bParam6, bParam7, bParam9));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_727(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_991(iParam1))
	{
		return false;
	}
	iVar0 = func_994(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_728(int iParam0, bool bParam1, bool bParam2)
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

bool func_729(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_991(iParam1))
	{
		return false;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, true, bParam5, false, false, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_730()
{
	if (Local_557.f_1014 != 0)
	{
		if (func_445(Local_557.f_1014) > 15000)
		{
			return true;
		}
		return false;
	}
	Local_557.f_1014 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return false;
}

int func_731(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	bool bVar5;
	int iVar6;

	if (((((func_116(iParam0, &Var0) && func_346(Var0, -1133284398, &bVar5, 0)) && bVar5) && func_345(Var0, 101317385, iParam1, 0)) && *iParam1 >= 0) && *iParam1 < 18)
	{
		func_117(Var0, -1463370342, &iVar6, 0);
		*iParam2 = func_995(iVar6);
		return 1;
	}
	return 0;
}

bool func_732(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0) && func_117(Var0, 350192982, &uVar5, 0))
	{
		*iParam1 = uVar5;
		return true;
	}
	return false;
}

bool func_733(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && func_345(Var0, 1475346163, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_734(int iParam0)
{
	struct<5> Var0;
	bool bVar5;

	if ((func_116(iParam0, &Var0) && func_346(Var0, -2076494195, &bVar5, 0)) && bVar5)
	{
		return true;
	}
	return false;
}

bool func_735(struct<5> Param0, int iParam5, int iParam6)
{
	var uVar0;

	if (func_117(Param0, iParam5, &uVar0, 0))
	{
		*iParam6 = uVar0;
		return true;
	}
	return false;
}

Vector3 func_736(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	func_116(iParam0, &Var0);
	func_347(Var0, 1322693839, &vVar5, 0);
	return vVar5;
}

float func_737(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	func_348(Var0, -1919876099, &uVar5, 0);
	return uVar5;
}

bool func_738(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_991(iParam2))
	{
		return false;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		iVar0 = NETWORK::NET_TO_VEH(iParam1);
		iVar1 = func_996(iVar0, iParam2, iParam3, 1, bParam4, !bParam5);
		*uParam0 = NETWORK::PED_TO_NET(iVar1);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam5)
			{
				WEAPON::_0x899A04AFCC725D04(iVar1, WEAPON::_0xD42514C182121C23(iParam2));
			}
			if (bParam6)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam2));
			}
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar1, 0);
			if (bParam4)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_739(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;

	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_991(iParam2))
	{
		return false;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		iVar1 = func_997(iVar0, iParam2, iParam3, 1, bParam4, !bParam5, bParam7);
		*uParam0 = NETWORK::PED_TO_NET(iVar1);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam5)
			{
				WEAPON::_0x899A04AFCC725D04(iVar1, WEAPON::_0xD42514C182121C23(iParam2));
			}
			if (bParam6)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam2));
			}
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar1, 0);
			if (bParam4)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

void func_740(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	var uVar21;
	float fVar22;

	if (Local_557.f_20.f_22[iParam0 /*19*/] == 0)
	{
		return;
	}
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	if (!func_116(iParam0, &Var1))
	{
		return;
	}
	func_998(iParam0, Var1);
	Local_15.f_2[iParam0 /*9*/].f_2 = Local_557.f_20.f_22[iParam0 /*19*/];
	if (Local_15.f_2[iParam0 /*9*/].f_2 == joaat("POSSIBLE_TARGET"))
	{
		if (func_248(iParam0))
		{
			Local_15.f_2[iParam0 /*9*/].f_2 = joaat("TARGET");
		}
		else
		{
			Local_15.f_2[iParam0 /*9*/].f_2 = joaat("EXTRA");
		}
	}
	if (func_732(iParam0, &iVar6) || func_733(iParam0, &iVar7))
	{
		if (iVar6 != 0)
		{
			PED::_SET_PED_BODY_COMPONENT(iVar0, iVar6);
		}
		else
		{
			PED::_SET_PED_OUTFIT_PRESET(iVar0, iVar7, false);
		}
		PED::_UPDATE_PED_VARIATION(iVar0, false, true, true, true, false);
	}
	if (func_999(iParam0, &uVar8))
	{
		PED::_0x89F5E7ADECCCB49C(iVar0, func_110(&uVar8));
	}
	if (func_51(iParam0, 32))
	{
		func_1000(iVar0);
	}
	if (!func_51(iParam0, 65536) && func_54(iParam0, &iVar16, 1))
	{
		func_1000(iVar16);
	}
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iVar0, false);
	WEAPON::_0x431240A58484D5D0(iVar0, 0);
	WEAPON::_0x45E57FDD531C9477(iVar0, 0);
	iVar17 = func_23(iParam0);
	if (PED::IS_PED_HUMAN(iVar0))
	{
		if (((WEAPON::_IS_WEAPON_MELEE(iVar17) || iVar17 == joaat("WEAPON_UNARMED")) && iVar17 != joaat("WEAPON_MELEE_LANTERN")) && !func_176(iParam0, 268435456))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 93, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 50, true);
			PED::_0x815C0074A1BC0D93(iVar0, 2);
		}
		if (func_734(iParam0))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, false, true);
		}
		if (func_118(iVar17))
		{
			if (iVar17 == joaat("WEAPON_MELEE_LANTERN") && func_176(iParam0, 131072))
			{
				func_863(iVar0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			func_863(iVar0, iVar17, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		if ((!func_51(iParam0, 1) && !func_176(iParam0, 131072)) && Local_557.f_20.f_22[iParam0 /*19*/].f_10 != joaat("WAIT_FOR_AMBUSH"))
		{
			WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, true);
		}
		if (func_1001(iParam0, &iVar18))
		{
			PED::SET_PED_ACCURACY(iVar0, iVar18);
		}
		else
		{
			PED::SET_PED_ACCURACY(iVar0, 20);
		}
		PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 108, false);
		PED::_SET_PED_DAMAGE_MODIFIER(iVar0, 0.48f);
		if (!func_176(iParam0, 4096))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
		}
		if (func_176(iParam0, 8) || func_176(iParam0, 1024))
		{
			PED::_0x85F500F4E24CA43E(iVar0, 0f);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
	PED::SET_PED_SEEING_RANGE(iVar0, func_1002(iParam0));
	PED::SET_PED_HEARING_RANGE(iVar0, func_1003(iParam0));
	if (func_1004(iParam0, &iVar19))
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, iVar19);
		ENTITY::_SET_ENTITY_HEALTH(iVar0, iVar19, 0);
	}
	if (func_53(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 170, true);
	}
	if (func_176(iParam0, 128))
	{
		PED::SET_PED_AS_COP(iVar0, false);
		LAW::_0x819ADD5EF1742F47(iVar0, 7);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 39, true);
	}
	if (func_176(iParam0, 4096))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 4, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
		PED::_0xB8DE69D9473B7593(iVar0, 0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 146, false);
	}
	else
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
	}
	if (func_176(iParam0, 4096) || func_176(iParam0, 128))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, true);
	}
	if (Local_557.f_20.f_22[iParam0 /*19*/].f_14 > -1 && Local_557.f_20.f_22[iParam0 /*19*/].f_14 < Local_557.f_20.f_550)
	{
		PED::_0xFC3DB99C8144CD81(iVar0, Local_557.f_962[Local_557.f_20.f_22[iParam0 /*19*/].f_14], 0, 0, 0);
	}
	if (func_478(Local_15.f_2[iParam0 /*9*/].f_2))
	{
		PED::_0x2E5B5D1F1453E08E(iVar0, 3);
		PED::_0x5BCF0B79D4F5DBA3(iVar0, 15f);
		PED::_0x29924EB8EE9DB926(iVar0, 20f);
	}
	if (func_1005(iParam0, &fVar20, &uVar21, &fVar22))
	{
		TASK::_0x3AD8EFF9703BE657(iVar0, fVar20);
		TASK::_0xE8C296B75EACC357(iVar0, uVar21);
		TASK::_0x88E32DB8C1A4AA4B(iVar0, fVar22);
	}
	if (Global_1901947.f_166.f_31)
	{
		if (func_176(iParam0, 128))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 127, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
		}
	}
	if (Local_15.f_2[iParam0 /*9*/].f_2 == joaat("TARGET"))
	{
		Local_15.f_275++;
	}
}

int func_741(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -867387895, iParam0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_742(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (func_119(&Var0) && func_120(&Var0, -867387895, iParam0, 0))
	{
		func_117(Var0, -1652447499, &iVar5, 0);
	}
	switch (iVar5)
	{
		case 1944715782:
			return 1;
		case -505604945:
			return 2;
		case joaat("CHAT"):
			return 3;
		case 1711299255:
			return 4;
		case joaat("RANDOM"):
			return 5;
		default:
			break;
	}
	return 0;
}

int func_743(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (func_119(&Var0) && func_120(&Var0, -867387895, iParam0, 0))
	{
		func_117(Var0, 1082010721, &iVar5, 0);
	}
	switch (iVar5)
	{
		case joaat("LOOSE"):
			return 0;
		case 1600602149:
			return 1;
		case 1427081770:
			return 2;
		case joaat("LINE_ABREAST"):
			return 3;
		case joaat("FOLLOW_IN_LINE"):
			return 4;
		case -148474395:
			return 6;
		case -2085386658:
			return 7;
		case -1989565558:
			return 8;
		case joaat("TWO_BY_TWO"):
			return 9;
		case 1097860881:
			return 10;
		default:
			break;
	}
	return 5;
}

bool func_744(int iParam0)
{
	int iVar0;

	if (Global_1056141[iParam0 /*471*/].f_2 != -1)
	{
		return true;
	}
	iVar0 = func_1006(iParam0);
	if (iVar0 == 2 || iVar0 == 1)
	{
		return true;
	}
	if (func_1007(iParam0, 1))
	{
		return true;
	}
	if (func_1008(1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_745(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

int func_746(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_1009(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1100469[iVar3 /*53*/].f_18);
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
	if (iVar1 < Global_1901947.f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947.f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947.f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947.f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947.f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947.f_716.f_36)
	{
		return 5;
	}
	return 6;
}

int func_747(int iParam0)
{
	return func_1010(func_746(iParam0, 0));
}

bool func_748(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_744(iParam0))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (iVar0 == iParam0)
		{
		}
		else if (!SCRIPTS::_0x72B2E00C9BAC6789(&uParam1, iVar1))
		{
		}
		else if (!GANG::_0x3F59FE6F37869576(iParam0, iVar0))
		{
		}
		else if (!func_744(iVar0))
		{
		}
		else
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_749(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
		}
		else if (GANG::_0x901E0DC25080C8B9(iVar3) != iParam0)
		{
		}
		else
		{
			iVar1 = func_746(iVar3, 0);
			if (iVar1 <= iVar0)
			{
			}
			else
			{
				iVar0 = iVar1;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_750(int iParam0)
{
	return func_1010(func_749(iParam0));
}

bool func_751()
{
	if (func_59(134217728))
	{
		return false;
	}
	if (Local_557.f_20.f_16 != 1320143426)
	{
		return false;
	}
	if (((Local_557.f_20.f_549 == Local_15.f_275 && func_670() > Local_557.f_20.f_4) && !func_472(512)) && !func_59(1024))
	{
		return false;
	}
	return true;
}

void func_752()
{
	if (func_59(134217728))
	{
		return;
	}
	Local_15.f_273 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_100(134217728);
}

bool func_753()
{
	if (!func_59(8))
	{
		return false;
	}
	if (func_59(16777216))
	{
		if (func_59(134217728))
		{
			return NETWORK::GET_TIME_DIFFERENCE(Local_15.f_273, NETWORK::GET_NETWORK_TIME_ACCURATE()) > Local_557.f_20.f_4;
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(Local_15.f_272, NETWORK::GET_NETWORK_TIME_ACCURATE()) > Local_557.f_20.f_2;
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(Local_15.f_272, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 40000;
}

bool func_754(var uParam0, int iParam1)
{
	if (func_119(uParam0) && func_120(uParam0, 1823038874, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_755(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_2 == joaat("WAVE_PED") || Local_15.f_2[iVar0 /*9*/].f_2 == 0)
		{
		}
		else if (iParam0 != -1 && Local_557.f_20.f_22[iVar0 /*19*/].f_12 != iParam0)
		{
		}
		else if (!func_176(iVar0, 1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_756()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		switch (Local_15.f_2[iVar0 /*9*/].f_2)
		{
			case 0:
				break;
				break;
			default:
				iVar1++;
				break;
		}
		iVar0++;
	}
	return iVar1;
}

void func_757(int iParam0)
{
	func_139(&(Local_15.f_1), iParam0);
}

bool func_758(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_47(&(Local_300[iVar0 /*8*/]), iParam0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1)))
			{
			}
			else
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_759(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	float fVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	if (Local_15.f_222.f_2 == -1)
	{
		if (!func_1011(&iVar0))
		{
			return true;
		}
		Local_15.f_222.f_2 = iVar0;
	}
	iVar0 = Local_15.f_222.f_2;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iVar0 /*9*/]))
	{
		return true;
	}
	if (!func_121(&Var1, iParam0, iParam1))
	{
		return true;
	}
	if (!func_583(Var1))
	{
		return true;
	}
	func_735(Var1, -486752250, &iVar6);
	func_347(Var1, -81907729, &vVar8, 0);
	func_348(Var1, 724299998, &fVar11, 0);
	func_346(Var1, 917283806, &bVar14, 0);
	iVar16 = 1;
	if (bVar14)
	{
		iVar16++;
	}
	iVar17 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false);
	iVar18 = (iVar17 - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false));
	if (iVar18 < iVar16)
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS((iVar17 + (iVar16 - iVar18)));
		if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) < (iVar17 + (iVar16 - iVar18)))
		{
			return true;
		}
	}
	if (!STREAMING::IS_MODEL_VALID(iVar6))
	{
		return true;
	}
	if (func_452(vVar8))
	{
		return true;
	}
	if (bVar14)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iVar0 /*9*/].f_1))
		{
			func_727(&(Local_15.f_2[iVar0 /*9*/].f_1), func_29(iParam0, iParam1), vVar8, fVar11, 1, 0, 1, 1, 1);
			return false;
		}
		if (!func_739(&(Local_15.f_2[iVar0 /*9*/]), Local_15.f_2[iVar0 /*9*/].f_1, iVar6, -1, 1, 1, 1, 0))
		{
			return false;
		}
	}
	else if (!func_727(&(Local_15.f_2[iVar0 /*9*/]), iVar6, vVar8, fVar11, 1, 0, 1, 1, 1))
	{
		return false;
	}
	func_117(Var1, 256341061, &iVar12, 0);
	iVar7 = iVar12;
	func_345(Var1, 1533007347, &iVar13, 0);
	func_346(Var1, -827172890, &bVar15, 0);
	iVar19 = -1;
	func_345(Var1, -412523681, &iVar19, 0);
	func_1012(iVar0, iVar7, bVar15, iVar13, iVar19);
	Local_15.f_2[iVar0 /*9*/].f_8 = func_1013(iParam0, iParam1);
	return true;
}

void func_760(int iParam0)
{
	if (Local_15.f_275 > 1)
	{
		func_174(2, iParam0, func_173(0, 8), Local_15.f_234[iParam0 /*2*/]);
	}
	if (Local_15.f_275 > 0)
	{
		Local_15.f_275 = (Local_15.f_275 - 1);
	}
	if (Local_15.f_276 > 0)
	{
		Local_15.f_276 = (Local_15.f_276 - 1);
	}
	Local_15.f_234[iParam0 /*2*/] = 255;
}

bool func_761(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

bool func_762(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (((func_116(iParam0, &Var0) && func_345(Var0, 691956863, iParam1, 0)) && *iParam1 >= 0) && *iParam1 < 21)
	{
		return true;
	}
	return false;
}

bool func_763(int iParam0)
{
	int iVar0;

	if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("EVENT_DAMAGE")))
	{
		return true;
	}
	if (TASK::_0xF330A5C062B29BED(iParam0))
	{
		return true;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(iParam0, false);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && PED::IS_PED_A_PLAYER(iVar0))
	{
		return true;
	}
	return false;
}

bool func_764(int iParam0, int iParam1, float fParam2, var uParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = fParam2;
	*uParam3 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_47(&(Local_300[iVar2 /*8*/]), 4))
		{
		}
		else if (!func_718(iParam0, iVar2))
		{
		}
		else if (!func_396(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			fVar1 = func_1014(iParam1, PLAYER::GET_PLAYER_PED(iVar3), 1, 1);
			if (fVar1 > fVar0)
			{
			}
			else
			{
				fVar0 = fVar1;
				*uParam3 = iVar3;
			}
		}
		iVar2++;
	}
	if (*uParam3 == 255)
	{
		return false;
	}
	return true;
}

bool func_765(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, true) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_47(&(Local_300[iVar0 /*8*/]), 4))
		{
		}
		else if (!func_396(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			fVar5 = func_661(PLAYER::GET_PLAYER_PED(iVar1), vVar2, 1);
			if (fVar5 > fParam1)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_766(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	*iParam1 = -1;
	*iParam2 = -1;
	if (!func_116(iParam0, &Var0))
	{
		return false;
	}
	if (!func_345(Var0, 1059929194, iParam1, 0))
	{
		return false;
	}
	func_345(Var0, 871643656, iParam2, 0);
	return true;
}

bool func_767(int iParam0)
{
	if (iParam0 >= 6 || iParam0 < 0)
	{
		return false;
	}
	return true;
}

bool func_768(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;

	if (!func_52(iParam0, &iVar1, 1, 0))
	{
		return false;
	}
	if (PED::IS_PED_BEING_STEALTH_KILLED(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_BEING_STUNNED(iVar1, 0))
	{
		return false;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	iVar8 = 0;
	while (iVar8 < Local_557.f_20.f_548)
	{
		if (iVar8 == iParam0)
		{
		}
		else if (func_319(iVar8) != 1583594396)
		{
		}
		else if (!func_52(iVar8, &iVar0, 0, 0))
		{
		}
		else
		{
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
			if (BUILTIN::VDIST(vVar5, vVar2) > 25f)
			{
			}
			else if ((vVar5.z - vVar2.z) > 4.5f)
			{
			}
			else if (ENTITY::IS_ENTITY_IN_WATER(iVar0))
			{
			}
			else if (!func_1015(iVar1, iVar0, 100f))
			{
			}
			else if (!ENTITY::_0x0C9DBF48C6BA6E4C(iVar1, vVar5, 339))
			{
			}
			else if (func_1016(vVar2, vVar5))
			{
			}
			else
			{
				return true;
			}
		}
		iVar8++;
	}
	return false;
}

bool func_769(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (((PED::IS_PED_BEING_STEALTH_KILLED(iParam1) || PED::IS_PED_BEING_STUNNED(iParam1, 0)) || PED::IS_PED_FATALLY_INJURED(iParam1)) || PED::GET_PED_CONFIG_FLAG(iParam1, 11, false))
	{
		return false;
	}
	if (!bParam3 && TASK::_0xF330A5C062B29BED(iParam1))
	{
		return true;
	}
	if (PED::_0xB655DB7582AEC805(iParam1))
	{
		return true;
	}
	if (!bParam3 && PED::IS_PED_IN_COMBAT(iParam1, 0))
	{
		return true;
	}
	if (bParam2)
	{
		if (PED::_IS_PED_LASSOED(iParam1))
		{
			return true;
		}
		if (PED::IS_PED_FLEEING(iParam1))
		{
			return true;
		}
		if (PED::IS_PED_BEING_JACKED(iParam1))
		{
			return true;
		}
		if (PED::_0xC8D523BF5BBD3808(iParam1, joaat("EVENT_SHOCKING_SEEN_PED_KILLED")))
		{
			return true;
		}
		if (bParam2 && PED::_0xC8D523BF5BBD3808(iParam1, joaat("EVENT_SHOCKING_DEAD_BODY")))
		{
			return true;
		}
		if (func_1017(iParam0))
		{
			return true;
		}
	}
	if (!bParam3 && PED::_0x77525BBF433F2CD6(iParam1))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("EVENT_SHOT_FIRED_BULLET_IMPACT")))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("EVENT_SHOT_FIRED_WHIZZED_BY")))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("EVENT_SHOT_FIRED_BASE")))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("EVENT_SHOT_FIRED")))
	{
		return true;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("EVENT_SHOCKING_DEAD_BODY")))
		{
			*bParam4 = 1;
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("EVENT_SHOCKING_PED_KNOCKED_INTO_BY_PLAYER")))
		{
			return true;
		}
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("EVENT_SHOCKING_PED_SHOT")))
	{
		return true;
	}
	return false;
}

void func_770(int iParam0, int iParam1)
{
	Local_15.f_2[iParam0 /*9*/].f_2 = iParam1;
}

bool func_771(int iParam0, var uParam1)
{
	int iVar0;

	if (Local_15.f_2[iParam0 /*9*/].f_6 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_2[iParam0 /*9*/].f_6))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_15.f_2[iParam0 /*9*/].f_6))
	{
		return true;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_15.f_2[iParam0 /*9*/].f_6);
	if (!func_718(iParam0, iVar0))
	{
		return true;
	}
	return false;
}

void func_772(int iParam0)
{
	Local_15.f_2[iParam0 /*9*/].f_6 = 255;
	func_773(iParam0, 32768);
	func_773(iParam0, 65536);
}

void func_773(int iParam0, int iParam1)
{
	func_139(&(Local_15.f_2[iParam0 /*9*/].f_3), iParam1);
}

bool func_774(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_300[iVar0 /*8*/].f_6), iParam0))
		{
		}
		else
		{
			iVar1 = iVar0;
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			else
			{
				*uParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam1))
				{
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_775(int iParam0, var uParam1)
{
	Local_15.f_2[iParam0 /*9*/].f_6 = uParam1;
	func_773(iParam0, 32768);
	func_773(iParam0, 65536);
}

bool func_776(int iParam0, int iParam1)
{
	switch (Local_557.f_20)
	{
		case joaat("ASSASSINATION_TRACKING"):
			return true;
		default:
			break;
	}
	if (func_176(iParam0, 1) && func_637(iParam0, 4000))
	{
		return true;
	}
	if (func_765(iParam1, 7f))
	{
		return true;
	}
	return false;
	return true;
}

int func_777(int iParam0)
{
	return Local_15.f_2[iParam0 /*9*/].f_4;
}

bool func_778()
{
	if (func_59(64))
	{
		return true;
	}
	if (func_59(32))
	{
		return true;
	}
	return false;
}

void func_779(int iParam0, int iParam1)
{
	Local_15.f_2[iParam0 /*9*/].f_4 = iParam1;
}

bool func_780(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && func_345(Var0, 561062234, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_781(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return false;
		default:
			break;
	}
	return !func_1018(iParam0);
}

bool func_782(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, 0, false);
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_783(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	if (!func_176(iParam0, 2048))
	{
		if (func_176(iParam0, 2))
		{
			vVar1 = { func_865(iParam0) };
		}
		else
		{
			vVar1 = { func_787(iParam0) };
		}
		if (func_452(vVar1) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), vVar1) < 4f)
		{
			func_461(iParam0, 2048);
		}
		else
		{
			return false;
		}
	}
	if (func_176(iParam0, 256) && !func_176(iParam0, 512))
	{
		iVar0 = func_1019(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !PED::IS_PED_DEAD_OR_DYING(iParam1, true)) && WEAPON::HAS_PED_GOT_WEAPON(iParam1, iVar0, 0, true))
		{
			func_461(iParam0, 512);
		}
		return false;
	}
	return true;
}

bool func_784(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Local_557.f_20.f_22[iParam0 /*19*/].f_11 != joaat("FOLLOW_TARGET"))
	{
		iVar0 = Local_557.f_20.f_22[iParam0 /*19*/].f_15;
	}
	else if (!func_762(iParam0, &iVar0))
	{
		return true;
	}
	if (iVar0 < 0 || iVar0 >= 21)
	{
		return true;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iVar0 /*9*/]))
	{
		return true;
	}
	iVar1 = NETWORK::NET_TO_PED(Local_15.f_2[iVar0 /*9*/]);
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar1, 11, false))
	{
		return true;
	}
	return false;
}

int func_785(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0))
	{
		func_117(Var0, 229174115, &uVar5, 0);
	}
	return uVar5;
}

bool func_786(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_176(iParam0, 4))
	{
		return true;
	}
	if ((func_766(iParam0, &iVar0, &iVar1) && func_767(iVar0)) && !func_574(iVar0))
	{
		if ((!func_176(iParam0, 4) && func_767(iVar1)) && func_574(iVar1))
		{
			func_461(iParam0, 4);
			return true;
		}
		if (func_1020(iParam0, iParam1))
		{
			func_461(iParam0, 4);
			return true;
		}
		return false;
	}
	return true;
}

Vector3 func_787(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	func_116(iParam0, &Var0);
	func_347(Var0, -1711751769, &vVar5, 0);
	return vVar5;
}

int func_788(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	var uVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	float fVar11;

	if (!func_176(iParam0, 2048))
	{
		if (func_176(iParam0, 2))
		{
			vVar0 = { func_865(iParam0) };
		}
		else
		{
			vVar0 = { func_787(iParam0) };
		}
		if (func_452(vVar0) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), vVar0) < 4f)
		{
			func_461(iParam0, 2048);
		}
	}
	iVar10 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam1, 0, 3);
	if ((iVar10 != -1 && iVar10 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar10)))
	{
		iVar9 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar10));
		if (func_1014(iParam1, iVar9, 1, 0) < 30f)
		{
			bVar8 = true;
		}
	}
	if (!func_1021(iParam1, 200f, &uVar7, &uVar4, &fVar3))
	{
		func_461(iParam0, 1048576);
		func_773(iParam0, 2097152);
		if (bVar8)
		{
			func_773(iParam0, 8388608);
		}
		else
		{
			func_461(iParam0, 8388608);
		}
		return 0;
	}
	if (fVar3 < 20f)
	{
		func_773(iParam0, 4194304);
		func_773(iParam0, 2097152);
		func_773(iParam0, 1048576);
	}
	else if (fVar3 < 60f)
	{
		func_461(iParam0, 4194304);
		func_773(iParam0, 2097152);
		func_773(iParam0, 1048576);
	}
	else if (fVar3 < 150f || bVar8)
	{
		func_773(iParam0, 4194304);
		func_461(iParam0, 2097152);
		func_773(iParam0, 1048576);
	}
	else
	{
		func_773(iParam0, 4194304);
		func_773(iParam0, 2097152);
		func_461(iParam0, 1048576);
	}
	fVar11 = 175f;
	if (func_176(iParam0, 8388608))
	{
		fVar11 = (175f - 10f);
	}
	if (fVar3 > fVar11 && !bVar8)
	{
		func_461(iParam0, 8388608);
	}
	else
	{
		func_773(iParam0, 8388608);
	}
	return 0;
}

bool func_789(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Local_557.f_20.f_22[iParam0 /*19*/].f_15 < 0 || Local_557.f_20.f_22[iParam0 /*19*/].f_15 >= 21)
	{
		return true;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[Local_557.f_20.f_22[iParam0 /*19*/].f_15 /*9*/]))
	{
		return true;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[Local_557.f_20.f_22[iParam0 /*19*/].f_15 /*9*/]);
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	if (!func_54(iParam0, &iVar1, 1) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		return true;
	}
	if (!func_1022(iParam1, iVar1, 1))
	{
		return true;
	}
	return false;
}

bool func_790(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_861(iParam0, &iVar0, &iVar1))
	{
		return true;
	}
	if (!func_153(iVar0, 0))
	{
		return true;
	}
	if ((func_176(iParam0, 268435456) && func_176(iParam0, 2)) && func_153(iVar1, 1))
	{
		if (func_1023(iVar1))
		{
			return true;
		}
	}
	else if (func_1023(iVar0))
	{
		return true;
	}
	return false;
}

int func_791(int iParam0, int iParam1, int iParam2)
{
	return func_1024(Local_15.f_2[iParam0 /*9*/].f_8, iParam1, iParam2);
}

bool func_792(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_121(&Var0, iParam0, iParam1) || !func_347(Var0, -1711751769, uParam2, 0))
	{
		return false;
	}
	return true;
}

int func_793(int iParam0)
{
	return func_1025(iParam0) + 30;
}

bool func_794(int iParam0)
{
	return iParam0 != 0;
}

void func_795(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

char* func_796()
{
	return "Match_End_Timer";
}

char* func_797()
{
	return "RDRO_Countdown_Sounds";
}

char* func_798()
{
	return "Round_End_Timer";
}

char* func_799()
{
	return "10S";
}

char* func_800()
{
	return "Out_Of_Bounds";
}

char* func_801()
{
	return "321_Countdown";
}

char* func_802()
{
	return "HUD_MP_FREE_MODE";
}

char* func_803()
{
	return "target_spawn";
}

char* func_804()
{
	return "MP005_OBHELT_sounds";
}

void func_805(int iParam0)
{
	if (!func_1026(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_21416.f_260), iParam0);
	}
}

void func_806(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1027(&(Global_1139381.f_3876.f_2[func_506(iParam0, 1) /*4*/]));
}

struct<2> func_807(int iParam0)
{
	if (!func_508(iParam0))
	{
		return func_1028();
	}
	return Global_1107216.f_33[iParam0 /*16*/].f_3.f_5;
}

bool func_808(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 90);
}

int func_809(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WAR_VET"):
			return joaat("GFH_WAR_VET");
		case joaat("FLACO_HERNANDEZ"):
			return joaat("GFH_FLACO_HERNANDEZ");
		case joaat("JOSIAH_TRELAWNY"):
			return joaat("GFH_JOSIAH_TRELAWNY");
		case joaat("JOE"):
			return joaat("GFH_JOE");
		case joaat("SEAN_MACQUIRE"):
			return joaat("GFH_SEAN_MACQUIRE");
		case joaat("BLACK_BELLE"):
			return joaat("GFH_BLACK_BELLE");
		case joaat("SADIE_ADLER"):
			return joaat("GFH_SADIE_ADLER");
		case joaat("MAMMA_WATSON"):
			return joaat("GFH_MAMMA_WATSON");
		case joaat("THOMAS_SKIFF_CAPTAIN"):
			return joaat("GFH_THOMAS_SKIFF_CAPTAIN");
		case joaat("OBEDIAH_HINTON"):
			return joaat("GFH_OBEDIAH_HINTON");
		case joaat("ANTHONY_FOREMAN"):
			return joaat("GFH_ANTHONY_FOREMAN");
		case joaat("LANGTON"):
			return joaat("GFH_LANGTON");
		case joaat("BONNIE"):
			return joaat("GFH_BONNIE");
		case joaat("SHERIFF_FREEMAN"):
			return joaat("GFH_SHERIFF_FREEMAN");
		case joaat("SHAKY"):
			return joaat("GFH_SHAKY");
		case joaat("WALLACE_TRAIN_CLERK"):
			return joaat("GFH_TRAIN_CLERK_WALLACE");
		case joaat("ALDEN"):
			return joaat("GFH_ALDEN");
		case joaat("HECTOR"):
			return joaat("GFH_HECTOR");
		case joaat("THE_BOY"):
			return joaat("GFH_THE_BOY");
		case joaat("ABERDEEN_PIG_FARMERS"):
			return joaat("GFH_ABERDEEN_PIG_FARMERS");
		case joaat("SAINT_DENIS_BOUNTY_BOARD"):
			return joaat("SAINT_DENIS_SHERIFF_BOUNTY_BOARD");
		case joaat("VALENTINE_BOUNTY_BOARD"):
			return joaat("VALENTINE_SHERIFF_BOUNTY_BOARD");
		case joaat("RHODES_BOUNTY_BOARD"):
			return joaat("RHODES_SHERIFF_BOUNTY_BOARD");
		case joaat("STRAWBERRY_BOUNTY_BOARD"):
			return joaat("STRAWBERRY_SHERIFF_BOUNTY_BOARD");
		case joaat("TUMBLEWEED_BOUNTY_BOARD"):
			return joaat("TUMBLEWEED_SHERIFF_BOUNTY_BOARD");
		case joaat("ANNESBURG_BOUNTY_BOARD"):
			return joaat("ANNESBURG_SHERIFF_BOUNTY_BOARD");
		case joaat("ARMADILLO_BOUNTY_BOARD"):
			return joaat("ARMADILLO_SHERIFF_BOUNTY_BOARD");
		case joaat("BENEDICT_POINT_BOUNTY_BOARD"):
			return joaat("BENEDICT_POINT_STATION_BOUNTY_BOARD");
		case joaat("BLACKWATER_BOUNTY_BOARD"):
			return joaat("BLACKWATER_SHERIFF_BOUNTY_BOARD");
		case joaat("EMERALD_RANCH_BOUNTY_BOARD"):
			return joaat("EMERALD_RANCH_STATION_BOUNTY_BOARD");
		case joaat("VAN_HORN_BOUNTY_BOARD"):
			return joaat("VAN_HORN_POST_OFFICE_BOUNTY_BOARD");
		case joaat("RIGGS_BOUNTY_BOARD"):
			return joaat("RIGGS_STATION_BOUNTY_BOARD");
		case joaat("WALLACE_BOUNTY_BOARD"):
			return joaat("WALLACE_STATION_BOUNTY_BOARD");
		case joaat("CRIPPS"):
			return joaat("GFH_CRIPPS");
		case joaat("MOONSHINER"):
			return joaat("GFH_MAGGIE");
		case joaat("MARCEL"):
			return joaat("GFH_MARCEL");
		case -465704507:
			return -1719093715;
		default:
			break;
	}
	return 0;
}

struct<2> func_810(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_811(struct<2> Param0, int iParam2)
{
	func_846(Param0, iParam2);
}

void func_812(struct<2> Param0, int iParam2)
{
	func_846(Param0, iParam2);
}

void func_813(var uParam0, int iParam1)
{
	func_1029(uParam0, iParam1);
}

void func_814(var uParam0, var uParam1)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, 1);
}

var func_815(int iParam0)
{
	return Global_1297717[iParam0 /*4*/].f_3;
}

bool func_816(int iParam0)
{
	return iParam0 != 0;
}

void func_817(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;

	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (!func_1030(iVar0, &vVar2))
		{
			MISC::_COPY_MEMORY(uParam0[iVar1 /*3*/], &vVar5, 3);
		}
		else if (vVar2.x == 0)
		{
			MISC::_COPY_MEMORY(uParam0[iVar1 /*3*/], &vVar5, 3);
		}
		else
		{
			MISC::_COPY_MEMORY(uParam0[iVar1 /*3*/], &vVar2, 3);
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_31 = iVar1;
}

int func_818(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EASY");
		case 1:
			return joaat("MEDIUM");
		case 2:
			return joaat("HARD");
		default:
			break;
	}
	return 0;
}

bool func_819(var uParam0, var uParam1)
{
	return (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1);
}

int func_820(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_810(joaat("TARGET"), func_1031(iParam0)) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return 0;
	}
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return 0;
	}
	return uVar2;
}

void func_821(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_810(joaat("TARGET"), func_1031(iParam1)) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	if (!STATS::STAT_ID_SET_INT(&Var0, iParam0, true))
	{
		return;
	}
}

int func_822(var uParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = func_1032(*uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(1, 31));
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(iVar1, 20));
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(uParam0->f_1, 10));
	return uVar0;
}

int func_823()
{
	return joaat("GFH_MISSION_TYPE_COOLDOWN");
}

bool func_824(int iParam0, int iParam1)
{
	return func_1033(&(Global_1109804.f_5737[iParam0 /*5*/].f_2), iParam1);
}

void func_825(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	Var2.f_1 = -1;
	if (!func_1034(iParam0))
	{
		return;
	}
	MISC::_COPY_MEMORY(&Var2, bParam2, 4);
	Var2.f_4 = iParam3;
	iVar1 |= 4;
	switch (iParam1)
	{
		case 1:
			iVar1 |= 1;
			break;
		case 2:
			iVar1 |= 2;
			break;
		default:
			break;
	}
	switch (iParam5)
	{
		case 0:
			iVar1 |= 4;
			break;
		case 1:
			iVar1 |= 2052;
			break;
		default:
			break;
	}
	if (GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) == PLAYER::PLAYER_ID())
	{
		iVar1 |= 16384;
	}
	if (func_1035(iParam0))
	{
		iVar1 |= 65536;
	}
	func_1036(iParam0, iVar1, iParam4, &Var2);
	func_1037(iParam0, iVar1);
	func_1038(iParam0, iVar1, &Var2);
	func_1039(iVar1, &Var2);
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = joaat("PRIMARY_START");
			break;
		case 2:
			iVar0 = joaat("RIVAL_START");
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1040(iParam0, iVar0, iParam3);
	}
}

void func_826(int iParam0)
{
	if (func_292(&(Global_1109804.f_247.f_9), iParam0, 3))
	{
	}
}

void func_827(int iParam0)
{
	if (func_292(&(Global_1130367[PLAYER::PLAYER_ID() /*7*/].f_3), iParam0, 3))
	{
	}
}

int func_828(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STANDARD"):
			return joaat("GUN_FOR_HIRE_ENEMY");
		case joaat("SHERIFF"):
			return joaat("GUN_FOR_HIRE_ENEMY");
		case joaat("POST"):
			return joaat("GUN_FOR_HIRE_ENEMY");
		case joaat("TRAIN"):
			return joaat("GUN_FOR_HIRE_ENEMY");
		case joaat("TRADER"):
			return joaat("GUN_FOR_HIRE_TRADER_RIVAL");
		default:
			break;
	}
	return 0;
}

int func_829(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STANDARD"):
			return joaat("GUN_FOR_HIRE");
		case joaat("SHERIFF"):
			return joaat("GUN_FOR_HIRE");
		case joaat("POST"):
			return joaat("GUN_FOR_HIRE");
		case joaat("TRAIN"):
			return joaat("GUN_FOR_HIRE");
		case joaat("BOUNTY"):
			return joaat("GUN_FOR_HIRE_BOUNTY");
		case joaat("TRADER"):
			return joaat("GUN_FOR_HIRE_TRADER");
		case joaat("MOONSHINER"):
			return joaat("GUN_FOR_HIRE_MOONSHINER");
		case 1976336482:
			return -576897277;
		default:
			break;
	}
	return 0;
}

void func_830(int iParam0)
{
	func_1041(iParam0);
}

void func_831(int iParam0)
{
	func_1042(iParam0);
}

int func_832(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = func_1043(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

int func_833(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_1044())
	{
		return 0;
	}
	if (!func_516())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_1045(&Global_0, 8);
	}
	func_1045(&Global_0, 1);
	return 1;
}

void func_834(struct<2> Param0, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_1046(func_842(Param0));
	iVar1 = func_67(Param0);
	Var2.f_1 = bParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_65() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_1047(Param0, &Var2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	STATS::_0xD5910ECF81A2278C(iVar0, iVar1, bParam2, &Var2);
}

void func_835(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1048(Param0);
	}
	else
	{
		func_1049(Param0, iParam2);
	}
	func_1050();
}

struct<2> func_836(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

void func_837(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1051(&Global_1940258, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_1052(&Global_1940258, 8388608);
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

void func_838(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1053(iVar0, 1);
		if ((iVar1 == joaat("CRIME_MURDER_PLAYER") || iVar1 == joaat("CRIME_MURDER_PLAYER_HORSE")) || iVar1 == joaat("CRIME_TRAMPLE_PLAYER"))
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1054(cVar2);
			}
			else
			{
				func_1055();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_839(bool bParam0)
{
	if (!bParam0 && func_278(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_840(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_841(struct<2> Param0)
{
	return func_1057(func_1056(Param0));
}

int func_842(var uParam0, var uParam1)
{
	return uParam0;
}

void func_843(struct<2> Param0, int iParam2)
{
	func_846(Param0, iParam2);
}

void func_844(struct<2> Param0, int iParam2)
{
	func_846(Param0, func_1058(iParam2));
}

void func_845(struct<2> Param0, int iParam2)
{
	func_846(Param0, iParam2);
}

void func_846(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	if (!STATS::STAT_ID_SET_INT(&uParam0, iParam2, true))
	{
		return;
	}
}

void func_847(int iParam0)
{
	if (!func_1059(Global_1134390[Global_1296859 /*83*/].f_74, iParam0))
	{
		func_1060(&(Global_1134390[Global_1296859 /*83*/].f_74), iParam0);
		Global_1134349.f_32 = Global_1134390[Global_1296859 /*83*/].f_74;
	}
}

void func_848(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	int iVar7;

	Var2.f_1 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1->f_2))
	{
	}
	if (!func_1034(*iParam0))
	{
		return;
	}
	MISC::_COPY_MEMORY(&Var2, bParam2, 4);
	Var2.f_4 = iParam0->f_1;
	iVar7 = PLAYER::PLAYER_ID();
	iVar1 |= 8;
	switch (iParam1->f_1)
	{
		case 2:
			iVar1 |= 2;
			break;
		case 1:
			iVar1 |= 1;
			break;
		default:
			break;
	}
	switch (*iParam1)
	{
		case -1365731393:
		case joaat("NONE"):
			iVar1 |= 16;
			break;
		case -508253498:
			iVar1 |= 80;
			break;
		case 566295171:
			iVar1 |= 144;
			break;
		case -1881397389:
			iVar1 |= 272;
			break;
		case -356110550:
			iVar1 |= 528;
			break;
		case -406386912:
			iVar1 |= 1040;
			break;
		case 1759419243:
			iVar1 |= 2064;
			break;
		case 2062237572:
			iVar1 |= 4112;
			break;
		case 1923632299:
			iVar1 |= 32;
			break;
		case 475709606:
			iVar1 |= 2080;
			break;
		default:
			break;
	}
	if (GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar7)) == iVar7)
	{
		iVar1 |= 16384;
	}
	if (iVar7 == iParam1->f_2)
	{
		iVar1 |= 32768;
	}
	func_1036(*iParam0, iVar1, iParam3, &Var2);
	func_1037(*iParam0, iVar1);
	func_1038(*iParam0, iVar1, &Var2);
	switch (iParam1->f_1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = joaat("PRIMARY_END");
			break;
		case 2:
			iVar0 = 824391763;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1040(*iParam0, iVar0, iParam0->f_1);
	}
}

int func_849(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1061(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

void func_850(int iParam0)
{
	func_1062(iParam0);
}

void func_851(int iParam0)
{
	if (func_1063(0, 0, 0, 0) || iParam0 > (Global_1296859.f_21 - Global_1109804.f_5729))
	{
		Global_1109804.f_5729 = Global_1296859.f_21;
		Global_1109804.f_5729.f_1 = iParam0;
	}
}

void func_852(int iParam0)
{
	if (func_292(&Global_1130592, iParam0, 1))
	{
	}
}

void func_853(int iParam0, int iParam1)
{
	Global_1130592.f_2[iParam0] = iParam1;
}

var func_854(int iParam0)
{
	return Global_1297717[iParam0 /*4*/].f_2;
}

bool func_855(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_856(int iParam0)
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
		func_123(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_282(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

char* func_857(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1064(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_858(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = iParam1;
	uVar16 = UIFEED::_0x8D1249BD28791878(&Var0, &vVar13, iParam6);
	return uVar16;
}

bool func_859(int iParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(func_1065(Local_557.f_584.f_39[iParam0 /*4*/]));
}

char* func_860(int iParam0)
{
	return func_110(&(Local_557.f_584.f_39[iParam0 /*4*/]));
}

bool func_861(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	*iParam1 = -1;
	*iParam2 = -1;
	if (!func_116(iParam0, &Var0))
	{
		return false;
	}
	if (!func_345(Var0, -619208322, iParam1, 0))
	{
		return false;
	}
	func_345(Var0, 796390761, iParam2, 0);
	return true;
}

bool func_862(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (!func_990(iParam0, &Var0))
	{
		return false;
	}
	if (!func_1066(Var0, 1890996209, iParam1))
	{
		return false;
	}
	return true;
}

int func_863(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26640 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_118(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_26640)
						{
							if (func_118(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_65() == -1 && !func_1067(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_34)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_26640) && iParam0 != Global_34) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_1067(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_34)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_34 && func_118(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
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
		func_1068(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1069(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_1070(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

void func_864(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 1120685857, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 100f, 0, iParam1);
}

Vector3 func_865(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	func_116(iParam0, &Var0);
	func_347(Var0, 2092691923, &vVar5, 0);
	return vVar5;
}

bool func_866(vector3 vParam0, float fParam3, float fParam4, var uParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	*fParam6 = fParam3;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_300[iVar1 /*8*/].f_1 & 4 == 0)
		{
		}
		else
		{
			iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
			}
			else
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
				{
				}
				else
				{
					iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
					fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam0);
					if (fVar2 > *fParam6)
					{
					}
					else
					{
						*fParam6 = fVar2;
						*fParam4 = iVar3;
						*uParam5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
					}
				}
			}
		}
		iVar1++;
	}
	return *fParam6 < fParam3;
}

void func_867(int iParam0)
{
	if (Local_15.f_262 != 0)
	{
		return;
	}
	Local_15.f_262 = iParam0;
}

void func_868(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	char cVar1[64];
	char cVar9[64];
	int iVar17;

	if (func_891(iParam0, iParam3))
	{
		return;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam1))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	StringCopy(&cVar1, func_1072(iParam0, iParam2, 0, bParam5, iParam7), 64);
	StringCopy(&cVar9, func_1072(iParam0, iParam2, 1, bParam5, iParam7), 64);
	iVar17 = func_1073(iParam0, iParam2);
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_110(&cVar1)))
	{
		func_1074(iParam0, iParam3);
		return;
	}
	if (iParam4 && func_1075(iParam1))
	{
		func_1074(iParam0, iParam3);
		return;
	}
	if (func_1076(iParam1, &cVar1, iVar17, iVar0, iParam6, 0, 0, 1))
	{
		func_1074(iParam0, iParam3);
		return;
	}
	else if (!MISC::ARE_STRINGS_EQUAL(&cVar1, &cVar9) && func_1076(iParam1, &cVar9, iVar17, iVar0, iParam6, 0, 0, 1))
	{
		func_1074(iParam0, iParam3);
		return;
	}
	func_1074(iParam0, iParam3);
}

bool func_869(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;

	if (!func_1034(iParam0))
	{
		return false;
	}
	if (!func_1077(&Var0))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 16, 0, 0, 0))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 18, iParam1, 0, 0))
	{
		return false;
	}
	func_1079(Var0, uParam2, &uVar6, &uVar5);
	Var0.f_1 = uVar6;
	return func_1080(Var0, iParam1, uParam3, &uVar7, &uVar8);
}

void func_870(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;

	bVar0 = iParam4;
	func_346(*uParam0, iParam2, &bVar0, 0);
	if (bVar0)
	{
		func_177(iParam1, iParam3);
	}
}

bool func_871(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 509508008;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_872(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -1968510322;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_873(int iParam0, int iParam1, var uParam2)
{
	if (func_872(iParam0, uParam2))
	{
		uParam2->f_2 = -30329033;
		uParam2->f_3 = iParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
	}
	return false;
}

int func_874(int iParam0)
{
	return Global_1128574[iParam0 /*56*/];
}

void func_875(int iParam0, int iParam1)
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

var func_876(int iParam0)
{
	return func_1081(iParam0, joaat("PROMO_MODIFIER"), 1);
}

int func_877(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_875(iParam2, -372840566);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1082(uParam1, iParam0, Var3);
	return 1;
}

int func_878(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_810(joaat("REWARD_STREAK"), func_809(iParam0)) };
	return func_579(Var0, -1);
}

void func_879(int iParam0)
{
	if (!func_51(iParam0, 33554432))
	{
		return;
	}
	func_295(iParam0, 33554432);
	func_295(iParam0, 8388608);
}

void func_880(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	if (!func_51(iParam0, 524288))
	{
		return;
	}
	if (!func_59(2))
	{
		return;
	}
	if (!func_51(iParam0, 524288))
	{
		return;
	}
	if (!func_52(iParam0, &iVar1, 0, 0))
	{
		return;
	}
	iVar0 = func_1083(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	ENTITY::_0x5826EFD6D73C4DE5(iVar1);
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iVar1);
	if (func_51(iParam0, 65536) && func_54(iParam0, &iVar1, 0))
	{
		ENTITY::_0x5826EFD6D73C4DE5(iVar1);
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iVar1);
	}
	sVar2 = func_105(func_104(iVar0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && Local_557.f_20.f_495[iVar0 /*2*/].f_1)
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sVar2);
	}
	func_295(iParam0, 524288);
	Local_557.f_20.f_5 = (Local_557.f_20.f_5 - 1);
}

void func_881(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_300[Local_557.f_1008 /*8*/].f_6), iParam0);
}

void func_882(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&(Local_300[Local_557.f_1008 /*8*/].f_6), iParam0);
}

void func_883(int iParam0, int iParam1)
{
	func_139(&(Local_557.f_20.f_22[iParam0 /*19*/].f_2), iParam1);
}

char* func_884(int iParam0)
{
	if (PED::IS_PED_MALE(iParam0))
	{
		return "STRANGER_MALE";
	}
	return "STRANGER_FEMALE";
}

int func_885(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	var uVar2;

	if (!func_55(Local_15.f_2[iParam0 /*9*/].f_2))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Local_557.f_577))
	{
		return 0;
	}
	if (func_732(iParam0, &iVar1))
	{
		uVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), iVar1, 0);
	}
	else if (func_733(iParam0, &uVar2))
	{
		uVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), PED::_0x62FDF4E678E40CC6(iParam1, uVar2), 0);
	}
	else if (!bParam2)
	{
		uVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), 0, 0);
	}
	return uVar0;
}

char* func_886()
{
	return "NET_AS_ILO_TITLE_TARGET";
}

char* func_887()
{
	return "NET_AS_ILO_TITLE_ENEMY";
}

void func_888(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar3 = func_1084(vVar0, iParam1);
	if (iVar3 == 0)
	{
		return;
	}
	if (!ENTITY::_0x8C03CD6B5E0E85E8(iParam0, iVar3))
	{
	}
}

void func_889(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (func_1085())
	{
		iVar0 = joaat("PED_LOOT_TYPE_TRAVELER_RICH");
	}
	else
	{
		iVar0 = joaat("GUNHOLDER_RICH");
	}
	if (!ENTITY::_0x8C03CD6B5E0E85E8(iParam0, iVar0))
	{
	}
}

bool func_890(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam2, false, false) };
	if ((vVar3.z - 6f) > vVar0.z)
	{
		return false;
	}
	fVar6 = func_1086(iParam0);
	fVar7 = BUILTIN::VDIST(vVar0, vVar3);
	if (fVar7 > (fVar6 * 1.4f))
	{
		return false;
	}
	if (fVar7 > (fVar6 * func_1087(iParam2)))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if (PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_BEING_STUNNED(iParam1, 0))
	{
		return false;
	}
	fVar8 = func_1088(iParam0);
	if (!func_1015(iParam1, iParam2, fVar8))
	{
		if (PED::IS_PED_HEADTRACKING_PED(iParam1, iParam2) && func_1015(iParam1, iParam2, 1127481344 /* Float: 180f */))
		{
		}
		else if (func_1089(iParam2, iParam1, fVar7))
		{
		}
		else if (Local_557.f_20.f_22[iParam0 /*19*/].f_12 != -1 && func_1090(Local_557.f_20.f_22[iParam0 /*19*/].f_12, iParam0))
		{
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_ON_MOUNT(iParam2))
	{
		iVar9 = func_710(PED::GET_MOUNT(iParam2));
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, false))
	{
		iVar9 = func_710(PED::GET_VEHICLE_PED_IS_IN(iParam2, false));
	}
	else
	{
		iVar9 = func_710(iParam2);
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iVar9, 339))
	{
		return false;
	}
	if (func_1016(vVar0, vVar3))
	{
		return false;
	}
	return true;
}

bool func_891(int iParam0, int iParam1)
{
	return func_138(Local_557.f_20.f_22[iParam0 /*19*/].f_2, iParam1);
}

bool func_892(int iParam0)
{
	return func_718(iParam0, 255);
}

bool func_893(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_IS_POSITION_INSIDE_VOLUME(iParam0, vParam1);
}

bool func_894(int iParam0)
{
	switch (Local_557.f_20)
	{
		case joaat("ASSASSINATION_TRACKING"):
			if (!func_431(iParam0, &(Local_300[Local_557.f_1008 /*8*/])))
			{
				return false;
			}
			break;
		default:
			if (!func_176(iParam0, 262144))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_895(int iParam0, int iParam1)
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

void func_896(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (func_118(iParam1) && !WEAPON::HAS_PED_GOT_WEAPON(iVar0, iParam1, 0, false))
	{
		if (bParam2)
		{
			func_863(iVar0, iParam1, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		return;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false);
	if (iVar1 == iParam1)
	{
		return;
	}
	iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, 716706914, false);
	if (iVar2 == 1 || iVar2 == 0)
	{
		return;
	}
	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 716706914, 0) != 2)
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam1, false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iVar0, iParam3, iParam4, 0, 0);
}

bool func_897(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_55(Local_15.f_2[iParam0 /*9*/].f_2) && Local_557.f_20.f_22[iParam0 /*19*/].f_10 == joaat("MELEE_TARGET"))
	{
		bVar0 = true;
	}
	if (func_176(iParam0, 8) && Local_15.f_2[iParam0 /*9*/].f_6 != 255)
	{
		bVar1 = true;
	}
	if (func_1091(iParam1, 0, bVar0, bVar1))
	{
		return false;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar2, false, 0, false);
	iVar3 = WEAPON::GET_BEST_PED_WEAPON(iParam1, false, false);
	if (func_1092(iParam0, iParam1, iVar2, iVar3))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
	if (func_1093(iParam0, iParam1, iVar2))
	{
		return false;
	}
	if (PED::_0x7583A9D35248B83F(iParam1))
	{
		return false;
	}
	return true;
}

void func_898(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1))
	{
		return;
	}
	iVar0 = func_785(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = !func_51(iParam0, 1);
	func_1094(iParam0, iVar0, Local_557.f_20.f_22[iParam0 /*19*/].f_3, Local_557.f_20.f_22[iParam0 /*19*/].f_9, bVar1);
}

void func_899(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (Local_557.f_20.f_22[iParam0 /*19*/].f_11 != joaat("FOLLOW_TARGET"))
	{
		iVar0 = Local_557.f_20.f_22[iParam0 /*19*/].f_15;
	}
	else if (!func_762(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 21)
	{
		return;
	}
	if (!func_52(iVar0, &iVar1, 1, 0))
	{
		return;
	}
	if (TASK::_0xF330A5C062B29BED(iParam1) || PED::IS_PED_RAGDOLL(iParam1))
	{
		return;
	}
	iVar2 = WEAPON::_0x08FF1099ED2E6E21(iParam1);
	if (!func_782(iParam1, iVar2))
	{
		func_896(iParam0, iVar2, 0, 1, 0);
		return;
	}
	if (PED::_0x0D3B1568917EBDA0(iParam1, 11))
	{
		PED::_0x7C10221CE718AA72(iParam1, 11);
	}
	if (!PED::_0xB346C85D49CC998E(iParam1, 17))
	{
		PED::_0xB8DE69D9473B7593(iParam1, 17);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 168, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
	}
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, false, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar1));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	func_1095(iParam0, iVar1);
}

void func_900(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	func_1096(iParam0, Local_557.f_20.f_22[iParam0 /*19*/].f_3, 50f);
}

void func_901(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (Local_557.f_20.f_22[iParam0 /*19*/].f_15 == -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[Local_557.f_20.f_22[iParam0 /*19*/].f_15 /*9*/]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[Local_557.f_20.f_22[iParam0 /*19*/].f_15 /*9*/]);
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	func_1097(iParam0, iVar0, Local_557.f_20.f_22[iParam0 /*19*/].f_6, 1065353216 /* Float: 1f */);
}

void func_902(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar11;

	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (!func_51(iParam0, 16384))
	{
		return;
	}
	if (func_895(iParam1, 658540077))
	{
		return;
	}
	if ((!func_51(iParam0, 1) && PED::IS_PED_HUMAN(iParam1)) && func_178(iParam1))
	{
		func_896(iParam0, joaat("WEAPON_UNARMED"), 0, 1, 0);
		return;
	}
	if (bParam2 && !PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		if (!func_1098(iParam0, &iVar0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_198[iVar0]))
		{
			return;
		}
		iVar1 = NETWORK::NET_TO_VEH(Local_15.f_198[iVar0]);
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false, false))
		{
			return;
		}
		iVar2 = func_1099(iParam0);
		func_1100(iParam0, iVar1, iVar2, 1f);
		return;
	}
	if (!func_272(iParam0, &uVar3))
	{
		return;
	}
	iVar11 = 262144;
	if (bParam2)
	{
		iVar11 |= 8388608;
	}
	func_1101(iParam0, func_110(&uVar3), iVar11, 1);
}

void func_903(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	func_1102(iParam0, 1065353216 /* Float: 1f */);
}

void func_904(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;

	fVar3 = 40000f;
	if (PED::_GET_PED_CROUCH_MOVEMENT(iParam1))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam1, false, 0, false);
	}
	if (!func_176(iParam0, 2048))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
		if (PED::IS_PED_ON_MOUNT(iParam1))
		{
			func_915(iParam0);
			return;
		}
		if (func_176(iParam0, 2))
		{
			vVar0 = { func_865(iParam0) };
			func_1103(iParam0, &fVar3);
		}
		else
		{
			vVar0 = { func_787(iParam0) };
			func_1104(iParam0, &fVar3);
		}
		if (func_452(vVar0))
		{
			return;
		}
		func_1105(iParam0, vVar0, 3f, fVar3, 1048576000 /* Float: 0.25f */, 0);
		return;
	}
	else if (!func_176(iParam0, 512) && func_176(iParam0, 256))
	{
		iVar4 = func_1019(iParam0);
		if ((!ENTITY::IS_ENTITY_DEAD(iParam1) && !PED::IS_PED_INJURED(iParam1)) && !WEAPON::HAS_PED_GOT_WEAPON(iParam1, iVar4, 0, true))
		{
			iVar4 = func_863(iParam1, iVar4, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			func_896(iParam0, iVar4, 0, 0, 0);
			return;
		}
	}
}

void func_905(int iParam0, int iParam1)
{
	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	func_1106(iParam0, 0);
}

void func_906(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1))
	{
		return;
	}
	iVar0 = func_785(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	func_1108(iParam0, iVar0, func_1107(iParam0));
}

void func_907(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_897(iParam0, iParam1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1))
	{
		return;
	}
	iVar0 = func_785(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	func_1110(iParam0, iVar0, func_1107(iParam0), func_1109(iParam0));
}

void func_908(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	if (!func_766(iParam0, &iVar0, &uVar1) || !func_767(iVar0))
	{
		return;
	}
	if (func_176(iParam0, 4) || func_574(iVar0))
	{
		if (PED::_GET_PED_CROUCH_MOVEMENT(iParam1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iParam1, false, 0, false);
		}
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
	if (!PED::_GET_PED_CROUCH_MOVEMENT(iParam1) && func_1111(iParam0))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam1, true, 0, false);
	}
	if (!func_178(iParam1))
	{
		iVar2 = func_23(iParam0);
		if (func_118(iVar2))
		{
			func_896(iParam0, iVar2, 1, 1, 1);
		}
	}
	vVar3 = { func_1112(iParam0) };
	if (func_452(vVar3))
	{
		vVar3 = { Local_557.f_20.f_22[iParam0 /*19*/].f_3 };
	}
	if (!func_1113(iParam0, &fVar6))
	{
		fVar6 = Local_557.f_20.f_22[iParam0 /*19*/].f_9;
	}
	func_1105(iParam0, vVar3, 1f, fVar6, 1048576000 /* Float: 0.25f */, 0);
}

void func_909(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1))
	{
		if (func_176(iParam0, 16777216))
		{
			iVar0 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam1, 0, 3);
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) * Vector(3f, 3f, 3f) };
			if (((iVar0 != -1 && iVar0 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iVar1)))
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false) };
			}
			PED::_0x463803429297117C(iParam1, vVar2, 3, 1);
		}
		else
		{
			PED::_0xF1C03A5352243A30(iParam1);
		}
	}
	if (((!PED::IS_PED_IN_COMBAT(iParam1, 0) && !func_637(iParam0, 5000)) && !func_176(iParam0, 16777216)) && func_51(iParam0, 67108864))
	{
		return;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(iParam1))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam1, false, 0, false);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
	iVar5 = 65;
	if (((!func_176(iParam0, 16777216) && func_55(Local_15.f_2[iParam0 /*9*/].f_2)) && func_176(iParam0, 1)) && func_445(Local_15.f_2[iParam0 /*9*/].f_7) < 1300)
	{
		func_1114(iParam0, iVar5);
	}
	else
	{
		func_864(iParam0, iVar5);
	}
}

void func_910(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	iVar0 = 0;
	iVar1 = func_1115(iParam1, 20f);
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_1116(iParam0, iVar0);
	}
	else
	{
		func_1116(iParam0, 0);
	}
}

void func_911(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar10;

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
	if (!func_51(iParam0, 65536))
	{
		func_54(iParam0, &iVar5, 1);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1) && !TASK::_0x0C3CB2E600C8977D(iParam1, 0))
	{
		if (!func_1021(iParam1, 200f, &iVar3, &vVar0, &fVar4))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		}
		PED::_0xEEED8FAFEC331A70(iParam1, vVar0, 3);
	}
	if ((((!PED::IS_PED_ON_MOUNT(iParam1) && ENTITY::DOES_ENTITY_EXIST(iVar5)) && !PED::IS_PED_DEAD_OR_DYING(iVar5, true)) && PED::_IS_MOUNT_SEAT_FREE(iVar5, -1)) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar5, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false)) < 30f)
	{
		func_1117(iParam0, iVar5, 1077936128 /* Float: 3f */);
		return;
	}
	if (!func_1021(iParam1, 200f, &iVar3, &vVar0, &fVar4))
	{
		vVar0 = { Local_557.f_20.f_22[iParam0 /*19*/].f_3 };
		fVar4 = 200f;
	}
	if ((bParam2 && fVar4 < 18f) && !PED::IS_PED_ON_MOUNT(iParam1))
	{
		func_864(iParam0, 0);
		return;
	}
	iVar6 = 10518560;
	if ((((func_176(iParam0, 8388608) && Local_15.f_2[iParam0 /*9*/].f_2 != joaat("ANIMAL_EXTRA")) && PED::IS_PED_HUMAN(iParam1)) && !func_778()) && !PED::IS_PED_ON_MOUNT(iParam1))
	{
		func_1116(iParam0, iVar3);
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, true) && !PED::IS_PED_ON_MOUNT(iParam1))
	{
		func_1118(iParam0, 64);
		return;
	}
	fVar10 = 40000f;
	if (PED::_GET_PED_CROUCH_MOVEMENT(iParam1))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam1, false, 0, false);
	}
	if (!func_176(iParam0, 2048))
	{
		if (func_176(iParam0, 2))
		{
			vVar7 = { func_865(iParam0) };
			func_1103(iParam0, &fVar10);
		}
		else
		{
			vVar7 = { func_787(iParam0) };
			func_1104(iParam0, &fVar10);
		}
		if (func_452(vVar7))
		{
			return;
		}
		if (bParam2)
		{
			func_918(iParam0, vVar7, 3f, fVar10, 1048576000 /* Float: 0.25f */, 0);
		}
		else
		{
			func_1105(iParam0, vVar7, 3f, fVar10, 1048576000 /* Float: 0.25f */, 0);
		}
		return;
	}
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			func_1119(iParam0, iVar3, -1f, iVar6);
		}
		else
		{
			func_1120(iParam0, vVar0, -1f, iVar6);
		}
		PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 0, true);
		return;
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			func_1121(iParam0, iVar3, -1f, iVar6);
		}
		else
		{
			func_919(iParam0, vVar0, -1f, iVar6);
		}
		PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 4, true);
		return;
	}
}

void func_912(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (PED::_GET_PED_CROUCH_MOVEMENT(iParam1))
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam1, false, 0, false);
	}
	if (!func_51(iParam0, 65536) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
	if (func_1022(iParam1, iVar0, 0))
	{
		func_1117(iParam0, iVar0, 1077936128 /* Float: 3f */);
		return;
	}
	if ((((Local_557.f_20.f_22[iParam0 /*19*/].f_15 >= 0 && Local_557.f_20.f_22[iParam0 /*19*/].f_15 < 21) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[Local_557.f_20.f_22[iParam0 /*19*/].f_15 /*9*/])) && !PED::IS_PED_DEAD_OR_DYING(NETWORK::NET_TO_PED(Local_15.f_2[Local_557.f_20.f_22[iParam0 /*19*/].f_15 /*9*/]), true)) && PED::IS_PED_ON_MOUNT(iParam1))
	{
		iVar1 = NETWORK::NET_TO_PED(Local_15.f_2[Local_557.f_20.f_22[iParam0 /*19*/].f_15 /*9*/]);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, 1);
		if (func_895(iParam1, 1056466932))
		{
			func_1122(iParam0);
			return;
		}
		func_1097(iParam0, iVar1, Local_557.f_20.f_22[iParam0 /*19*/].f_6, 1065353216 /* Float: 1f */);
		return;
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, 0);
}

void func_913(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_895(iParam1, -1672646357))
	{
		return;
	}
	if (!func_861(iParam0, &iVar0, &iVar1) || !func_153(iVar0, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
		return;
	}
	iVar2 = Local_15.f_217[iVar0 /*2*/];
	if ((func_176(iParam0, 268435456) && func_176(iParam0, 2)) && func_153(iVar1, 0))
	{
		iVar0 = iVar1;
		iVar2 = Local_15.f_217[iVar1 /*2*/];
	}
	if (!func_153(iVar0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
		return;
	}
	if ((OBJECT::HAS_PICKUP_BEEN_COLLECTED(iVar2) || !OBJECT::DOES_PICKUP_OBJECT_EXIST(iVar2)) || func_1023(iVar0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
		return;
	}
	func_174(11, iVar0, func_173(0, 8), -1);
	return;
}

bool func_914(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	bool bVar5;

	if ((!func_121(&Var0, iParam0, iParam1) || !func_346(Var0, -1143761632, &bVar5, 0)) || !bVar5)
	{
		return false;
	}
	if (!func_345(Var0, 1326664274, iParam2, 0))
	{
		*iParam2 = 0;
	}
	return true;
}

void func_915(int iParam0)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 501393341, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_DISMOUNT_ANIMAL(iVar0, 0, 0, 0, 0, 0);
}

void func_916(int iParam0)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 1345172471, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(iVar0, 200f);
}

bool func_917(int iParam0, int iParam1, float fParam2)
{
	struct<5> Var0;

	if (!func_121(&Var0, iParam0, iParam1) || !func_348(Var0, 912480409, fParam2, 0))
	{
		return false;
	}
	return true;
}

void func_918(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, float fParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (!func_895(iVar0, 713668775))
	{
		func_1105(iParam0, vParam1, fParam4, fParam5, fParam6, fParam7);
		return;
	}
	iVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!WEAPON::_0x705BE297EEBDB95D(iVar1))
	{
		return;
	}
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_1122(iParam0);
	}
}

void func_919(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 518218985, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	iVar1 = 0;
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		iVar1 = PED::GET_MOUNT(iVar0);
	}
	TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, vParam1, 4, iParam5, fParam4, -1, iVar1);
}

char* func_920(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MpDefault";
		case 1:
			return "MpStealthHard";
		case 2:
			return "MpStealthHardDeaf";
		case 3:
			return "MpStealthEasy";
		case 4:
			return "MpAmbient";
		case 5:
			return "MpVehicleConvoy";
		case 6:
			return "MpDefaultNoShotFired";
		case 7:
			return "MpStealthHardNoShotFired";
		case 8:
			return "MpMissionGiver";
		case 9:
			return "MpHearingRangeReaction";
		default:
			break;
	}
	return "InvalidPreset";
}

bool func_921(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Local_300[Local_557.f_1008 /*8*/].f_4[iVar0], iVar1);
}

bool func_922(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam1, 0, iParam2);
	switch (iVar0)
	{
		case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
		case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
		case joaat("EVENT_RESPONDED_TO_THREAT"):
		case joaat("EVENT_EXPLOSION_HEARD"):
			bVar3 = true;
			break;
		case joaat("EVENT_GUN_AIMED_AT"):
		case joaat("EVENT_SHOCKING_PED_SHOT"):
			bVar3 = true;
			bVar5 = true;
			break;
		case joaat("EVENT_SHOCKING_PAIN_VOCALIZATION"):
		case joaat("EVENT_SHOT_FIRED"):
			bVar3 = true;
			bVar4 = true;
			break;
	}
	if (!bVar3)
	{
		return false;
	}
	if (iVar0 == joaat("EVENT_SHOCKING_PAIN_VOCALIZATION") && Local_15.f_2[iParam0 /*9*/].f_4 == 5)
	{
		return false;
	}
	iVar1 = EVENT::_0x822A001BCEA5BD81(iParam1, iVar0, 0, iParam2);
	if (bVar4 || bVar5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return false;
		}
		if (bVar4)
		{
			fVar2 = PED::_0x900CA00CE703E1E2(iParam1);
		}
		else if (bVar5)
		{
			fVar2 = PED::_0x2BA9D7BF629F920C(iParam1);
		}
		if (func_1014(iParam1, iVar1, 1, 0) > fVar2)
		{
			EVENT::_0x1A5C5D350068A673(iParam1, iParam2);
			return false;
		}
	}
	return true;
}

void func_923(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	MISC::SET_BIT(&(uParam1->f_4[iVar0]), iVar1);
}

int func_924()
{
	return Global_1301323.f_150.f_4;
}

int func_925(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_1123(Param0))
	{
		return -1;
	}
	iVar1 = func_1124(Param0);
	if (iVar1 >= 0)
	{
		func_1125(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = Global_1900806;
		Global_1900807[iVar0 /*2*/] = { Param0 };
		Global_1900838[iVar0 /*2*/] = { Var2 };
		func_1125(Param0, 1);
		Global_1900806++;
		if (Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_926(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_73(Param0))
	{
		return;
	}
	if (!func_537(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1126(Param0);
	}
	if (!func_73(func_836(0)))
	{
		func_835(Param0, 3);
		func_837(bParam3);
		func_838(!bParam4);
		func_1127(Param0, -1);
		if (bParam2 && !func_1128(2))
		{
			func_1045(&Global_0, 1024);
		}
		func_840(1);
	}
	else
	{
		func_1127(Param0, -1);
		func_835(Param0, 4);
		func_1129(Param0, 0);
	}
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_842(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1130(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

bool func_927(int iParam0)
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
			Var2 = { func_929(iVar0) };
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

char* func_928(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;

	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::_0x4BE6C13A45CCA8EC(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_857(PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)), joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar0 = MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_857(PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)), joaat("COLOR_PURE_WHITE")));
			return func_1064(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)));
	}
	sVar0 = MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::_0x4BE6C13A45CCA8EC(iParam0)));
	return func_1064(sVar0, iParam2);
}

struct<7> func_929(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_930(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_931(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_1064(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_932(char* sParam0)
{
	return NETWORK::_0xD4022C7286B0DFA2(sParam0, 100, 22);
}

bool func_933(int iParam0, char* sParam1)
{
	char* sVar0;
	int iVar1;

	sVar0 = PLAYER::GET_PLAYER_NAME(iParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar0);
	if (MISC::COMPARE_STRINGS(sVar0, sParam1, false, iVar1) == 0)
	{
		return true;
	}
	return false;
}

bool func_934()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_935(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int* iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_1131(iParam0) && !func_690(1))
	{
		return false;
	}
	if (!func_43(1))
	{
		return false;
	}
	if (bParam2)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			if (iParam1 != 2)
			{
				return false;
			}
			if (func_690(4096))
			{
				return false;
			}
			if (!func_690(32))
			{
				return false;
			}
			if (func_289(Local_557.f_584.f_335))
			{
				return false;
			}
			if (func_45())
			{
				if (!func_59(262144))
				{
					return false;
				}
				if (Local_557.f_20.f_16 == joaat("POSSE"))
				{
					iVar0 = 0;
					while (iVar0 < 32)
					{
						iVar2 = Local_15.f_234[iVar0 /*2*/];
						if (iVar2 == 255)
						{
						}
						else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
						{
						}
						else
						{
							*iParam4 = Local_15.f_234[iVar0 /*2*/];
							return true;
						}
						iVar0++;
					}
					return false;
				}
				else
				{
					if (Local_15.f_234[0 /*2*/] == 255)
					{
						return false;
					}
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_234[0 /*2*/]))
					{
						return false;
					}
					*iParam4 = Local_15.f_234[0 /*2*/];
					return true;
				}
			}
			func_1132(2, iParam5);
			return true;
		case 4:
			if (bParam2)
			{
				return false;
			}
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != joaat("ASSASSINATION_TRACKING"))
			{
				return false;
			}
			if (!func_690(128))
			{
				return false;
			}
			if (BUILTIN::VDIST(Global_35, Local_557.f_20.f_10) > Local_557.f_20.f_13)
			{
				Local_557.f_1002 = 0;
				return false;
			}
			if (Local_557.f_1002 == 0)
			{
				Local_557.f_1002 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				return false;
			}
			else if (func_445(Local_557.f_1002) < 30000)
			{
				return false;
			}
			Local_557.f_1002 = 0;
			return true;
		case 3:
			if (bParam2)
			{
				return false;
			}
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != joaat("ASSASSINATION_TRACKING"))
			{
				return false;
			}
			if (func_690(128))
			{
				return false;
			}
			if (!MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23))
			{
				return false;
			}
			if (BUILTIN::VDIST(Global_35, Local_557.f_20.f_10) > Local_557.f_20.f_13)
			{
				return false;
			}
			func_1132(1, iParam5);
			return true;
		case 2:
			if (Local_557.f_20.f_16 != joaat("PLAYER"))
			{
				return false;
			}
			if (iParam1 != 4)
			{
				return false;
			}
			if (func_690(512))
			{
				return false;
			}
			if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 65536))
			{
				return false;
			}
			if (func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
			{
				return false;
			}
			iVar1 = PLAYER::PLAYER_ID();
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (Local_15.f_234[iVar0 /*2*/] == 255)
				{
				}
				else if (Local_15.f_234[iVar0 /*2*/] == iVar1)
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_234[iVar0 /*2*/]))
				{
				}
				else if (!GANG::_0x3F59FE6F37869576(iVar1, Local_15.f_234[iVar0 /*2*/]))
				{
				}
				else
				{
					*iParam4 = Local_15.f_234[iVar0 /*2*/];
					if (MISC::IS_STRING_NULL_OR_EMPTY(PLAYER::GET_PLAYER_NAME(*iParam4)))
					{
					}
					else
					{
						return true;
					}
				}
				iVar0++;
			}
			return false;
		case 5:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != joaat("ASSASSINATION_TRACKING"))
			{
				return false;
			}
			if (!func_690(128))
			{
				return false;
			}
			if (!func_43(1024))
			{
				return false;
			}
			if (!MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23))
			{
				return false;
			}
			func_44(1024);
			func_1132(1, iParam5);
			return true;
		case 6:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != joaat("ASSASSINATION_TRACKING"))
			{
				return false;
			}
			if (func_690(128))
			{
				return false;
			}
			if (func_690(2048))
			{
				return false;
			}
			if (!MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23))
			{
				return false;
			}
			func_1132(1, iParam5);
			return true;
		case 7:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != joaat("ASSASSINATION_TRACKING"))
			{
				return false;
			}
			if (!func_690(128))
			{
				return false;
			}
			if (func_690(8192))
			{
				return false;
			}
			if (!PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
			{
				return false;
			}
			return true;
		case 8:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_557.f_20 != joaat("ASSASSINATION"))
			{
				return false;
			}
			if (func_690(262144))
			{
				return false;
			}
			iVar3 = 0;
			while (iVar3 < 21)
			{
				if (Local_15.f_2[iVar3 /*9*/].f_2 != joaat("EXTRA"))
				{
				}
				else if (!func_176(iVar3, 8) || func_176(iVar3, 1))
				{
				}
				else if (!MAP::DOES_BLIP_EXIST(Local_557.f_584[iVar3]))
				{
				}
				else if (!func_52(iVar3, &iVar4, 1, 0))
				{
				}
				else if (func_411(ENTITY::GET_ENTITY_COORDS(iVar4, false, false), Global_35) > 50f)
				{
				}
				else
				{
					func_1132(3, iParam5);
					return true;
				}
				iVar3++;
			}
			return false;
		default:
			break;
	}
	return false;
}

int func_936(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_937(int iParam0)
{
	return 10000;
}

char* func_938(int iParam0, int iParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (Local_557.f_20)
			{
				case joaat("ASSASSINATION"):
					return "NET_AS_HELP_INTRO_STANDARD";
				case joaat("ASSASSINATION_TRACKING"):
					return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_INTRO_TRACKING", sParam2);
				case joaat("ASSASSINATION_PVP_PLAYER"):
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_HELP_INTRO_PVP_PLAYER", func_1133(iParam1, joaat("COLOR_PURE_WHITE")));
				case joaat("ASSASSINATION_PVP_POSSE"):
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_HELP_INTRO_PVP_POSSE", func_1134(Local_15.f_284, joaat("COLOR_PURE_WHITE")));
				default:
					break;
			}
			return "";
		case 2:
			return MISC::_CREATE_VAR_STRING(42, "NET_AS_HELP_ALLY_SELECTED", func_1133(iParam1, joaat("COLOR_POSSE_ALLY")), func_1135(joaat("COLOR_RED")));
		case 3:
			if (Local_557.f_20.f_549 > 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_LAST_KNOWN_LOCATION_FOUND_PLURAL", sParam2);
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_LAST_KNOWN_LOCATION_FOUND", sParam2);
		case 4:
			return "NET_AS_HELP_TRACKING";
		case 5:
			if (Local_15.f_275 > 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_RETURN_TO_LAST_KNOWN_LOCATION_PLURAL", sParam2);
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_RETURN_TO_LAST_KNOWN_LOCATION", sParam2);
		case 6:
			if (Local_15.f_275 > 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_GO_TO_LAST_KNOWN_LOCATION_PLURAL", sParam2);
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_GO_TO_LAST_KNOWN_LOCATION", sParam2);
		case 7:
			return "NET_AS_HELP_FOCUS_ON_TRAIL";
		case 8:
			return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_STEALTH_AVOID_DETECTION", sParam2);
		default:
			break;
	}
	return "";
}

void func_939(char* sParam0, int iParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (bParam2)
	{
		func_1136(1);
	}
	Local_557.f_584.f_333 = func_1137(sParam0, iParam1, 0, 0, 0, 1);
}

bool func_940(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			*iParam1 = 512;
			return true;
		case 4:
			*iParam1 = 256;
			return true;
		case 3:
			*iParam1 = 128;
			return true;
		case 5:
			*iParam1 = 1024;
			return true;
		case 6:
			*iParam1 = 2048;
			return true;
		case 1:
			*iParam1 = 4096;
			return true;
		case 8:
			*iParam1 = 262144;
			return true;
		case 7:
			*iParam1 = 8192;
			return true;
		default:
			break;
	}
	return false;
}

bool func_941()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_2 != joaat("TARGET"))
		{
		}
		else if (!func_431(iVar0, &(Local_300[Local_557.f_1008 /*8*/])))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_942(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((uParam0[iParam2 /*34*/])->f_23 != iParam1)
	{
		(uParam0[iParam2 /*34*/])->f_23 = iParam1;
	}
}

int func_943()
{
	if (func_45())
	{
		if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 131072) || func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192))
		{
			return joaat("BLIP_MP_DEFEND_TARGET");
		}
	}
	return joaat("BLIP_AMBIENT_VIP");
}

int func_944(int iParam0)
{
	return func_1138(iParam0);
}

void func_945(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((uParam0[iParam2 /*34*/])->f_25 != iParam1)
	{
		(uParam0[iParam2 /*34*/])->f_25 = iParam1;
	}
}

void func_946(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((uParam0[iParam2 /*34*/])->f_26 != iParam1)
	{
		(uParam0[iParam2 /*34*/])->f_26 = iParam1;
	}
}

int func_947(var uParam0, bool bParam1)
{
	if (!func_1139())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_1140())
			{
				uParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-119209833);
				func_498(1);
				func_1141(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_1142())
			{
				return 0;
			}
			func_1141(uParam0, 2);
			break;
	}
	Global_1940144.f_110 = 1;
	return 1;
}

int func_948(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "centralInfoDatastore");
		func_1143(uParam0->f_5, &(uParam0->f_6), 0);
		func_1143(uParam0->f_5, &(uParam0->f_7), 1);
		func_1143(uParam0->f_5, &(uParam0->f_8), 37);
		func_1144(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_949(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam2 != 0)
	{
		iParam3 = iParam2;
		iParam4 = iParam2;
	}
	if ((uParam1[0 /*34*/])->f_21 == 0)
	{
		func_1145(uParam0, uParam1, 0, "meter0", iParam3, iParam5);
		func_1145(uParam0, uParam1, 1, "meter1", iParam4, iParam6);
		func_1145(uParam0, uParam1, 2, "meter2", iParam2, 0);
		func_1145(uParam0, uParam1, 3, "meter3", iParam2, 0);
		func_1145(uParam0, uParam1, 4, "meter4", iParam2, 0);
		func_1145(uParam0, uParam1, 5, "meter5", iParam2, 0);
		func_1145(uParam0, uParam1, 6, "meter6", iParam2, 0);
		return 0;
	}
	return 1;
}

int func_950(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
			{
				func_1146(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_3, *uParam0);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1546991729, uParam0->f_3);
			}
			func_1146(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_1146(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729) && UISTATEMACHINE::_0xF7C180F57F85D0B8(1546991729))
			{
				UISTATEMACHINE::_0x6B9FE4F0BA521A19(1546991729, 0);
				func_1146(uParam0, 4);
			}
			else
			{
				func_1146(uParam0, 0);
			}
			break;
		case 4:
			if (!UISTATEMACHINE::_0x11E73195E735B25B(1546991729))
			{
				*bParam2 = 1;
				func_1146(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_951(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	bool bVar1;

	sVar0 = func_1147(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_1148(uParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_1144(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_1149(uParam0, iParam1, sParam4);
	func_1150(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

void func_952(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;

	func_1151(iParam1, &iVar1, &uVar2, &iVar3, &uVar4, &uVar5, &uVar6, &uVar7);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		bVar8 = MISC::IS_BIT_SET(iParam5, iVar0);
		bVar9 = MISC::IS_BIT_SET(iParam6, iVar0);
		func_1152(uParam0, iVar0, iVar1, uVar2, iVar3, uVar4, uVar5, uVar6, uVar7, bVar8, bParam2, bParam3, bParam4, bVar9);
		iVar0++;
	}
}

bool func_953(int iParam0)
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return false;
	}
	else if (!func_418(1))
	{
		return false;
	}
	if (func_51(iParam0, 262144))
	{
		return false;
	}
	if (Local_15.f_2[iParam0 /*9*/].f_2 != joaat("TARGET"))
	{
		return false;
	}
	if (func_90() > 5)
	{
		return false;
	}
	if (func_45())
	{
		return false;
	}
	if (!func_479(iParam0, 1, 1))
	{
		return false;
	}
	if (func_43(65536) && !func_47(&(Local_300[Local_557.f_1008 /*8*/]), 1024))
	{
		return false;
	}
	if ((Local_557.f_20 == joaat("ASSASSINATION_TRACKING") && func_429(iParam0)) && !func_431(iParam0, &(Local_300[Local_557.f_1008 /*8*/])))
	{
		return false;
	}
	return true;
}

void func_954(int iParam0)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(Local_557.f_584[iParam0]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	Local_557.f_584[iParam0] = MAP::_BLIP_ADD_FOR_ENTITY(408396114, iVar0);
	MAP::SET_BLIP_SPRITE(Local_557.f_584[iParam0], joaat("BLIP_AMBIENT_VIP"), true);
	MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], 942020339);
	MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], 580546400);
	MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], 231194138);
	if (func_51(iParam0, 16777216))
	{
		iVar1 = func_885(iParam0, iVar0, 1);
	}
	if (iVar1 != 0)
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Local_557.f_584[iParam0], HUD::_GET_LABEL_TEXT_BY_HASH(iVar1));
		MAP::_BLIP_SET_MODIFIER(Local_557.f_584[iParam0], 785247196);
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_557.f_584[iParam0], func_1153());
	}
}

bool func_955(int iParam0)
{
	int iVar0;

	if (!func_418(1) || !func_43(4))
	{
		return false;
	}
	if (Local_557.f_20 != joaat("ASSASSINATION_TRACKING"))
	{
		return false;
	}
	if (!func_690(128))
	{
		return false;
	}
	if (func_45())
	{
		return false;
	}
	if (func_90() > 5)
	{
		return false;
	}
	if (Local_15.f_2[iParam0 /*9*/].f_2 != joaat("TARGET"))
	{
		return false;
	}
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		return false;
	}
	if (func_661(iVar0, Global_35, 1) > 55f)
	{
		return false;
	}
	return true;
}

void func_956(int iParam0)
{
	if (func_51(iParam0, 128))
	{
		func_1154(joaat("SONAR_OVERHEARD_BEAT_BIG"), NETWORK::NET_TO_ENT(Local_15.f_2[iParam0 /*9*/]), 1);
		func_295(iParam0, 128);
	}
	else if (func_1155())
	{
		func_177(iParam0, 128);
	}
}

bool func_957(int iParam0)
{
	int iVar0;
	float fVar1;

	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return false;
	}
	else if (!func_418(1))
	{
		return false;
	}
	if (func_176(iParam0, 4096))
	{
		return false;
	}
	if (Local_557.f_20 == joaat("ASSASSINATION_TRACKING"))
	{
		fVar1 = 90f;
	}
	else
	{
		fVar1 = 200f;
	}
	if (((func_55(Local_15.f_2[iParam0 /*9*/].f_2) && func_294(iParam0)) && func_52(iParam0, &iVar0, 1, 0)) && BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) > fVar1)
	{
		return false;
	}
	if (Local_15.f_2[iParam0 /*9*/].f_2 != joaat("EXTRA") && Local_15.f_2[iParam0 /*9*/].f_2 != joaat("WAVE_PED"))
	{
		return false;
	}
	if ((!func_176(iParam0, 1) && !func_176(iParam0, 8)) && !func_176(iParam0, 1024))
	{
		return false;
	}
	if ((func_429(iParam0) && !func_431(iParam0, &(Local_300[Local_557.f_1008 /*8*/]))) && !func_176(iParam0, 1))
	{
		return false;
	}
	if (!func_479(iParam0, 1, func_478(Local_15.f_2[iParam0 /*9*/].f_2)))
	{
		return false;
	}
	return true;
}

bool func_958(int iParam0)
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 4))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (func_1156(iParam0))
	{
		return false;
	}
	if (func_163(iParam0))
	{
		return false;
	}
	if (func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	return true;
}

void func_959(int iParam0, int iParam1)
{
	if (Global_1071686.f_21689[iParam0 /*8*/].f_4 != iParam1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1071686.f_21689[iParam0 /*8*/]))
		{
			if (Global_1071686.f_21689[iParam0 /*8*/].f_4 != 0)
			{
				MAP::_BLIP_REMOVE_MODIFIER(Global_1071686.f_21689[iParam0 /*8*/], Global_1071686.f_21689[iParam0 /*8*/].f_4);
			}
		}
		Global_1071686.f_21689[iParam0 /*8*/].f_4 = iParam1;
		func_805(iParam0);
	}
}

void func_960(int iParam0, int iParam1)
{
	if (Global_1071686.f_21689[iParam0 /*8*/].f_1 != iParam1)
	{
		Global_1071686.f_21689[iParam0 /*8*/].f_1 = iParam1;
		func_805(iParam0);
	}
}

void func_961(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28349), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28350), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_28348), iParam0);
}

void func_962(int iParam0, int iParam1)
{
	if (Global_1071686.f_21952[iParam0 /*18*/].f_4 != iParam1)
	{
		Global_1071686.f_21952[iParam0 /*18*/].f_4 = iParam1;
		func_805(iParam0);
	}
}

bool func_963(int iParam0)
{
	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192) && !func_47(&(Local_300[Local_557.f_1008 /*8*/]), 131072))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (func_1156(iParam0))
	{
		return false;
	}
	if (func_163(iParam0))
	{
		return false;
	}
	if (func_84(&(Local_300[Local_557.f_1008 /*8*/])) != 2)
	{
		return false;
	}
	return true;
}

bool func_964(int iParam0)
{
	int iVar0;

	if (!func_47(&(Local_300[Local_557.f_1008 /*8*/]), 8192))
	{
		return false;
	}
	if (!func_418(1))
	{
		return false;
	}
	if (!func_690(32))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!func_47(&(Local_300[iVar0 /*8*/]), 4))
	{
		return false;
	}
	return true;
}

void func_965(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_557.f_959), iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	func_1157(iParam0, 1454004076);
	func_962(iParam0, -333142948);
	SCRIPTS::_0x31010318BA9897AC(&(Local_557.f_959), iParam0);
}

int func_966(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 408396114;
		case 1:
			return 408396114;
		case 3:
			return joaat("BLIP_STYLE_ENEMY");
		case 4:
			return 408396114;
		default:
			break;
	}
	return 0;
}

bool func_967(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = joaat("BLIP_AMBIENT_SECRET");
			return true;
		case 4:
			*iParam1 = joaat("BLIP_AMBIENT_VIP");
			return true;
		default:
			break;
	}
	return false;
}

char* func_968()
{
	return "NET_AS_BLIP_LAST_KNOWN_LOCATION";
}

bool func_969()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_548)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_2 != joaat("TARGET"))
		{
		}
		else if (func_431(iVar0, &(Local_300[Local_557.f_1008 /*8*/])))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_970()
{
	return "NET_AS_BLIP_SEARCH";
}

char* func_971()
{
	return "NET_AS_BLIP_GO_TO_AREA";
}

void func_972()
{
	if (!func_690(16384) && !func_690(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_22))
	{
		MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584.f_22, -1878373110);
	}
	if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23))
	{
		MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584.f_23, -1878373110);
	}
	func_656(32768);
	func_656(16384);
}

void func_973()
{
	if (func_690(32768))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23))
	{
		return;
	}
	MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_23, -1878373110);
	if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_22))
	{
		MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584.f_22, -1878373110);
	}
	func_656(16384);
	func_185(32768);
}

void func_974()
{
	if (func_690(16384))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_557.f_584.f_22))
	{
		return;
	}
	MAP::_BLIP_SET_MODIFIER(Local_557.f_584.f_22, -1878373110);
	if (MAP::DOES_BLIP_EXIST(Local_557.f_584.f_23))
	{
		MAP::_BLIP_REMOVE_MODIFIER(Local_557.f_584.f_23, -1878373110);
	}
	func_656(32768);
	func_185(16384);
}

bool func_975()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_2 != joaat("TARGET"))
		{
		}
		else if (!MAP::DOES_BLIP_EXIST(Local_557.f_584[iVar0]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_976()
{
	switch (Local_557.f_20.f_16)
	{
		case joaat("PLAYER"):
			return "NET_AS_SHARD_PLAYER";
		case joaat("POSSE"):
			return "NET_AS_SHARD_POSSE";
		default:
			break;
	}
	return "NET_AS_SHARD_STANDARD";
}

int func_977(char* sParam0, char* sParam1)
{
	var uVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	uVar0 = func_1160(sParam0, sParam1, 7500, func_1158(), func_1159(), 0, 1, 1);
	return uVar0;
}

char* func_978(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	char* sVar3;

	iVar0 = func_148();
	bVar1 = func_45();
	func_306(iVar0 != 2, &sVar2, &sVar3);
	if (func_59(8388608))
	{
		return "NET_AS_SHARD_BODY_OVER_ABANDONED";
	}
	if (func_47(&(Local_300[Local_557.f_1008 /*8*/]), 65536))
	{
		if (func_43(8388608))
		{
			return "NET_AS_SHARD_BODY_FAIL_ABANDON_DISBAND_POSSE";
		}
		return "NET_AS_SHARD_BODY_FAIL_SWITCH_POSSE";
	}
	switch (iVar0)
	{
		case 2:
			switch (iParam0)
			{
				case 1:
					if (bVar1)
					{
						if (bParam1)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_WIN", func_857(func_860(0), joaat("COLOR_ENEMY")));
						}
						return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_WIN", func_857(func_1161(), joaat("COLOR_ENEMY")));
					}
					if (bParam1)
					{
						return "NET_AS_SHARD_BODY_STD_WIN_SINGLE";
					}
					return "NET_AS_SHARD_BODY_STD_WIN";
				case 0:
					if (bVar1)
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_PVP_OVER", sVar2, sVar3);
					}
					return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_STD_OVER", sVar2, sVar3);
				case 2:
					if (func_59(131072))
					{
						return "NET_AS_SHARD_BODY_EXPIRED";
					}
					else if (bVar1 && !func_59(4194304))
					{
						if (Local_557.f_20.f_16 == joaat("PLAYER"))
						{
							if (func_859(0))
							{
								return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER", func_857(func_860(0), joaat("COLOR_ENEMY")));
							}
							else
							{
								return "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER_GEN";
							}
						}
						else if (Local_557.f_20.f_16 == joaat("POSSE"))
						{
							if (func_1162())
							{
								return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE", func_857(func_1161(), joaat("COLOR_ENEMY")));
							}
							else
							{
								return "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE_GEN";
							}
						}
					}
					else
					{
						if (bVar1)
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_PVP_OVER", sVar2, sVar3);
						}
						return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_STD_OVER", sVar2, sVar3);
					}
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					if (bParam1)
					{
						return "NET_AS_SHARD_BODY_STD_SECONDARY_WIN_SINGLE";
					}
					return "NET_AS_SHARD_BODY_STD_SECONDARY_WIN";
				case 0:
					return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_STD_SECONDARY_OVER", sVar2, sVar3);
				case 2:
					if (bParam1)
					{
						return "NET_AS_SHARD_BODY_STD_SECONDARY_FAIL_SINGLE";
					}
					return "NET_AS_SHARD_BODY_STD_SECONDARY_FAIL";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					if (Local_557.f_20.f_16 == joaat("POSSE"))
					{
						return "NET_AS_SHARD_BODY_PVP_TARGET_POSSE_WIN";
					}
					return "NET_AS_SHARD_BODY_PVP_TARGET_WIN";
				case 0:
					if (Local_557.f_20.f_16 == joaat("POSSE"))
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_PVP_POSSE_OVER", sVar2, sVar3);
					}
					return "NET_AS_SHARD_BODY_PVP_TARGET_WIN";
				case 2:
					if (Local_557.f_20.f_16 == joaat("POSSE"))
					{
						return "NET_AS_SHARD_BODY_PVP_POSSE_FAIL";
					}
					return "NET_AS_SHARD_BODY_PVP_TARGET_FAIL";
				default:
					break;
			}
			break;
		case 4:
			if ((!func_59(131072) && !func_59(4194304)) && iParam0 != 1)
			{
				if (Local_557.f_20.f_16 == joaat("PLAYER"))
				{
					if (func_859(0))
					{
						return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER", func_857(func_860(0), joaat("COLOR_POSSE_ALLY")));
					}
					else
					{
						return "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER_GEN";
					}
				}
				else if (Local_557.f_20.f_16 == joaat("POSSE"))
				{
					if (func_1162())
					{
						return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE", func_857(func_1161(), joaat("COLOR_POSSE_ALLY")));
					}
					else
					{
						return "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE_GEN";
					}
				}
			}
			switch (iParam0)
			{
				case 1:
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_ALLY_WIN", func_857(func_860(0), joaat("COLOR_POSSE_ALLY")));
				case 0:
					return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_PVP_POSSE_OVER", sVar2, sVar3);
				case 2:
					if (Local_557.f_20.f_16 == joaat("POSSE"))
					{
						return "NET_AS_SHARD_BODY_PVP_POSSE_FAIL";
					}
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_ALLY_FAIL", func_857(func_860(0), joaat("COLOR_POSSE_ALLY")));
				default:
					break;
			}
			break;
	}
	return "";
}

int func_979(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	char* sVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	UIFEED::_0xDD1232B332CBB9E7(11, 1, 0);
	if (iParam2 <= 0)
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_FAILED";
	}
	else if (iParam2 == iParam3)
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_PASSED";
	}
	else
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_OVER";
	}
	if (bParam4)
	{
		uVar0 = func_1165(sVar1, sParam0, sParam1, 7500, func_1163(), func_1164(), 0, 1, 1, 1);
	}
	else
	{
		uVar0 = func_1160(sVar1, sParam1, 7500, func_1163(), func_1164(), 0, 1, 1);
	}
	return uVar0;
}

char* func_980(int iParam0)
{
	bool bVar0;

	if (func_258() == joaat("PLAYER"))
	{
		bVar0 = true;
	}
	else if (func_258() == joaat("POSSE"))
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = Local_557.f_20.f_549 <= true;
	}
	switch (iParam0)
	{
		case 14:
			return func_1166();
		case 1:
			return func_1167(0);
		case 2:
			return func_1167(1);
		case 5:
			return func_1168(bVar0);
		case 11:
			return func_1169();
		case 13:
			return func_1170();
		case 12:
			return func_1171();
		case 7:
			if (func_45())
			{
				return func_1172();
			}
			else if (Local_557.f_20 == joaat("ASSASSINATION_TRACKING"))
			{
				return func_1173(0);
			}
			else
			{
				return func_1173(0);
			}
			break;
		case 8:
			if (func_45())
			{
				return func_1172();
			}
			else if (Local_557.f_20 == joaat("ASSASSINATION_TRACKING"))
			{
				return func_1173(1);
			}
			else
			{
				return func_1173(1);
			}
			break;
	}
	return "";
}

var func_981(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_982(int iParam0)
{
	Global_1102219.f_26.f_12 = iParam0;
}

bool func_983(int iParam0)
{
	return (Global_1102219.f_26.f_7 && iParam0) != 0;
}

bool func_984(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

bool func_985(int iParam0)
{
	return (Global_1102219.f_4[Global_1106305[iParam0 /*2*/]] && Global_1106305[iParam0 /*2*/].f_1) == Global_1106305[iParam0 /*2*/].f_1;
}

int func_986()
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

void func_987(int iParam0)
{
	if (func_1174(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 || iParam0);
}

int func_988(int iParam0)
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, 1525953930, iParam0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

int func_989(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 1823139082;
	if (!func_119(&Var1) || !func_120(&Var1, 1606032220, iParam0, 0))
	{
		return iVar0;
	}
	func_117(Var1, 456924499, &uVar6, 0);
	return iVar0;
}

bool func_990(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 217995581;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_991(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_992(int iParam0)
{
	if ((iParam0 == joaat("HANDCART") || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return true;
	}
	return false;
}

bool func_993(int iParam0)
{
	return iParam0 == joaat("MINECART01X");
}

int func_994(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

int func_995(int iParam0)
{
	switch (iParam0)
	{
		case 500518742:
			return -2;
		case joaat("VS_DRIVER"):
			return -1;
		case joaat("VS_FRONT_RIGHT"):
			return 0;
		case joaat("VS_BACK_LEFT"):
			return 1;
		case joaat("VS_BACK_RIGHT"):
			return 2;
		case joaat("VS_EXTRA_LEFT_1"):
			return 3;
		case joaat("VS_EXTRA_RIGHT_1"):
			return 4;
		case 786089929:
			return 5;
		case 1129121707:
			return 6;
		case -534828465:
			return 7;
		case 510246373:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_996(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5);
	return iVar0;
}

int func_997(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	iVar0 = PED::CREATE_PED_ON_MOUNT(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6);
	return iVar0;
}

void func_998(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_1019(iParam0) != 0)
	{
		func_461(iParam0, 256);
	}
	func_1175(&uParam1, iParam0, 460674190, 131072, 0);
	func_1175(&uParam1, iParam0, 1352900226, 8, 0);
	func_1175(&uParam1, iParam0, 566779387, 1024, 0);
	func_1175(&uParam1, iParam0, -234450476, 32, 0);
	func_1175(&uParam1, iParam0, -827172890, 128, 0);
	func_1175(&uParam1, iParam0, 1967834759, 4096, 0);
	func_1175(&uParam1, iParam0, -1834576753, 16, 0);
	func_1175(&uParam1, iParam0, -874477517, 8192, 0);
	func_1175(&uParam1, iParam0, 2090933413, 16384, 0);
	func_1175(&uParam1, iParam0, 258114362, 268435456, 0);
}

bool func_999(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && func_109(Var0, 1590382703, uParam1, 0))
	{
		return true;
	}
	return false;
}

void func_1000(int iParam0)
{
	func_1176(iParam0);
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

bool func_1001(int iParam0, int iParam1)
{
	struct<5> Var0;

	*iParam1 = -1;
	if (!func_116(iParam0, &Var0) || !func_345(Var0, -412523681, iParam1, 0))
	{
		return false;
	}
	*iParam1 = func_580(*iParam1, 0, 100);
	return true;
}

float func_1002(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0) && func_348(Var0, 1741894372, &uVar5, 0))
	{
		return uVar5;
	}
	return 60f;
}

float func_1003(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0) && func_348(Var0, 1309785647, &uVar5, 0))
	{
		return uVar5;
	}
	return 50f;
}

bool func_1004(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (!func_116(iParam0, &Var0) || !func_345(Var0, -436871069, iParam1, 0))
	{
		return false;
	}
	*iParam1 = func_1177(*iParam1, 0);
	return true;
}

bool func_1005(int iParam0, float fParam1, float fParam2, float fParam3)
{
	struct<5> Var0;
	int iVar5;

	if (!func_116(iParam0, &Var0))
	{
		return false;
	}
	*fParam1 = 1f;
	*fParam2 = 1f;
	*fParam3 = 1f;
	if (func_348(Var0, -608357025, fParam1, 0))
	{
		iVar5 = 1;
	}
	if (func_348(Var0, 1793981541, fParam2, 0))
	{
		iVar5 = 1;
	}
	if (func_348(Var0, -966540255, fParam3, 0))
	{
		iVar5 = 1;
	}
	return iVar5;
}

int func_1006(int iParam0)
{
	int iVar0;

	if (!Global_1139381.f_5560)
	{
		return 0;
	}
	if (iParam0 == Global_1296859.f_154[Global_1296859])
	{
		return Global_17411.f_2621.f_2;
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
	return Global_1100469[iVar0 /*53*/].f_48;
}

bool func_1007(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_1059(Global_1298536[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

bool func_1008(int iParam0, int iParam1)
{
	if (iParam1 != 255)
	{
		return (Global_1145091[iParam1 /*35*/].f_23.f_10 && iParam0) != 0;
	}
	return (Global_1139381.f_4779.f_10 && iParam0) != 0;
}

float func_1009(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1139381.f_5560)
	{
		return 0f;
	}
	if (iParam0 == Global_1296859.f_154[Global_1296859])
	{
		return Global_17411.f_2621;
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
	if ((GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && Global_1100469[iVar0 /*53*/].f_18 >= Global_1100469[iVar0 /*53*/].f_45)
	{
		return Global_1100469[iVar0 /*53*/].f_18;
	}
	return Global_1100469[iVar0 /*53*/].f_45;
}

int func_1010(int iParam0)
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
			return 5;
		case 6:
			return 6;
		default:
			break;
	}
	return 0;
}

bool func_1011(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_2 != 0)
		{
		}
		else
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1012(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	Local_15.f_2[iParam0 /*9*/].f_2 = joaat("WAVE_PED");
	Local_15.f_2[iParam0 /*9*/].f_4 = 0;
	func_461(iParam0, 1);
	if (func_54(iParam0, &iVar1, 1))
	{
		func_1000(iVar1);
	}
	if (func_118(iParam1))
	{
		func_863(iVar0, iParam1, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	else if (iParam1 == joaat("WEAPON_UNARMED"))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, false, true);
	}
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iVar0, false);
	WEAPON::_0x431240A58484D5D0(iVar0, 0);
	WEAPON::_0x45E57FDD531C9477(iVar0, 0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
	PED::_SET_PED_DAMAGE_MODIFIER(iVar0, 0.48f);
	if (iParam4 >= 0)
	{
		PED::SET_PED_ACCURACY(iVar0, func_580(iParam4, 0, 100));
	}
	else
	{
		PED::SET_PED_ACCURACY(iVar0, 20);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
	if (bParam2)
	{
		func_461(iParam0, 128);
		LAW::_0x819ADD5EF1742F47(iVar0, 7);
		PED::SET_PED_AS_COP(iVar0, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 39, true);
		POPULATION::_0xF74E134F40192884(iVar0, 1);
		if (Global_1901947.f_166.f_31)
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 127, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
		}
	}
	if (iParam3 > -1 && iParam3 < Local_557.f_20.f_550)
	{
		PED::_0xFC3DB99C8144CD81(iVar0, Local_557.f_962[iParam3], 0, 0, 0);
	}
	func_1178(iVar0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		PED::_0x712B2C2B2471B493(iVar0, 554382346);
		TASK::_0x3AD8EFF9703BE657(iVar0, 0f);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, true);
}

int func_1013(int iParam0, int iParam1)
{
	return (iParam0 * 10 + iParam1);
}

float func_1014(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1015(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	if (fParam2 == 180f)
	{
		return func_1179(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar3 - vVar0) > 0f;
	}
	fVar6 = (fParam2 * 0.5f);
	fVar7 = func_1179(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), func_1180(vVar3 - vVar0));
	return MISC::ACOS(fVar7) < fVar6;
}

bool func_1016(vector3 vParam0, vector3 vParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = Local_557.f_20.f_546;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!func_1181(Local_557.f_20.f_508[iVar0 /*6*/]))
		{
		}
		else if (!func_1182(vParam0, vParam3, Local_557.f_20.f_508[iVar0 /*6*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1017(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_313(iParam0, &iVar0, &iVar1);
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!MISC::IS_BIT_SET(Local_300[iVar2 /*8*/].f_4[iVar0], iVar1))
		{
		}
		else if (!func_396(iVar2, 0, 1))
		{
		}
		else
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 0:
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
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

int func_1019(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (!func_116(iParam0, &Var0))
	{
		return 0;
	}
	func_117(Var0, -407841845, &uVar5, 0);
	return uVar5;
}

bool func_1020(int iParam0, int iParam1)
{
	if (PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	if (TASK::IS_PED_GETTING_UP(iParam1))
	{
		return true;
	}
	if (PED::IS_PED_BEING_STUNNED(iParam1, 0))
	{
		return true;
	}
	if (PED::_IS_PED_HOGTIED(iParam1))
	{
		return true;
	}
	if (PED::_0x3BDFCF25B58B0415(iParam1))
	{
		return true;
	}
	if (PED::_IS_PED_LASSOED(iParam1))
	{
		return true;
	}
	if (PED::IS_PED_INJURED(iParam1))
	{
		return true;
	}
	return false;
}

bool func_1021(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4)
{
	return func_866(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), fParam1, iParam2, fParam3, fParam4);
}

bool func_1022(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		if (func_1183(iParam0, iParam1, 0))
		{
			return true;
		}
	}
	if ((!PED::IS_PED_ON_MOUNT(iParam0) && PED::_IS_MOUNT_SEAT_FREE(iParam1, -1)) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), ENTITY::GET_ENTITY_COORDS(iParam0, false, false)) < 30f)
	{
		return true;
	}
	return false;
}

bool func_1023(int iParam0)
{
	if (!func_153(iParam0, 0))
	{
		return false;
	}
	if (func_172(iParam0, 2))
	{
		return true;
	}
	return false;
}

int func_1024(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	if (iParam0 < 0 || iParam0 >= 60)
	{
		return 0;
	}
	*iParam1 = (iParam0 / 10);
	*iParam2 = (iParam0 - *iParam1 * 10);
	return 1;
}

int func_1025(int iParam0)
{
	return iParam0 * 31;
}

bool func_1026(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21416.f_260), iParam0);
}

void func_1027(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

struct<2> func_1028()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_1029(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1030(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_820(iParam0);
	if (!func_1184(iVar0))
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	iVar1 = BUILTIN::SHIFT_RIGHT(iVar0, 20) & 1023;
	*uParam1 = func_1185(0, iVar1);
	uParam1->f_2 = BUILTIN::SHIFT_RIGHT(iVar0, 10) & 1023;
	if (*uParam1 == 0)
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	if (uParam1->f_2 < 0 || uParam1->f_2 >= 512)
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	return true;
}

int func_1031(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("TARGET_0");
		case 1:
			return joaat("TARGET_1");
		case 2:
			return joaat("TARGET_2");
		case 3:
			return joaat("TARGET_3");
		case 4:
			return joaat("TARGET_4");
		case 5:
			return joaat("TARGET_5");
		case 6:
			return joaat("TARGET_6");
		case 7:
			return joaat("TARGET_7");
		case 8:
			return joaat("TARGET_8");
		case 9:
			return joaat("TARGET_9");
		default:
			break;
	}
	return 0;
}

int func_1032(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar7;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar7 = func_1186(iParam0);
	if (iVar7 == -1)
	{
		return 0;
	}
	if (!func_1187(&uVar2))
	{
		return -1;
	}
	if (!func_1188(&uVar2, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar2, 5, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar2, 7, func_1189(iVar7), 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar2, 8, 0, 0, 1))
	{
		return -1;
	}
	iVar0 = func_1190(&uVar2, 0);
	if (!func_1188(&uVar2, 9, iParam0, 0, 1))
	{
		return -1;
	}
	iVar1 = func_1191(&uVar2);
	return ((iVar0 - iVar1) - 1);
}

bool func_1033(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_1034(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_1035(int iParam0)
{
	struct<5> Var0;

	if (!func_1034(iParam0))
	{
		return false;
	}
	if (!func_1077(&Var0))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	return func_1078(Var0, &(Var0.f_1), 48, 0, 0, 0);
}

void func_1036(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1192(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1193(iParam0, iVar0, &Var2, uParam3);
		if (Var2.f_2 == 0)
		{
		}
		else if ((Var2.f_3 && iParam1) != Var2.f_3)
		{
		}
		else
		{
			switch (Var2.f_2)
			{
				case joaat("COOLDOWN_TYPE"):
					break;
				case joaat("COOLDOWN"):
					func_1194(iParam0, iParam2, uParam3, 0, 0);
					break;
				case -2104202019:
				case joaat("TRADE_FAR_WINS"):
				case joaat("TRADE_EASY_WINS"):
				case joaat("TRADE_MEDIUM_WINS"):
				case joaat("WINS"):
				case joaat("SPECIAL_LOSSES"):
				case joaat("TRADE_NEAR_WINS"):
				case joaat("TRADE_HARD_WINS"):
				case joaat("SPECIAL_WINS"):
				case joaat("RIVAL_LOSSES"):
				case joaat("TRADE_LOSSES"):
				case joaat("RIVAL_WINS"):
				case joaat("SPECIAL_ATTEMPTS"):
				case joaat("LOSSES"):
				case joaat("TRADE_WINS"):
				case joaat("ATTEMPTS"):
				case joaat("TRADE_ATTEMPTS"):
				case joaat("RIVAL_ATTEMPTS"):
					STATS::_STAT_ID_INCREMENT_INT(&Var2, 1);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_1037(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1195(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1196(iParam0, iVar0, &Var2);
		if ((Var2.f_4 && iParam1) != Var2.f_4)
		{
		}
		else if (!STATS::CHAL_IS_GOAL_ACTIVE(Var2, Var2.f_1))
		{
		}
		else
		{
			switch (Var2.f_2)
			{
				case joaat("INT"):
					STATS::CHAL_ADD_GOAL_PROGRESS_INT(Var2, Var2.f_1, Var2.f_3);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_1038(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	var uVar7;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1197(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_1198(iParam0, iVar0, uParam2, &Var2))
		{
		}
		else if ((Var2.f_2 && iParam1) != Var2.f_2)
		{
		}
		else if (!Var2.f_4)
		{
		}
		else
		{
			func_1199(Var2.f_1, &uVar7, Var2.f_3 & 1 == 1, 255, 0, 0);
		}
		iVar0++;
	}
}

void func_1039(int iParam0, var uParam1)
{
	func_1200(iParam0, uParam1);
}

void func_1040(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (!func_1201(iParam0, iParam2, iParam1, &iVar0, &uVar1))
	{
		return;
	}
	func_320(iVar0, 0, 0);
}

void func_1041(int iParam0)
{
	Global_1109804.f_260.f_4367 = (Global_1109804.f_260.f_4367 || iParam0);
}

void func_1042(int iParam0)
{
	Global_1109804.f_260.f_5462 = (Global_1109804.f_260.f_5462 || iParam0);
}

int func_1043(struct<2> Param0)
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
	if (!func_310(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_310(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
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

bool func_1044()
{
	return !Global_1572887.f_9;
}

void func_1045(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
		case 8:
			return 634321112;
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
		default:
			break;
	}
	return 0;
}

void func_1047(struct<2> Param0, var uParam2)
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
	iVar3 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_842(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1203(func_1202(Param0));
			iVar5 = func_1204(iVar4);
			if (!func_1205(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1107216.f_33[iVar1 /*16*/] == iVar3)
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
	iVar0 = Global_1107216.f_33[iVar2 /*16*/].f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0 /*42*/];
}

int func_1048(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_1043(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1206(iVar0);
}

int func_1049(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1071686.f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_310(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686.f_19550 == 0)
	{
		Global_1071686.f_19550.f_1[Global_1071686.f_19550 /*3*/] = { vVar6 };
		Global_1071686.f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686.f_19550)
	{
		func_310(Global_1071686.f_19550.f_1[iVar9 /*3*/], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_1207(iVar9);
			Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686.f_19550 < 31)
	{
		iVar9 = Global_1071686.f_19550;
		Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
		Global_1071686.f_19550++;
		if (Global_1071686.f_19550 > 32)
		{
			Global_1071686.f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_1050()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686.f_19550)
	{
		if (func_310(Global_1071686.f_19550.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_1051(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1052(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1053(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CRIME_ARSON");
		case 1:
			return joaat("CRIME_ASSAULT");
		case 2:
			return joaat("CRIME_ASSAULT_ANIMAL");
		case 3:
			return joaat("CRIME_ASSAULT_CORPSE");
		case 4:
			return joaat("CRIME_ASSAULT_HORSE");
		case 5:
			return joaat("CRIME_ASSAULT_LAW");
		case 6:
			return joaat("CRIME_ASSAULT_LIVESTOCK");
		case 7:
			return joaat("CRIME_BANK_ROBBERY");
		case 8:
			return joaat("CRIME_BURGLARY");
		case 9:
			return joaat("CRIME_CHEATING");
		case 10:
			return joaat("CRIME_DISTURBANCE");
		case 11:
			return joaat("CRIME_EXPLOSION");
		case 12:
			return joaat("CRIME_GRAVE_ROBBERY");
		case 13:
			return joaat("CRIME_HASSLE");
		case 14:
			return joaat("CRIME_HIT_AND_RUN");
		case 15:
			return joaat("CRIME_HIT_AND_RUN_LAW");
		case 16:
			return joaat("CRIME_INTIMIDATION");
		case 17:
			return joaat("CRIME_JACK_HORSE");
		case 18:
			return joaat("CRIME_JACK_VEHICLE");
		case 19:
			return joaat("CRIME_JAIL_BREAK");
		case 20:
			return joaat("CRIME_KIDNAPPING");
		case 21:
			return joaat("CRIME_KIDNAPPING_LAW");
		case 22:
			return joaat("CRIME_LASSO_ASSAULT");
		case 23:
			return joaat("CRIME_LAW_IS_THREATENED");
		case 24:
			return joaat("CRIME_LOITERING");
		case 25:
			return joaat("CRIME_LOOTING");
		case 26:
			return joaat("CRIME_MURDER");
		case 27:
			return joaat("CRIME_MURDER_ANIMAL");
		case 28:
			return joaat("CRIME_MURDER_HORSE");
		case 29:
			return joaat("CRIME_MURDER_LAW");
		case 30:
			return joaat("CRIME_MURDER_LIVESTOCK");
		case 31:
			return joaat("CRIME_PROPERTY_DESTRUCTION");
		case 32:
			return joaat("CRIME_RESIST_ARREST");
		case 33:
			return joaat("CRIME_ROBBERY");
		case 34:
			return joaat("CRIME_STAGECOACH_ROBBERY");
		case 35:
			return joaat("CRIME_STOLEN_GOODS");
		case 36:
			return joaat("CRIME_THEFT");
		case 37:
			return joaat("CRIME_THEFT_HORSE");
		case 38:
			return joaat("CRIME_THEFT_LIVESTOCK");
		case 39:
			return joaat("CRIME_THEFT_VEHICLE");
		case 40:
			return joaat("CRIME_THREATEN");
		case 41:
			return joaat("CRIME_THREATEN_LAW");
		case 42:
			return joaat("CRIME_TRAIN_ROBBERY");
		case 43:
			return joaat("CRIME_TRAMPLE");
		case 44:
			return joaat("CRIME_TRAMPLE_LAW");
		case 45:
			return joaat("CRIME_TRESPASSING");
		case 46:
			return joaat("CRIME_UNARMED_ASSAULT");
		case 47:
			return joaat("CRIME_VANDALISM");
		case 48:
			return joaat("CRIME_VANDALISM_VEHICLE");
		case 49:
			return joaat("CRIME_VEHICLE_DESTRUCTION");
		case 50:
			return joaat("CRIME_WANTED_LEVEL_UP_DEBUG_HIGH");
		case 51:
			return joaat("CRIME_WANTED_LEVEL_UP_DEBUG_LOW");
		case 52:
			return joaat("CRIME_ACCOMPLICE");
		case 53:
			return joaat("CRIME_EXPLOSION_POISON");
		case 54:
			return joaat("CRIME_MURDER_PLAYER");
		case 55:
			return joaat("CRIME_MURDER_PLAYER_HORSE");
		case 56:
			return joaat("CRIME_SELF_DEFENCE");
		case 57:
			return joaat("CRIME_TRAMPLE_PLAYER");
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

void func_1054(char[12] cParam0)
{
	Global_1939161.f_75.f_67 = { cParam0 };
}

void func_1055()
{
	StringCopy(&(Global_1939161.f_75.f_67), "", 24);
}

int func_1056(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_74(Global_1900736.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1057(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736.f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736.f_66 == 1)
	{
		Global_1900736.f_66 = 0;
		func_1208(&(Global_1900736.f_1[0 /*2*/]));
		return 1;
	}
	func_1208(&(Global_1900736.f_1[iParam0 /*2*/]));
	Global_1900736.f_66 = (Global_1900736.f_66 - 1);
	func_1209(iParam0, Global_1900736.f_66);
	return 1;
}

int func_1058(int iParam0)
{
	return Global_1109804.f_5737[iParam0 /*5*/].f_1;
}

bool func_1059(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1060(var uParam0, int iParam1)
{
	func_1210(uParam0, iParam1);
}

bool func_1061(int iParam0, int iParam1, int iParam2)
{
	if (!func_1211(iParam0))
	{
		return false;
	}
	if (!func_1212())
	{
		return false;
	}
	if (!func_1213(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (*iParam1 == joaat("MP_ACHIEVEMENTS") && Global_1572887.f_13 != 0)
	{
		return false;
	}
	else if (*iParam1 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_13 != -1)
	{
		return false;
	}
	return true;
}

void func_1062(int iParam0)
{
	Global_1109804.f_260.f_4367 = (Global_1109804.f_260.f_4367 - (Global_1109804.f_260.f_4367 && iParam0));
}

bool func_1063(float fParam0, bool bParam1, bool bParam2, float fParam3)
{
	if (fParam3 == 0f)
	{
		fParam3 = Global_1901947.f_308.f_164;
	}
	if (bParam1)
	{
		fParam3 = (Global_1901947.f_308.f_164 + 50f);
	}
	if (bParam1 && bParam2)
	{
		return true;
	}
	return (((Global_1109804.f_5729 == 0 || (Global_1296859.f_21 - Global_1109804.f_5729) > Global_1109804.f_5729.f_1) && fParam0 >= 0f) && fParam0 < fParam3);
}

char* func_1064(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

char* func_1065(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_1066(struct<5> Param0, int iParam5, int iParam6)
{
	var uVar0;

	if (func_117(Param0, iParam5, &uVar0, 0))
	{
		*iParam6 = uVar0;
		return true;
	}
	return false;
}

bool func_1067(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1068(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		Var0 = { func_1214(iParam0, 0, 1) };
		if (func_1215(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_1216(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_1217(iParam0, Var0, Var0.f_4, 0) };
				func_1218(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_1219(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_1220(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_1221(iParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

void func_1069(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
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

bool func_1070(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_1071(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(*uParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), false, false))
		{
			return 0;
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		if (PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			return 0;
		}
		if (PED::IS_PED_RAGDOLL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	bVar1 = (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0) || bParam2);
	if ((iParam1 == -2128726980 || ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && bVar1)
	{
		return 2;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	iVar3 = TASK::GET_SCRIPT_TASK_STATUS(iVar2, iParam1, true);
	if (iVar3 == 1 || iVar3 == 0)
	{
		return 3;
	}
	if (!bVar1)
	{
		return 1;
	}
	return 2;
}

char* func_1072(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (iParam1 == 4)
	{
		if ((func_55(Local_15.f_2[iParam0 /*9*/].f_2) && Local_557.f_20.f_22[iParam0 /*19*/].f_12 != -1) && func_1222(Local_557.f_20.f_22[iParam0 /*19*/].f_12, 0) > 1)
		{
			bVar0 = true;
		}
		return func_1223(iParam0, iParam4, bVar0, bParam2);
	}
	if (Local_15.f_2[iParam0 /*9*/].f_2 == joaat("WAVE_PED"))
	{
		return func_1224(iParam1);
	}
	if (func_176(iParam0, 8))
	{
		return func_1225(iParam1, bParam2);
	}
	if (func_176(iParam0, 1024))
	{
		return func_1226(iParam1);
	}
	return func_1227(iParam1, Local_15.f_2[iParam0 /*9*/].f_2 == joaat("TARGET"), bParam3, bParam2);
}

int func_1073(int iParam0, int iParam1)
{
	if (iParam1 == 4)
	{
		return joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR");
	}
	if (Local_15.f_2[iParam0 /*9*/].f_2 == joaat("WAVE_PED"))
	{
		return func_1228(iParam1);
	}
	if (func_176(iParam0, 8))
	{
		return func_1229(iParam1);
	}
	if (func_176(iParam0, 1024))
	{
		return func_1230(iParam1);
	}
	return func_1231(iParam1);
}

void func_1074(int iParam0, int iParam1)
{
	func_266(&(Local_557.f_20.f_22[iParam0 /*19*/].f_2), iParam1);
}

int func_1075(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_2 != joaat("EXTRA") && Local_15.f_2[iVar0 /*9*/].f_2 != joaat("EXTRA"))
		{
		}
		else if (!func_52(iVar0, &iVar4, 1, 0))
		{
		}
		else if (BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar4, false, false)) > 20f)
		{
		}
		else if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar4))
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

bool func_1076(int iParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = cParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_1232(iParam0, &Var0);
}

bool func_1077(int iParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = func_1233();
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(iParam0, &uVar1, 5);
	*iParam0 = uVar0;
	return true;
}

bool func_1078(struct<5> Param0, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(iParam5, &Param0))
	{
		return false;
	}
	return true;
}

int func_1079(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;

	*uParam7 = Param0.f_1;
	*uParam6 = 0;
	if (!func_1078(Param0, &(Param0.f_1), 30, 0, 0, 0))
	{
		*uParam6 = *uParam7;
		return 0;
	}
	iVar1 = func_1234(Param0);
	switch (iVar1)
	{
		case joaat("UNLOCK"):
			iVar0 = uParam5->f_4;
			break;
		case -1503324114:
			iVar0 = *uParam5;
			break;
		case -305921044:
			iVar0 = uParam5->f_2;
			break;
		default:
			break;
	}
	if (!func_1078(Param0, &(Param0.f_1), 31, iVar0, 0, 1))
	{
		*uParam6 = *uParam7;
		return 0;
	}
	*uParam6 = Param0.f_1;
	return 1;
}

bool func_1080(struct<5> Param0, int iParam5, int iParam6, var uParam7, var uParam8)
{
	var uVar0;
	int iVar2;
	int iVar3;

	MISC::_COPY_MEMORY(iParam6, &uVar0, 2);
	iVar2 = func_1235(Param0);
	if (iVar2 == 0)
	{
		return false;
	}
	iVar3 = func_1236(Param0);
	if (iVar3 == 0)
	{
		return false;
	}
	*iParam6 = { func_810(iVar3, iVar2) };
	if (!STATS::_STAT_ID_IS_VALID(iParam6))
	{
		return false;
	}
	*uParam7 = func_1237(Param0, iParam5 == joaat("COOLDOWN"));
	*uParam8 = func_1238(Param0, iParam5 == joaat("COOLDOWN"));
	return true;
}

var func_1081(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 23, iParam1, 0, iParam2))
	{
		return 0;
	}
	return func_1239(Var0, 53, 1);
}

void func_1082(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_1240(uParam0))
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

int func_1083(int iParam0)
{
	int iVar0;

	if (!func_59(8192))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_557.f_20.f_553)
	{
		if (Local_557.f_20.f_495[iVar0 /*2*/] != iParam0)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1084(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_1241(vParam0);
	switch (iVar0)
	{
		case 5:
		case 6:
		case 7:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_AMBARINO");
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_AMBARINO_RE");
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
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_HANOVER");
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_HANOVER_RE");
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
					return joaat("REWARD_FREEROAM_TREASURE_MAP_LEMOYNE");
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_LEMOYNE_RE");
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
					return joaat("REWARD_FREEROAM_TREASURE_MAP_WEST_ELIZABETH");
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_WEST_ELIZABETH_RE");
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
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_AUSTIN");
				case 1:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_AUSTIN_RE");
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_1085()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

float func_1086(int iParam0)
{
	if (func_51(iParam0, 1024))
	{
		return Local_557.f_20.f_22[iParam0 /*19*/].f_16;
	}
	if (func_176(iParam0, 8))
	{
		return 30f;
	}
	if (func_176(iParam0, 1024))
	{
		return 25f;
	}
	return 15f;
}

float func_1087(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_DEAD_OR_DYING(iParam0, false))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return 1.25f;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 1.4f;
		}
		if (PED::_GET_PED_CROUCH_MOVEMENT(iParam0))
		{
			if (TASK::IS_PED_STILL(iParam0))
			{
				return 0.7f;
			}
			return 0.8f;
		}
	}
	return 1f;
}

float func_1088(int iParam0)
{
	if (func_176(iParam0, 8))
	{
		return 150f;
	}
	if (func_176(iParam0, 1024))
	{
		return 140f;
	}
	return 105f;
}

bool func_1089(int iParam0, int iParam1, float fParam2)
{
	if (fParam2 > PED::_0x900CA00CE703E1E2(iParam1))
	{
		return false;
	}
	if (Local_557.f_1016 != 0 && func_445(Local_557.f_1016) < 1500)
	{
		return true;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		if (fParam2 > 8f)
		{
			return false;
		}
	}
	else if (fParam2 > (8f * 2f))
	{
		return false;
	}
	if ((PED::_GET_PED_CROUCH_MOVEMENT(iParam0) || PED::IS_PED_IN_COVER(iParam0, false, false)) || PED::IS_PED_GOING_INTO_COVER(iParam0))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0) <= PED::_0x46BF2A810679D6E6(iParam0, 1f))
	{
		return false;
	}
	return true;
}

bool func_1090(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_557.f_20.f_22[iVar0 /*19*/].f_12 != iParam0)
		{
		}
		else if (!func_55(Local_15.f_2[iVar0 /*9*/].f_2))
		{
		}
		else if (!func_718(iVar0, 255))
		{
		}
		else if (iParam1 != -1 && iParam1 == iVar0)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1091(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam2 && PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (PED::IS_PED_FLEEING(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_FATALLY_INJURED(iParam0))
	{
		return true;
	}
	if (!bParam2 && TASK::_0xF330A5C062B29BED(iParam0))
	{
		return true;
	}
	if (bParam1 && PED::_0x7583A9D35248B83F(iParam0))
	{
		return true;
	}
	if ((!bParam2 && !bParam3) && PED::_0x77525BBF433F2CD6(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("EVENT_GUN_AIMED_AT")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("EVENT_SHOT_FIRED_BULLET_IMPACT")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("EVENT_SHOT_FIRED_WHIZZED_BY")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("EVENT_SHOT_FIRED_BASE")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("EVENT_SHOT_FIRED")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("EVENT_DAMAGE")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("EVENT_SHOCKING_DEAD_BODY")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("EVENT_SHOCKING_PED_KNOCKED_INTO_BY_PLAYER")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("EVENT_SHOCKING_PED_SHOT")))
		{
			return true;
		}
	}
	return false;
}

bool func_1092(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	float fVar1;

	if (Local_15.f_2[iParam0 /*9*/].f_2 == joaat("ANIMAL_EXTRA"))
	{
		return false;
	}
	if (Local_15.f_2[iParam0 /*9*/].f_6 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_2[iParam0 /*9*/].f_6))
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_15.f_2[iParam0 /*9*/].f_6);
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	fVar1 = func_1086(iParam0);
	if (!func_176(iParam0, 8) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false)) > fVar1)
	{
		return false;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1) && !TASK::_0x0C3CB2E600C8977D(iParam1, 0))
	{
		PED::_0x463803429297117C(iParam1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 3, 1);
		func_1242(iParam0, iVar0);
		return true;
	}
	if (((func_176(iParam0, 8) && !func_176(iParam0, 16384)) && !(func_176(iParam0, 131072) && iParam2 == joaat("WEAPON_MELEE_LANTERN"))) && func_1243(iParam3))
	{
		if (!func_1243(iParam2))
		{
			func_1242(iParam0, iVar0);
			func_896(iParam0, iParam3, 0, 1, 1);
			return true;
		}
		func_1244(iParam0, iVar0);
		return true;
	}
	func_1242(iParam0, iVar0);
	return true;
}

bool func_1093(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (Local_15.f_2[iParam0 /*9*/].f_2 == joaat("ANIMAL_EXTRA"))
	{
		return false;
	}
	if (!func_176(iParam0, 131072))
	{
		return false;
	}
	if (func_176(iParam0, 1))
	{
		return false;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 7 && iVar0 <= 19)
	{
		if (iParam2 == joaat("WEAPON_REVOLVER_CATTLEMAN"))
		{
			return false;
		}
		func_896(iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 0);
		return true;
	}
	if (iParam2 == joaat("WEAPON_MELEE_LANTERN"))
	{
		return false;
	}
	func_896(iParam0, joaat("WEAPON_MELEE_LANTERN"), 1, 1, 0);
	return true;
}

void func_1094(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (!PED::_IS_PED_USING_SCENARIO_HASH(iVar0, iParam1) && func_411(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam2) > 0.8f)
	{
		if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 713668775, 0) != 2)
		{
			return;
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vParam2, 1f, -1, 0.25f, 0, 40000f);
		return;
	}
	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), -1098463898, 0) != 2)
	{
		return;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iVar0, iParam1))
	{
		return;
	}
	if (bParam6 && func_178(iVar0))
	{
		if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 716706914, 0) != 2)
		{
			return;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
		return;
	}
	TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, iParam1, vParam2, fParam5, 0, true, false, 0, -1f, false);
}

void func_1095(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), joaat("SCRIPT_TASK_MELEE"), 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_MELEE(iVar0, iParam1, 0, 1, 1, 1065353216 /* Float: 1f */, 1, -1082130432 /* Float: -1f */);
}

void func_1096(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 923520851, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_WANDER_IN_AREA(iVar0, vParam1, fParam4, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
}

void func_1097(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 1056466932, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iVar0, iParam1, vParam2, iParam5, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
}

bool func_1098(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (((func_116(iParam0, &Var0) && func_345(Var0, 101317385, iParam1, 0)) && *iParam1 >= 0) && *iParam1 < 18)
	{
		return true;
	}
	return false;
}

int func_1099(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (func_116(iParam0, &Var0) && func_117(Var0, -1463370342, &iVar5, 0))
	{
		return func_995(iVar5);
	}
	return -1;
}

void func_1100(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), -1794415470, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (AITRANSPORT::_0x619E63980BFC0096(iVar0, iParam1, 0))
	{
		return;
	}
	TASK::TASK_ENTER_VEHICLE(iVar0, iParam1, -1, iParam2, fParam3, 1, 0);
}

void func_1101(int iParam0, char[4] cParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 658540077, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar0, cParam1, 0, iParam2, -1, iParam3, 0, -1);
}

void func_1102(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), -1665583462, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, iParam1, 0, 0);
}

int func_1103(int iParam0, float fParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && func_348(Var0, -728132736, fParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1104(int iParam0, float fParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && func_348(Var0, 912480409, fParam1, 0))
	{
		return 1;
	}
	return 0;
}

void func_1105(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	int iVar0;
	vector3 vVar1;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 713668775, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (!bParam7)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		if (MISC::ABSF((vVar1.z - vParam1.z)) < 2f && func_411(vVar1, vParam1) < 0.8f)
		{
			if ((fParam5 != 40000f && !func_1245(iVar0, fParam5, 1106247680 /* Float: 30f */)) && !func_895(iVar0, 1920390111))
			{
				TASK::TASK_ACHIEVE_HEADING(iVar0, fParam5, 0);
			}
			return;
		}
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vParam1, fParam4, -1, fParam6, 0, fParam5);
}

void func_1106(int iParam0, int iParam1)
{
	int iVar0;
	char cVar1[32];

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), -1253019028, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	StringCopy(&cVar1, func_127(Local_557.f_20.f_22[iParam0 /*19*/].f_13), 32);
	TASK::TASK_PATROL(iVar0, &cVar1, iParam1, true, true);
}

Vector3 func_1107(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	func_116(iParam0, &Var0);
	func_347(Var0, -261480992, &vVar5, 1);
	return vVar5;
}

void func_1108(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[1];
	int iVar5;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	iVar1 = iParam1;
	if (func_1246(iVar0, iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar0))
	{
		return;
	}
	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), -76381094, 0) != 2)
	{
		return;
	}
	if (func_452(vParam2))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!TASK::_0x6EEAD6AF637DA752(vParam2, iVar1, 1f, 0))
	{
		iVar5 = 1;
		TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(vParam2, 1f, &uVar3, iVar5);
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(uVar3[0]) || TASK::_GET_SCENARIO_POINT_TYPE(uVar3[0]) != iVar1)
		{
			return;
		}
		iVar2 = uVar3[0];
	}
	else
	{
		iVar2 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam2, iVar1, 1f, 0, false);
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar2))
		{
			return;
		}
	}
	TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar2, 0, 0, true, false, 0, false, -1f, false);
}

int func_1109(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	func_345(Var0, 2069982589, &uVar5, 1);
	return uVar5;
}

void func_1110(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	iVar1 = iParam1;
	if (func_1246(iVar0, iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar0))
	{
		return;
	}
	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), -76381094, 0) != 2)
	{
		return;
	}
	if (func_452(vParam2))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam5 < 0 || iParam5 >= 18)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_198[iParam5]) || !func_50(iParam5, 2))
	{
		return;
	}
	iVar2 = NETWORK::_NET_TO_PROPSET(Local_15.f_198[iParam5]);
	if (!PROPSET::_DOES_PROPSET_EXIST(iVar2))
	{
		return;
	}
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0x0D322AEF8878B8FE(iVar2, iVar3);
	iVar7 = ITEMSET::GET_ITEMSET_SIZE(iVar3);
	fVar9 = 1f;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		iVar4 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar6, iVar3);
		if (iParam1 != TASK::_GET_SCENARIO_POINT_TYPE(iVar4))
		{
		}
		else
		{
			fVar8 = BUILTIN::VDIST(TASK::_GET_SCENARIO_POINT_COORDS(iVar4, true), vParam2);
			if (fVar8 > fVar9)
			{
			}
			else
			{
				fVar9 = fVar8;
				iVar5 = iVar4;
			}
		}
		iVar6++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar3);
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar5))
	{
		return;
	}
	TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar5, 0, 0, true, false, 0, false, -1f, false);
}

bool func_1111(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	func_346(Var0, -401112943, &uVar5, 0);
	return uVar5;
}

Vector3 func_1112(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	func_116(iParam0, &Var0);
	func_347(Var0, 307635954, &vVar5, 0);
	return vVar5;
}

bool func_1113(int iParam0, float fParam1)
{
	struct<5> Var0;

	if (!func_116(iParam0, &Var0) || !func_348(Var0, -311657344, fParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (func_1247(iVar0, 0))
	{
		return;
	}
	iVar1 = func_1115(iVar0, 100f);
	if (iVar1 == 255)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iVar0, 0, 3));
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && func_1014(iVar0, iVar2, 1, 1) < 200f)
		{
			TASK::TASK_COMBAT_PED(iVar0, iVar2, 16384, 524288);
			return;
		}
	}
	TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 100f, 0, iParam1);
}

int func_1115(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar0 = fParam1;
	iVar4 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_47(&(Local_300[iVar2 /*8*/]), 4))
		{
		}
		else if (!func_396(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			fVar1 = func_1014(iParam0, PLAYER::GET_PLAYER_PED(iVar3), 1, 1);
			if (fVar1 > fVar0)
			{
			}
			else
			{
				fVar0 = fVar1;
				iVar4 = iVar3;
			}
		}
		iVar2++;
	}
	return iVar4;
}

void func_1116(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 474215631, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_COWER(iVar0, -1, iParam1, 0);
}

void func_1117(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 1868526510, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_MOUNT_ANIMAL(iVar0, iParam1, -1, -1, iParam2, 1, 0, 0);
}

void func_1118(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), -828834893, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
	{
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && AITRANSPORT::_0x660639BC60157048(iVar0, iVar1))
	{
		return;
	}
	TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iParam1);
}

void func_1119(int iParam0, int iParam1, float fParam2, int iParam3)
{
	func_1121(iParam0, iParam1, fParam2, iParam3 | 16777216 | 262144);
}

void func_1120(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	func_919(iParam0, vParam1, fParam4, iParam5 | 16777216 | 262144);
}

void func_1121(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 518218985, 0) != 2)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = 0;
	if (!func_51(iParam0, 65536) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_15.f_2[iParam0 /*9*/].f_1))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/].f_1);
		if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			iVar0 = 0;
		}
	}
	iVar1 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	iVar2 = 0;
	if (PED::IS_PED_ON_MOUNT(iVar1))
	{
		iVar2 = PED::GET_MOUNT(iVar1);
	}
	TASK::_TASK_SMART_FLEE_STYLE_PED(iVar1, iParam1, 4, iParam3, fParam2, -1, iVar2);
}

void func_1122(int iParam0)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), -2117564886, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_COMBAT_HATED_TARGETS(iVar0, 3f);
}

bool func_1123(struct<2> Param0)
{
	return func_832(Param0) == 0;
}

int func_1124(struct<2> Param0)
{
	int iVar0;

	if (Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1900806 - 1))
	{
		if (func_74(Global_1900807[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1125(struct<2> Param0, bool bParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (!func_1123(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1248(Param0);
	}
	func_835(Param0, 1);
	bParam2 = bParam2;
}

void func_1126(struct<2> Param0)
{
	struct<32> Var0;

	if (func_67(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_67(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_67(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_1130(Param0, &Var0))
		{
			if (Var0.f_29 == joaat("RACE_IMPROMPTU"))
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("RACE"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_1127(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_1056(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736.f_66;
	func_1249(Param0, iVar0);
	Global_1900736.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736.f_66)
	{
		return iVar0;
	}
	func_1209(iVar0, iParam2);
	return iParam2;
}

bool func_1128(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_1129(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return 0;
	}
	iVar0 = func_1056(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1250(Param0, func_836(0), iParam2))
	{
		func_835(func_836(0), 3);
		func_835(func_836(iVar0), 4);
		return 0;
	}
	func_1209(iVar0, 0);
	func_835(func_836(0), 3);
	func_835(func_836(1), 4);
	return 1;
}

bool func_1130(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_310(Param0, &vVar0);
	if (func_1251(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_1131(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

void func_1132(int iParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		func_285(iParam1);
	}
	*iParam1 = MAP::_0x3E593DF9C2962EC6(func_966(iParam0));
	if (func_967(iParam0, &iVar0))
	{
		MAP::SET_BLIP_SPRITE(*iParam1, iVar0, false);
	}
	if (func_1252(iParam0, &iVar1))
	{
		MAP::_BLIP_SET_MODIFIER(*iParam1, iVar1);
	}
}

char* func_1133(int iParam0, int iParam1)
{
	return func_931(PLAYER::GET_PLAYER_NAME(iParam0), iParam1);
}

char* func_1134(int iParam0, int iParam1)
{
	return func_931(func_662(iParam0, 1, 0), iParam1);
}

char* func_1135(int iParam0)
{
	int iVar0;

	iVar0 = Local_15.f_282;
	if (GANG::_0xD6F6ACF4392187FB(iVar0) && GANG::_0x149A2751AB66AC02(iVar0) > 1)
	{
		return func_1134(iVar0, iParam0);
	}
	return func_1133(Local_15.f_283, iParam0);
}

void func_1136(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

var func_1137(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1138(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLIP_MP_DEADEYE"):
		case joaat("BLIP_MP_MISSION_SAMSON_FINCH"):
		case joaat("BLIP_ADVERSARY_MEDIUM"):
		case joaat("BLIP_AMBIENT_HUNTER"):
		case joaat("BLIP_MP_BASE_B"):
		case joaat("BLIP_MP_BASE"):
		case joaat("BLIP_MP_BOUNTY_DEAD"):
		case joaat("BLIP_MP_LOCATION_S"):
		case joaat("BLIP_MP_GUN_FOR_HIRE"):
		case joaat("BLIP_AMBIENT_POSSE_DEPUTY_LOWER"):
		case joaat("BLIP_WANTED_POSTER"):
		case joaat("BLIP_MP_COACH_SMUGGLE"):
		case joaat("BLIP_MP_BASE_A"):
		case joaat("BLIP_MP_BASE_D"):
		case joaat("BLIP_PED_9"):
		case joaat("BLIP_MP_MISSION_OLD_MAN_JONES"):
		case joaat("BLIP_MP_LOCATION_M"):
		case joaat("BLIP_MP_FLAG"):
		case joaat("BLIP_MP_CASH_CHECKPOINT"):
		case joaat("BLIP_MP_MISSION_BRONTE"):
		case joaat("BLIP_PED_10"):
		case joaat("BLIP_MP_SPAWNPOINT"):
		case joaat("BLIP_MP_MISSION_HORLEY"):
		case joaat("BLIP_MP_ROUNDUP"):
		case joaat("BLIP_PED_8"):
		case joaat("BLIP_MP_BASE_C"):
		case joaat("BLIP_MP_LOCATION_E"):
		case joaat("BLIP_MP_MISSION_REVENGE"):
		case joaat("BLIP_TROPHY"):
		case joaat("BLIP_MP_COACH_INTERCEPT"):
		case joaat("BLIP_AMBIENT_HOT_TARGET"):
		case joaat("BLIP_MP_LOCATION_L"):
		case joaat("BLIP_PED_11"):
		case joaat("BLIP_MP_MISSION_TBD"):
		case joaat("BLIP_PREDATOR"):
		case joaat("BLIP_PED_7"):
		case joaat("BLIP_MP_LOCATION_D"):
		case joaat("BLIP_MP_BASE_F"):
		case joaat("BLIP_AMBIENT_VIP"):
		case joaat("BLIP_MP_BEAST"):
		case joaat("BLIP_MP_PLAYLIST_ADVERSARY_SPECIAL"):
		case joaat("BLIP_MP_LOCATION_P"):
		case joaat("BLIP_MP_PLAYLIST_FREEFORALL"):
		case joaat("BLIP_BOLT"):
		case joaat("BLIP_MP_COACH_RECOVER"):
		case joaat("BLIP_MP_LOCATION_N"):
		case joaat("BLIP_MP_LOCATION_O"):
		case joaat("BLIP_MP_SUPPLIES"):
		case joaat("BLIP_PED_6"):
		case joaat("BLIP_GUNSLINGER"):
		case joaat("BLIP_MP_GAME_MAGNIFICENT_FOUR"):
		case joaat("BLIP_AMBIENT_POSSE_LEADER_LOWER"):
		case joaat("BLIP_MP_PLAYLIST_SERIES_8"):
		case joaat("BLIP_MP_BASE_E"):
		case joaat("BLIP_MP_LOCATION_G"):
		case joaat("BLIP_MP_GAME_VIP"):
		case joaat("BLIP_AMBIENT_POSSE_DEPUTY_HIGHER"):
		case joaat("BLIP_MP_MISSION_MARSHALL_TOM_DAVIES"):
		case joaat("BLIP_PED_5"):
		case joaat("BLIP_MP_LOCATION_Y"):
		case joaat("BLIP_MP_LOCATION_H"):
		case joaat("BLIP_AMBIENT_DELIVERY"):
		case joaat("BLIP_MP_LOCATION_A"):
		case joaat("BLIP_AMBIENT_BOUNTY_HUNTER_WAGON"):
		case joaat("BLIP_AMBIENT_CRATE"):
		case joaat("BLIP_MOONSHINE"):
		case joaat("BLIP_MP_LOCATION_K"):
		case joaat("BLIP_JOB_BOARD"):
		case joaat("BLIP_TEAMSTERS"):
		case joaat("BLIP_MP_BASE_H"):
		case joaat("BLIP_MP_MISSION_SEVEN"):
		case joaat("BLIP_ADVERSARY_LARGE"):
		case joaat("BLIP_MP_LOCATION_C"):
		case joaat("BLIP_PED_16"):
		case joaat("BLIP_MP_PLAYLIST_SERIES_4"):
		case joaat("BLIP_MP_PLAYLIST_OBJECTIVE"):
		case joaat("BLIP_MP_LOCATION_J"):
		case joaat("BLIP_MP_MISSION_ROBBERY"):
		case joaat("BLIP_PED_4"):
		case joaat("BLIP_MP_BASE_G"):
		case joaat("BLIP_MP_RUSTLING"):
		case joaat("BLIP_MP_LOCATION_B"):
		case joaat("BLIP_MP_PLAYLIST_ADVERSARY"):
		case joaat("BLIP_MP_MISSION_CLAY"):
		case joaat("BLIP_PED_3"):
		case joaat("BLIP_AMBIENT_KING"):
		case joaat("BLIP_MP_GAME_ANIMAL_PROTECTION"):
		case joaat("BLIP_SPECIAL_SERIES_2"):
		case joaat("BLIP_MOONSHINE_STILL"):
		case joaat("BLIP_MP_GAME_RACE_HORSE"):
		case joaat("BLIP_MP_GAME_MULTI_TARGET"):
		case joaat("BLIP_MP_ATTACK_TARGET"):
		case joaat("BLIP_MP_LOCATION_V"):
		case joaat("BLIP_SPECIAL_SERIES_1"):
		case joaat("BLIP_MP_LOCATION_X"):
		case joaat("BLIP_PED_2"):
		case joaat("BLIP_ADVERSARY_SMALL"):
		case joaat("BLIP_MP_COACH_ESCORT"):
		case joaat("BLIP_MP_LOCATION_U"):
		case joaat("BLIP_PED_12"):
		case joaat("BLIP_OUTLAW"):
		case joaat("BLIP_AMBIENT_POSSE_DEPUTY"):
		case joaat("BLIP_MP_LOCATION_W"):
		case joaat("BLIP_MP_LOCATION_I"):
		case joaat("BLIP_BAG_CAPTURE"):
		case joaat("BLIP_MP_MISSION_JESSE"):
		case joaat("BLIP_MP_PLAYLIST_EXCLUSIVE"):
		case joaat("BLIP_MP_PLAYLIST_TEAMGAME"):
		case joaat("BLIP_HIRE_CAMP_FOLLOWER"):
		case joaat("BLIP_PED_1"):
		case joaat("BLIP_MP_GAME_RUNAWAY_TRAIN"):
		case joaat("BLIP_BAG_DEFEND"):
		case joaat("BLIP_MP_DEFEND_TARGET"):
		case joaat("BLIP_AMBIENT_MARKED_FOR_DEATH"):
		case joaat("BLIP_PED_13"):
		case joaat("BLIP_MP_LOCATION_Z"):
		case joaat("BLIP_MOONSHINE_VAT"):
		case joaat("BLIP_MP_LOCATION_R"):
		case joaat("BLIP_BALL"):
		case joaat("BLIP_HEALTH"):
		case joaat("BLIP_MP_PLAYLIST_SERIES_12"):
		case joaat("BLIP_AMBIENT_POSSE_LEADER_HIGHER"):
		case joaat("BLIP_PED_14"):
		case joaat("BLIP_PRODUCT_MOONSHINE"):
		case joaat("BLIP_MP_LOCATION_F"):
		case joaat("BLIP_MP_GAME_TREASURE_HUNT"):
		case joaat("BLIP_MP_LOCATION_Q"):
		case joaat("BLIP_MP_BASE_J"):
		case joaat("BLIP_NED_KELLY_OUTFIT"):
		case joaat("BLIP_MP_DELIVER_TARGET"):
		case joaat("BLIP_PED_15"):
		case joaat("BLIP_MP_PLAYLIST_RACES"):
		case joaat("BLIP_BUSINESS_MOONSHINE"):
		case joaat("BLIP_AMBIENT_POSSE_LEADER"):
		case joaat("BLIP_MP_GAME_RACE_CANOE"):
		case joaat("BLIP_MP_LOCATION_T"):
		case joaat("BLIP_MP_UGC"):
		case joaat("BLIP_MP_GAME_HILL"):
		case joaat("BLIP_MP_MISSION_BRAITHWAITE"):
		case joaat("BLIP_MP_BASE_I"):
			return joaat("BLIPS_MP");
	}
	return joaat("BLIPS");
}

bool func_1139()
{
	return true;
}

bool func_1140()
{
	return (!Global_1903133 && MISC::ABSI((MISC::GET_FRAME_COUNT() - Global_1903133.f_2)) >= 5);
}

void func_1141(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

bool func_1142()
{
	int iVar0;

	iVar0 = 1;
	if ((((((!AUDIO::_0xE368E8422C860BA7(func_796(), func_797(), -2) || !AUDIO::_0xE368E8422C860BA7(func_798(), func_797(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_799(), func_797(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_1253(), func_797(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_800(), func_797(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_801(), func_802(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_803(), func_804(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1143(var uParam0, var uParam1, int iParam2)
{
	switch (func_1254(iParam2))
	{
		case 0:
			func_1255(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_1256(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_1257(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_1258(uParam0, uParam1, iParam2, -1082130432 /* Float: -1f */);
			break;
		case 4:
			func_1259(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_1144(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0, bParam1);
}

void func_1145(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iParam4 == 0)
	{
		iParam4 = joaat("COLOR_PURE_WHITE");
	}
	(*uParam1)[iParam2 /*34*/] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5, sParam3);
	func_1255((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_4), 21, 0);
	func_1255((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_5), 20, 0);
	func_1255((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_7), 23, 0);
	func_1255((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_8), 22, 0);
	func_1255((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_9), 24, 0);
	func_1255((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_2), 18, iParam4);
	if (iParam5 == 0)
	{
		func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_6), 25);
	}
	else
	{
		func_1255((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_6), 25, iParam5);
	}
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_1), 17);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_3), 19);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_10), 26);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_11), 27);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_20), 16);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_21), 14);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_22), 15);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_12), 29);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_13), 28);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_14), 30);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_15), 31);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_16), 32);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_17), 33);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_18), 34);
	func_1143((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_19), 35);
}

void func_1146(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_1147(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar6 = func_580((iVar5 / 60), 0, 180);
	iVar7 = func_580((iVar5 % 60), 0, 60);
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

void func_1148(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0, sParam1);
}

void func_1149(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 10000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 10000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = AUDIO::GET_SOUND_ID();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || MISC::ARE_STRINGS_EQUAL(sParam2, func_799()))
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, func_799(), func_797(), 1);
			}
			else
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, sParam2, func_797(), 1);
				AUDIO::_0x9821B68CD3E05F2B("Time", 10f, sParam2, func_797());
			}
		}
	}
	else
	{
		func_494(uParam0);
	}
}

void func_1150(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_12, func_1253(), func_797(), 1);
	}
}

void func_1151(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case joaat("ATTACK"):
			*iParam1 = func_1260();
			*uParam2 = func_1260();
			*iParam3 = func_1260();
			*uParam4 = func_1260();
			*uParam5 = func_1261();
			*uParam6 = func_1260();
			*uParam7 = func_1260();
			break;
		case joaat("DELIVER"):
			*iParam1 = func_1262();
			*uParam2 = func_1262();
			*iParam3 = func_1260();
			*uParam4 = func_1261();
			*uParam5 = func_1261();
			*uParam6 = func_1260();
			*uParam7 = func_1260();
			break;
		case joaat("DEFEND"):
			*iParam1 = func_1261();
			*uParam2 = func_1262();
			*iParam3 = func_1260();
			*uParam4 = func_1261();
			*uParam5 = func_1261();
			*uParam6 = func_1260();
			*uParam7 = func_1260();
			break;
		case joaat("COLLECT"):
			*iParam1 = func_1260();
			*uParam2 = func_1260();
			*iParam3 = func_1261();
			*uParam4 = func_1260();
			*uParam5 = func_1261();
			*uParam6 = func_1260();
			*uParam7 = func_1260();
			break;
	}
}

void func_1152(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	float fVar10;
	char[] cVar11[8];

	bVar3 = true;
	bVar4 = true;
	iVar5 = (uParam0[iParam1 /*34*/])->f_25;
	iVar6 = (uParam0[iParam1 /*34*/])->f_26;
	iVar9 = (uParam0[iParam1 /*34*/])->f_23;
	if (bParam10)
	{
		iVar9 = 0;
	}
	switch (iVar9)
	{
		case -1:
		case 0:
			bVar3 = false;
			break;
		case 5:
			iVar0 = iParam5;
			iVar2 = iParam5;
			break;
		case 6:
			iVar0 = iParam7;
			iVar2 = iParam7;
			break;
		case 7:
			bVar4 = false;
			iVar0 = func_1262();
			iVar2 = iParam6;
			iVar1 = iParam6;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 8:
			bVar4 = false;
			iVar0 = func_1262();
			iVar2 = iParam8;
			iVar1 = iParam8;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 2:
			bVar4 = false;
			iVar0 = func_1262();
			iVar2 = func_1262();
			iVar1 = iParam3;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_CROSS";
			break;
		case 3:
			bVar4 = false;
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
		case 9:
			iVar0 = func_1260();
			iVar2 = func_1260();
			break;
		case 4:
			iVar0 = iParam4;
			break;
		default:
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
	}
	func_1144((uParam0[iParam1 /*34*/])->f_21, bVar3);
	if (bVar3)
	{
		func_1263(uParam0, iParam1);
		func_1144((uParam0[iParam1 /*34*/])->f_11, bVar4);
		fVar10 = (uParam0[iParam1 /*34*/])->f_29;
		if ((uParam0[iParam1 /*34*/])->f_28 > 1)
		{
			fVar10 = (BUILTIN::TO_FLOAT((uParam0[iParam1 /*34*/])->f_27) / BUILTIN::TO_FLOAT((uParam0[iParam1 /*34*/])->f_28));
			if (bParam11 && !func_1264((uParam0[iParam1 /*34*/])->f_23))
			{
				iVar5 = 0;
				iVar6 = 0;
				StringIntConCat(&cVar11, (uParam0[iParam1 /*34*/])->f_27, 8);
				if (bParam12)
				{
					StringConCat(&cVar11, "/", 8);
					StringIntConCat(&cVar11, (uParam0[iParam1 /*34*/])->f_28, 8);
				}
			}
			func_1148((uParam0[iParam1 /*34*/])->f_20, &cVar11);
		}
		else
		{
			func_1148((uParam0[iParam1 /*34*/])->f_20, "");
		}
		if (fVar10 >= 0f)
		{
			if (!bParam9)
			{
				func_1265((uParam0[iParam1 /*34*/])->f_2, iVar2);
			}
			func_1266((uParam0[iParam1 /*34*/])->f_1, fVar10);
			func_1144((uParam0[iParam1 /*34*/])->f_10, 0);
			func_1144((uParam0[iParam1 /*34*/])->f_3, 1);
		}
		else
		{
			func_1144((uParam0[iParam1 /*34*/])->f_10, 1);
			func_1144((uParam0[iParam1 /*34*/])->f_3, 0);
		}
		if (iVar6 != 0)
		{
			if (!bParam13)
			{
				func_1265((uParam0[iParam1 /*34*/])->f_6, iVar0);
			}
			func_1265((uParam0[iParam1 /*34*/])->f_4, iVar5);
			func_1265((uParam0[iParam1 /*34*/])->f_5, iVar6);
		}
		if (!MISC::IS_STRING_NULL(sVar8))
		{
			func_1265((uParam0[iParam1 /*34*/])->f_14, iVar1);
			func_1148((uParam0[iParam1 /*34*/])->f_12, sVar7);
			func_1148((uParam0[iParam1 /*34*/])->f_13, sVar8);
			func_1144((uParam0[iParam1 /*34*/])->f_15, 1);
		}
		else
		{
			func_1144((uParam0[iParam1 /*34*/])->f_15, 0);
		}
		func_1144((uParam0[iParam1 /*34*/])->f_16, (uParam0[iParam1 /*34*/])->f_30);
	}
}

char* func_1153()
{
	return "NET_AS_BLIP_TARGET";
}

void func_1154(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

bool func_1155()
{
	if ((func_1267() % 9) != 0)
	{
		return false;
	}
	return true;
}

bool func_1156(int iParam0)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_15.f_234[iParam0 /*2*/]))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_234[iParam0 /*2*/]))
	{
		return true;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_15.f_234[iParam0 /*2*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	return false;
}

void func_1157(int iParam0, int iParam1)
{
	if (Global_1071686.f_21689[iParam0 /*8*/].f_5 != iParam1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1071686.f_21689[iParam0 /*8*/]))
		{
			if (Global_1071686.f_21689[iParam0 /*8*/].f_5 != 0)
			{
				MAP::_BLIP_REMOVE_MODIFIER(Global_1071686.f_21689[iParam0 /*8*/], Global_1071686.f_21689[iParam0 /*8*/].f_5);
			}
		}
		Global_1071686.f_21689[iParam0 /*8*/].f_5 = iParam1;
		func_805(iParam0);
	}
}

char* func_1158()
{
	return "RDRO_GFH_Sounds";
}

char* func_1159()
{
	return "match_start";
}

var func_1160(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = sParam3;
	Var0.f_2 = sParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar20 = UIFEED::_0xA6F4216AB10EB08E(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

char[] func_1161()
{
	return func_110(&(Local_557.f_584.f_68));
}

bool func_1162()
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(func_105(Local_557.f_584.f_68));
}

char* func_1163()
{
	return "RDRO_GFH_Sounds";
}

char* func_1164()
{
	return "match_end";
}

var func_1165(char* sParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<4> Var0;
	struct<4> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = sParam4;
	Var0.f_2 = sParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	uVar20 = UIFEED::_0x02BCC0FE9EBA3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

char* func_1166()
{
	var uVar0;

	if (func_1268(&uVar0))
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_GO_TO_AREA_SPECIFIC", func_110(&uVar0));
	}
	return "NET_AS_OBJ_GO_TO_AREA";
}

char* func_1167(bool bParam0)
{
	if (bParam0)
	{
		return "NET_AS_OBJ_FIND_TARGETS_ST";
	}
	return "NET_AS_OBJ_FIND_TARGETS";
}

char* func_1168(bool bParam0)
{
	if (bParam0)
	{
		return "NET_AS_OBJ_PROTECT_TARGETS_ST";
	}
	return "NET_AS_OBJ_PROTECT_TARGETS";
}

char* func_1169()
{
	bool bVar0;

	bVar0 = true;
	if (GANG::_0xD6F6ACF4392187FB(Local_15.f_282) && GANG::_0x149A2751AB66AC02(Local_15.f_282) > 1)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_PLAYER_TARGET_SURVIVE", func_931(PLAYER::GET_PLAYER_NAME(Local_15.f_283), joaat("COLOR_RED")));
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_PLAYER_TARGET_SURVIVE", func_931(func_662(Local_15.f_282, 1, 0), joaat("COLOR_RED")));
}

char* func_1170()
{
	int iVar0;
	int iVar1;

	iVar0 = 255;
	if (Local_557.f_20.f_16 == joaat("POSSE"))
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (Local_15.f_234[iVar1 /*2*/] == 255)
			{
			}
			else if (func_163(iVar1))
			{
			}
			else
			{
				iVar0 = Local_15.f_234[iVar1 /*2*/];
			}
			else
			{
				iVar1++;
			}
		}
	}
	else
	{
		iVar0 = Local_15.f_234[0 /*2*/];
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_PLAYER_TARGET_HELP_SPECIFIC", func_931(PLAYER::GET_PLAYER_NAME(iVar0), joaat("COLOR_POSSE_ALLY")));
	}
	return "NET_AS_OBJ_PLAYER_TARGET_HELP";
}

char* func_1171()
{
	bool bVar0;

	bVar0 = true;
	if (GANG::_0xD6F6ACF4392187FB(Local_15.f_282) && GANG::_0x149A2751AB66AC02(Local_15.f_282) > 1)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_POSSE_TARGET_HELP", func_931(PLAYER::GET_PLAYER_NAME(Local_15.f_283), joaat("COLOR_RED")));
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_POSSE_TARGET_HELP", func_931(func_662(Local_15.f_282, 1, 0), joaat("COLOR_RED")));
}

char* func_1172()
{
	if (Local_557.f_20.f_16 == joaat("PLAYER"))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_15.f_234[0 /*2*/]))
		{
			return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_ASSASSINATE_PVP", func_931(PLAYER::GET_PLAYER_NAME(Local_15.f_234[0 /*2*/]), joaat("COLOR_ENEMY")));
		}
	}
	else if (Local_557.f_20.f_16 == joaat("POSSE"))
	{
		if (Local_15.f_284 != 0 && GANG::_0x0F99F6436528A089(Local_15.f_284))
		{
			return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_ASSASSINATE_PVP", func_931(func_662(Local_15.f_284, 1, 0), joaat("COLOR_ENEMY")));
		}
	}
	return "";
}

char* func_1173(bool bParam0)
{
	if (bParam0)
	{
		return "NET_AS_OBJ_KILL_NONSTEALTH_TARGET_ST";
	}
	return "NET_AS_OBJ_KILL_NONSTEALTH_TARGET";
}

bool func_1174(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) == iParam0;
}

void func_1175(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;

	bVar0 = iParam4;
	func_346(*uParam0, iParam2, &bVar0, 0);
	if (bVar0)
	{
		func_461(iParam1, iParam3);
	}
}

void func_1176(int iParam0)
{
	func_1269(iParam0);
	PED::_0xC9151483CC06A414(iParam0);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_STOCK_USED_SADDLE_000"));
			break;
		case 1:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_STOCK_USED_SADDLE_004"));
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_BEDROLLS"), 0, 0);
			break;
		case 1:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_000"));
			break;
		case 2:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_001"));
			break;
		case 3:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_002"));
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			func_1271(iParam0, 1);
			break;
		case 1:
			func_1271(iParam0, 2);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_000"));
			break;
		case 1:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_001"));
			break;
		case 2:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_002"));
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLEBAGS"), 0, 0);
			break;
		case 1:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_000"));
			break;
		case 2:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_001"));
			break;
		case 3:
			func_1270(iParam0, joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_002"));
			break;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

int func_1177(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_1178(int iParam0)
{
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	if ((WEAPON::_0x95CA12E2C68043E5(iParam0, 0) || WEAPON::_0x80BB243789008A82(iParam0, 0)) || WEAPON::_0x495A04CAEC263AF8(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, joaat("MOUNTEDCOMBAT_RANGEDRIFLE"), -1082130432 /* Float: -1f */);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
	else if (WEAPON::_0xABC18A28BAD4B46F(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, joaat("MOUNTEDCOMBAT_RANGEDSHOTGUN"), -1082130432 /* Float: -1f */);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
	else if (WEAPON::_0x5B235F24472F2C3B(iParam0, 0) || WEAPON::_0xBFCA7AFABF9D7967(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, joaat("MOUNTEDCOMBAT_RANGEDREVOLVER"), -1082130432 /* Float: -1f */);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
}

float func_1179(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_1180(vector3 vParam0)
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

bool func_1181(struct<4> Param0, var uParam4, var uParam5)
{
	if ((Param0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return false;
	}
	if ((Param0.f_3 == 0f && Param0.f_3.f_1 == 0f) && Param0.f_3.f_2 == 0f)
	{
		return false;
	}
	return true;
}

int func_1182(vector3 vParam0, vector3 vParam3, struct<4> Param6, var uParam10, var uParam11)
{
	if (vParam0.z > Param6.f_2 && vParam0.z > Param6.f_3.f_2)
	{
		return 0;
	}
	if (vParam0.z < Param6.f_2 && vParam0.z < Param6.f_3.f_2)
	{
		return 0;
	}
	if (vParam3.z > Param6.f_2 && vParam3.z > Param6.f_3.f_2)
	{
		return 0;
	}
	if (vParam3.z < Param6.f_2 && vParam3.z < Param6.f_3.f_2)
	{
		return 0;
	}
	return func_1272(vParam0, vParam3, Param6, Param6.f_3);
}

bool func_1183(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_1184(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 31) & 1 != 0;
}

var func_1185(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_1187(&uVar0))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 7, func_1189(iParam0), 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 10, iParam1, 0, 1))
	{
		return 0;
	}
	return func_1273(&uVar0);
}

int func_1186(int iParam0)
{
	var uVar0;

	if (!func_1187(&uVar0))
	{
		return -1;
	}
	if (!func_1188(&uVar0, 4, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar0, 6, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar0, 8, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1188(&uVar0, 9, iParam0, 0, 1))
	{
		return -1;
	}
	return func_1274(&uVar0);
}

bool func_1187(int iParam0)
{
	var uVar0;
	var uVar5;

	uVar5 = Global_1071686.f_28448[31 /*4*/].f_3;
	if (!DATAFILE::_0x7907969497EA92F5(uVar5))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar5))
	{
		return false;
	}
	MISC::_COPY_MEMORY(iParam0, &uVar0, 5);
	*iParam0 = uVar5;
	return true;
}

bool func_1188(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_1189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BOUNTY");
		case 1:
			return joaat("MOONSHINE");
		case 2:
			return joaat("MOONSHINE_RECIPE");
		case 3:
			return joaat("LEGENDARY_ANIMAL");
		default:
			break;
	}
	return 0;
}

int func_1190(var uParam0, int iParam1)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
	return uVar0;
}

int func_1191(var uParam0)
{
	int iVar0;

	iVar0 = DATAFILE::_0xE13634BB6BAF0734(*uParam0, uParam0->f_1);
	return iVar0;
}

int func_1192(int iParam0)
{
	struct<5> Var0;

	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 16, 0, 0, 0))
	{
		return 0;
	}
	return func_1275(Var0, 1);
}

int func_1193(int iParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	var uVar4;
	var uVar5;
	struct<5> Var6;
	var uVar11;
	var uVar12;
	int iVar13;

	MISC::_COPY_MEMORY(iParam2, &uVar0, 4);
	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var6))
	{
		return 0;
	}
	if (!func_1078(Var6, &(Var6.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var6, &(Var6.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var6, &(Var6.f_1), 16, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1078(Var6, &(Var6.f_1), 17, iParam1, 0, 0))
	{
		return 0;
	}
	iVar13 = func_1276(Var6);
	func_1079(Var6, uParam3, &uVar5, &uVar4);
	Var6.f_1 = uVar5;
	if (!func_1080(Var6, iVar13, iParam2, &uVar11, &uVar12))
	{
		return 0;
	}
	Var6.f_1 = uVar4;
	iParam2->f_2 = iVar13;
	switch (iVar13)
	{
		case joaat("COOLDOWN_TYPE"):
			iParam2->f_3 = -2147483648;
			break;
		default:
			if (func_1275(Var6, 5) != 0)
			{
				iParam2->f_3 = func_1277(Var6, joaat("TRIGGER"));
			}
			break;
	}
	return 1;
}

void func_1194(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	vector3 vVar2;
	var uVar9;
	var uVar11;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	bool bVar17;

	vVar2.f_2 = 4;
	Var0 = { func_1278(iParam3) };
	if (!func_1279(&Var0))
	{
		return;
	}
	if (!func_869(iParam0, Var0, uParam2, &uVar9))
	{
		return;
	}
	if (!func_869(iParam0, Var0.f_1, uParam2, &uVar11))
	{
		return;
	}
	if (!func_1280(iParam0, iParam1, Var0, uParam2, &vVar2))
	{
		return;
	}
	bVar17 = func_1281(iParam0, uParam2, &iVar14, &uVar16, 0, iParam3);
	iVar13 = func_1282(&vVar2, -15, 0, 0, 0);
	iVar15 = func_1282(&vVar2, iVar13, 1, iVar13, joaat("END"));
	if (bVar17 && !bParam4)
	{
		if (iVar14 > iVar15)
		{
			return;
		}
	}
	STATS::STAT_ID_SET_INT(&uVar9, iVar13, true);
	STATS::STAT_ID_SET_INT(&uVar11, iParam1, true);
}

int func_1195(int iParam0)
{
	struct<5> Var0;

	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 37, 0, 0, 0))
	{
		return 0;
	}
	return func_1275(Var0, 7);
}

int func_1196(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;

	MISC::_COPY_MEMORY(iParam2, &uVar5, 5);
	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 37, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 38, iParam1, 0, 1))
	{
		return 0;
	}
	iParam2->f_1 = func_1283(Var0);
	*iParam2 = func_1284(Var0);
	iParam2->f_2 = func_1238(Var0, 1);
	iParam2->f_4 = func_1277(Var0, joaat("TRIGGER"));
	switch (iParam2->f_2)
	{
		case joaat("INT"):
			iParam2->f_3 = func_1285(Var0);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1197(int iParam0)
{
	struct<5> Var0;

	if (!func_1034(iParam0))
	{
		return 0;
	}
	if (!func_1077(&Var0))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1078(Var0, &(Var0.f_1), 42, 0, 0, 0))
	{
		return 0;
	}
	return func_1275(Var0, 10);
}

bool func_1198(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	var uVar5;
	var uVar6;

	if (!func_1034(iParam0))
	{
		return false;
	}
	if (!func_1077(&Var0))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 42, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 43, iParam1, 0, 1))
	{
		return false;
	}
	func_1079(Var0, uParam2, &uVar6, &uVar5);
	Var0.f_1 = uVar6;
	uParam3->f_1 = func_1286(Var0);
	uParam3->f_4 = func_1287(Var0);
	Var0.f_1 = uVar5;
	*uParam3 = func_1288(Var0);
	uParam3->f_2 = func_1277(Var0, joaat("TRIGGER"));
	uParam3->f_3 = func_1277(Var0, joaat("BEHAVIOR"));
	return true;
}

int func_1199(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var12;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_877(iParam0, uParam1, &Var12, &Var0, bParam2, iParam3, iParam4, bParam5);
}

void func_1200(int iParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;

	if (iParam0 & 81920 != 81920)
	{
		return;
	}
	if (*uParam1 == 0)
	{
		return;
	}
	iVar9 = func_1289(*uParam1);
	if (iVar9 == 0)
	{
		return;
	}
	iVar10 = func_1290(*uParam1);
	if (iVar10 == 0)
	{
		return;
	}
	func_1291(iVar10, &Var1);
	iVar11 = 0;
	while (iVar11 <= 5)
	{
		iVar0 = func_1292(iVar11);
		if (iVar9 != func_1293(Var1, iVar0, 0, 0))
		{
			iVar0 = 0;
		}
	else
	{
		}
		else
		{
			iVar11++;
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	Var5 = { func_1217(iVar9, Var1, iVar0, 0) };
	if (func_1294(&Var5))
	{
		return;
	}
	func_1295(&Var5, 1, 1);
}

bool func_1201(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_1034(iParam0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	if (!func_1077(&Var0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	if (!func_1078(Var0, &(Var0.f_1), 29, iParam2, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	*iParam3 = func_1296(Var0);
	*uParam4 = func_1297(Var0);
	if (iParam1 != 0)
	{
		if (func_1078(Var0, &(Var0.f_1), 30, 0, 0, 0))
		{
			if (func_1078(Var0, &(Var0.f_1), 31, iParam1, 0, 0))
			{
				*iParam3 = func_1296(Var0);
				*uParam4 = func_1297(Var0);
			}
		}
	}
	if (*iParam3 == 0)
	{
		*iParam3 = -1;
		*uParam4 = joaat("NONE");
		return false;
	}
	return true;
}

int func_1202(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_310(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_1203(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1298(&Var1, iParam0))
	{
		iVar0 = ((func_1299() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1204(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_1205(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_1206(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1071686.f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1071686.f_19550.f_1[iVar0 /*3*/] = { Global_1071686.f_19550.f_1[iVar0 + 1 /*3*/] };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686.f_19550 < 32)
	{
		Global_1071686.f_19550.f_1[Global_1071686.f_19550 /*3*/] = { vVar1 };
	}
	Global_1071686.f_19550 = (Global_1071686.f_19550 - 1);
	if (Global_1071686.f_19550 < 0)
	{
		Global_1071686.f_19550 = 0;
	}
	return 1;
}

int func_1207(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1071686.f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1071686.f_19550.f_1[iVar0 + 1 /*3*/] = { Global_1071686.f_19550.f_1[iVar0 /*3*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1071686.f_19550.f_1[iParam0 /*3*/] = { vVar1 };
	Global_1071686.f_19550++;
	if (Global_1071686.f_19550 > 32)
	{
		Global_1071686.f_19550 = 32;
	}
	return 1;
}

void func_1208(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_1209(int iParam0, int iParam1)
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
			func_1300((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1300(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_73(Global_1900736.f_1[0 /*2*/]))
	{
		func_835(Global_1900736.f_1[0 /*2*/], 3);
	}
}

void func_1210(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1211(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 33)
	{
		return false;
	}
	return true;
}

bool func_1212()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

bool func_1213(int iParam0, int iParam1, int iParam2)
{
	if (!func_1211(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			if (Global_1572887.f_13 != 0)
			{
				*iParam1 = joaat("SP_ACHIEVEMENTS");
			}
			else
			{
				*iParam1 = joaat("MP_ACHIEVEMENTS");
			}
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		case 17:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_PERSISTENT");
			break;
		case 18:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_BUCKLE");
			break;
		case 19:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_MVP");
			break;
		case 20:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_HORSES");
			break;
		case 21:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_COUNTER");
			break;
		case 22:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_HOME");
			break;
		case 23:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_CRAFTAMMO");
			break;
		case 24:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_CRAFT");
			break;
		case 25:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_BUTCHER");
			break;
		case 26:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_HERBS");
			break;
		case 27:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_INTRO");
			break;
		case 29:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_SERIES");
			break;
		case 28:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_GUN4HIRE");
			break;
		case 30:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_FREEMODE");
			break;
		case 31:
			*iParam1 = joaat("MP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MP_POSSE");
			break;
		case 32:
			if (Global_1572887.f_13 != 0)
			{
				*iParam1 = joaat("SP_ACHIEVEMENTS");
			}
			else
			{
				*iParam1 = joaat("MP_ACHIEVEMENTS");
			}
			*iParam2 = joaat("ACH_MP_BONDING");
			break;
		default:
			return false;
	}
	return true;
}

struct<5> func_1214(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_1301(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_1302(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_1217(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_1303(bParam1) };
			if (bParam2 && func_1304(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1215(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1215(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_1216(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_1305(bParam1) };
			switch (func_1306(iParam0))
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
			if (func_1307(iParam0, -1823706425))
			{
				Var0 = { func_1217(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_1307(iParam0, -1483207246))
			{
				Var0 = { func_1217(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_1217(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1307(iParam0, -1653629781))
			{
				Var0 = { func_1217(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_1308(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_1307(iParam0, -1653629781))
			{
				Var0 = { func_1217(1384535894, Var0, 1784584921, bParam1) };
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

bool func_1215(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_1309(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_1216(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1310(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1217(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_1311(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_1312(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1218(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_1313(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1308(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_1219(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_65() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1314(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_1315(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_1312(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1219(bool bParam0)
{
	if (func_65() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_1312(bParam0));
}

int func_1220(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1316(iParam0))
	{
		return 0;
	}
	if (!func_1219(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_1221(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_374(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_1222(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_15.f_2[iVar0 /*9*/].f_2 == 0 || Local_15.f_2[iVar0 /*9*/].f_2 == 1583594396)
		{
		}
		else if (!func_55(Local_15.f_2[iVar0 /*9*/].f_2))
		{
		}
		else if (Local_557.f_20.f_22[iVar0 /*19*/].f_12 != iParam0)
		{
		}
		else if (bParam1 && func_176(iVar0, 1))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

char* func_1223(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam1)
	{
		case 12:
			if (func_51(iParam0, 67108864))
			{
				return "GENERIC_SHOCKED_HIGH";
			}
			if (bParam2)
			{
				if (bParam3)
				{
					return "PANIC_COMMUNICATE";
				}
				return "CALL_FOR_SUPPORT";
			}
		case 3:
		case 9:
		case 10:
		case 11:
			if (func_176(iParam0, 4096))
			{
				return "PANIC_HELP";
			}
			return "OPENS_FIRE";
		case 2:
			if (bParam3 || func_176(iParam0, 4096))
			{
				return "GENERIC_SHOCKED_HIGH";
			}
			return "OPENS_FIRE";
		case 4:
			if (bParam3 || func_176(iParam0, 4096))
			{
				return "GENERIC_SHOCKED_HIGH";
			}
			return "FOUND_BODY";
		case 6:
			return "ARRIVAL_COMBAT_NEUTRAL";
		case 7:
			return "CALLOUT_PROTECT_BOSS";
		case 5:
			if (bParam3 || func_176(iParam0, 4096))
			{
				return "GENERIC_CURSE_HIGH";
			}
			return "CALL_FOR_SUPPORT_RESPONSE";
		default:
			break;
	}
	return "";
}

char* func_1224(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return "GROUP_UP";
		case 5:
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

char* func_1225(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "TIME_TO_GO";
			}
			return "WHO_GOES_THERE";
		case 1:
			if (bParam1)
			{
				return "GET_LOST";
			}
			return "LEAVE_NOW";
		case 2:
			return "FINAL_WARNING";
		case 3:
			return "OPENS_FIRE";
		case 5:
			if (bParam1)
			{
				return "PANIC_HELP";
			}
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

char* func_1226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEAVE_NOW";
		case 3:
			return "OPENS_FIRE";
		case 5:
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

char* func_1227(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				if (bParam3)
				{
					return "GUN_AVOID";
				}
				return "PLAYER_WEAPON_EQUIPPED";
			}
			return "GET_OUT";
		case 1:
			if (bParam3)
			{
				return "DONT_BE_STUPID";
			}
			return "TIME_TO_GO";
		case 2:
			if (bParam3)
			{
				return "WHATS_YOUR_PROBLEM";
			}
			return "PLAYER_STARING";
		case 3:
			if (bParam1)
			{
				return "GET_AWAY_FROM_ME";
			}
			return "GENERIC_FRIGHTENED_HIGH";
		case 5:
			if (bParam3)
			{
				return "PANIC_HELP";
			}
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

int func_1228(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR");
		default:
			break;
	}
	return joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR");
}

int func_1229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR");
		default:
			break;
	}
	return joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR");
}

int func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR");
		default:
			break;
	}
	return joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR");
}

int func_1231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR");
		case 3:
			return joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR");
		default:
			break;
	}
	return joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR");
}

bool func_1232(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

var func_1233()
{
	return Global_1071686.f_28448[32 /*4*/].f_3;
}

int func_1234(struct<5> Param0)
{
	return func_1239(Param0, 49, 1);
}

int func_1235(struct<5> Param0)
{
	return func_1239(Param0, 51, 1);
}

int func_1236(struct<5> Param0)
{
	return func_1239(Param0, 50, 1);
}

var func_1237(struct<5> Param0, bool bParam5)
{
	return func_1239(Param0, 61, bParam5);
}

var func_1238(struct<5> Param0, bool bParam5)
{
	return func_1239(Param0, 59, bParam5);
}

var func_1239(vector3 vParam0, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

bool func_1240(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1241(vector3 vParam0)
{
	return func_1317(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_1242(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), -875674219, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, iParam1, -1, -1f, -1f, -1f);
}

bool func_1243(int iParam0)
{
	if (!func_118(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0))
	{
		return false;
	}
	if (iParam0 == joaat("WEAPON_MELEE_LANTERN"))
	{
		return false;
	}
	return true;
}

void func_1244(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_1071(&(Local_15.f_2[iParam0 /*9*/]), 1630799643, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_15.f_2[iParam0 /*9*/]);
	iVar1 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, 716706914, false);
	if (iVar1 == 1 || iVar1 == 0)
	{
		return;
	}
	TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, iParam1, 30000, false, 1);
}

bool func_1245(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fVar2 < fVar0 && fVar2 > fVar1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (fVar2 < fVar0 || fVar2 > fVar1)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_1246(int iParam0, int iParam1)
{
	return PED::_IS_PED_USING_SCENARIO_HASH(iParam0, iParam1);
}

bool func_1247(int iParam0, bool bParam1)
{
	if (((((func_895(iParam0, 780511057) || func_895(iParam0, -219932022)) || func_895(iParam0, 1120685857)) || func_895(iParam0, -2117564886)) || func_895(iParam0, 655999185)) || func_895(iParam0, 1345172471))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_895(iParam0, -653332088) || func_895(iParam0, 167901368))
		{
			return true;
		}
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1248(struct<2> Param0)
{
	if (func_67(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_67(Param0)))
	{
		STATS::_0x99230691875FC218(func_842(Param0), func_67(Param0), Global_35);
	}
}

void func_1249(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		func_1208(&(Global_1900736.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900736.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_1318(Param0, 0, 1, -1);
}

bool func_1250(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_73(Param0))
	{
		return false;
	}
	if (!func_73(Param2))
	{
		return true;
	}
	iVar0 = func_842(Param0);
	iVar1 = func_842(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_1251(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_1319(iParam0))
	{
		return false;
	}
	if (func_1320(iParam0, uParam1, &uVar0))
	{
		func_1321(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1252(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			*iParam1 = -662251075;
			return true;
		case 4:
			*iParam1 = 942020339;
			return true;
		default:
			break;
	}
	return false;
}

char* func_1253()
{
	return "countdown_final_thud";
}

int func_1254(int iParam0)
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

void func_1255(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_1322(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, func_1323(iParam2), iParam3);
}

void func_1256(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sParam3 = func_1324(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, func_1323(iParam2), sParam3);
}

void func_1257(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_1325(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, func_1323(iParam2), iParam3);
}

void func_1258(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_1326(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0, func_1323(iParam2), fParam3);
}

void func_1259(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!bParam4)
	{
		iParam3 = func_1327(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, func_1323(iParam2), iParam3);
}

int func_1260()
{
	return joaat("COLOR_MP_OBJECTIVE_ENEMY");
}

int func_1261()
{
	return joaat("COLOR_MP_OBJECTIVE_FRIENDLY");
}

int func_1262()
{
	return joaat("COLOR_MP_OBJECTIVE_NEUTRAL");
}

void func_1263(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_1328(&((uParam0[iParam1 /*34*/])->f_31));
	iVar1 = (uParam0[iParam1 /*34*/])->f_24;
	if (iVar1 != 0)
	{
		if (!bVar0)
		{
			func_1329(&((uParam0[iParam1 /*34*/])->f_31), 0);
		}
	}
	else if (bVar0)
	{
		if (func_1330(&((uParam0[iParam1 /*34*/])->f_31)) < 1500)
		{
			return;
		}
		func_1331(&((uParam0[iParam1 /*34*/])->f_31));
	}
	func_1144((uParam0[iParam1 /*34*/])->f_17, iVar1 == 1);
	func_1144((uParam0[iParam1 /*34*/])->f_18, iVar1 == 2);
	func_1144((uParam0[iParam1 /*34*/])->f_19, iVar1 == 3);
}

bool func_1264(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 7:
		case 8:
			return true;
	}
	return false;
}

void func_1265(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0, iParam1);
}

void func_1266(var uParam0, float fParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(uParam0, fParam1);
}

int func_1267()
{
	int iVar0;

	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Local_557.f_1005, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	return (iVar0 / 1000);
}

bool func_1268(var uParam0)
{
	struct<5> Var0;

	if (!func_119(&Var0) || !func_109(Var0, -1893679960, uParam0, 0))
	{
		return false;
	}
	return true;
}

void func_1269(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_BLANKETS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLES"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("SADDLE_HORNS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("SADDLE_STIRRUPS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_BEDROLLS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HORSE_SADDLEBAGS"), 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 355515932, 0, 0);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -749728163, 0, 0);
}

void func_1270(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_SET_PED_COMPONENT_ENABLED(iParam0, iVar0, false, func_65() == 0, false);
}

void func_1271(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

int func_1272(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1332(vParam0, vParam3, vParam6);
	iVar1 = func_1332(vParam0, vParam3, vParam9);
	iVar2 = func_1332(vParam6, vParam9, vParam0);
	iVar3 = func_1332(vParam6, vParam9, vParam3);
	if (iVar0 != iVar1 && iVar2 != iVar3)
	{
		return 1;
	}
	return 0;
}

int func_1273(var uParam0)
{
	return func_1333(uParam0, 25, 1);
}

int func_1274(var uParam0)
{
	return func_1334(func_1333(uParam0, 34, 1));
}

int func_1275(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&vParam0);
}

int func_1276(struct<5> Param0)
{
	return func_1239(Param0, 49, 1);
}

int func_1277(struct<5> Param0, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;

	if (!func_1078(Param0, &(Param0.f_1), 40, iParam5, 0, 1))
	{
		return 0;
	}
	uVar5 = Param0.f_1;
	iVar1 = func_1275(Param0, 6);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		iVar4 = 0;
		if (!func_1078(Param0, &(Param0.f_1), 41, iVar0, 0, 1))
		{
		}
		else
		{
			iVar2 = func_1335(Param0);
			switch (iParam5)
			{
				case joaat("TRIGGER"):
					iVar4 = func_1336(iVar2);
					break;
				case joaat("BEHAVIOR"):
					iVar4 = func_1337(iVar2);
					break;
			}
			uVar3 = (uVar3 || iVar4);
		}
		iVar0++;
	}
	return uVar3;
}

struct<2> func_1278(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = joaat("COOLDOWN");
			Var0.f_1 = joaat("COOLDOWN_TYPE");
			break;
		default:
			Var0 = 0;
			Var0.f_1 = 0;
			break;
	}
	return Var0;
}

bool func_1279(var uParam0)
{
	return (*uParam0 != 0 && uParam0->f_1 != 0);
}

bool func_1280(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	struct<5> Var7;
	int iVar12;

	if (!func_1034(iParam0))
	{
		return false;
	}
	if (!func_1077(&Var7))
	{
		return false;
	}
	if (!func_1078(Var7, &(Var7.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var7, &(Var7.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	uVar3 = Var7.f_1;
	if (!func_1078(Var7, &(Var7.f_1), 16, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var7, &(Var7.f_1), 18, iParam2, 0, 1))
	{
		return false;
	}
	func_1079(Var7, uParam3, &uVar6, &uVar5);
	Var7.f_1 = uVar6;
	*uParam4 = func_1237(Var7, 1);
	uParam4->f_1 = func_1238(Var7, 1);
	Var7.f_1 = uVar3;
	if (!func_1078(Var7, &(Var7.f_1), 24, 0, 0, 1))
	{
		return false;
	}
	if (!func_1078(Var7, &(Var7.f_1), 25, iParam1, 0, 1))
	{
		return false;
	}
	uVar4 = Var7.f_1;
	iVar1 = func_1275(Var7, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var7.f_1 = uVar4;
		if (!func_1078(Var7, &(Var7.f_1), 27, iVar0, 0, 1))
		{
			return false;
		}
		iVar12 = func_1338(Var7);
		iVar2 = func_1339(iVar12, 1);
		if (iVar2 == -1)
		{
			return false;
		}
		uParam4->f_2[iVar2] = func_1340(Var7, 55, 1);
		if (uParam4->f_2[iVar2] < 0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_1281(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar9;
	var uVar11;
	int iVar13;
	struct<2> Var14;

	vVar2.f_2 = 4;
	Var14 = { func_1278(iParam5) };
	if (!func_1279(&Var14))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_869(iParam0, Var14, uParam1, &uVar11))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_869(iParam0, Var14.f_1, uParam1, &uVar9))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (iParam4 == 0)
	{
		if (!STATS::STAT_ID_GET_INT(&uVar9, &iVar1))
		{
			*iParam2 = 0;
			*uParam3 = 0;
			return 0;
		}
		iVar13 = iVar1;
	}
	else
	{
		iVar13 = iParam4;
	}
	if (iVar13 == 0)
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!STATS::STAT_ID_GET_INT(&uVar11, &iVar0))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_1280(iParam0, iVar13, Var14, uParam1, &vVar2))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	switch (vVar2.x)
	{
		case joaat("START"):
			*iParam2 = func_1282(&vVar2, iVar0, 1, iVar0, joaat("END"));
			break;
		case joaat("END"):
			if (iVar13 == 0)
			{
				*iParam2 = iVar0;
			}
			else
			{
				iVar0 = func_1341(&vVar2, iVar0);
				*iParam2 = func_1282(&vVar2, iVar0, 1, iVar0, 0);
			}
			break;
		default:
			*iParam2 = 0;
			*uParam3 = 0;
			return 0;
	}
	*uParam3 = vVar2.y;
	return 1;
}

int func_1282(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam4 == 0)
	{
		iVar2 = *iParam0;
	}
	else
	{
		iVar2 = iParam4;
	}
	switch (iParam0->f_1)
	{
		case joaat("POSIX"):
			if (bParam2)
			{
				iVar0 = iParam3;
			}
			else
			{
				iVar0 = Global_1296859.f_21;
			}
			switch (iVar2)
			{
				case joaat("START"):
					break;
				case joaat("END"):
					iVar0 = (iVar0 + iParam0->f_2[3]);
					iVar0 = (iVar0 + iParam0->f_2[2] * 60);
					iVar0 = (iVar0 + iParam0->f_2[1] * 3600);
					iVar0 = (iVar0 + (iParam0->f_2[0] * 86400));
					break;
				default:
					break;
			}
			break;
		case joaat("TIMEOFDAY"):
			if (func_1342(iParam1))
			{
				iVar1 = iParam1;
			}
			else
			{
				iVar1 = func_518();
			}
			switch (iVar2)
			{
				case joaat("START"):
					iVar0 = iVar1;
					break;
				case joaat("END"):
					func_1343(&iVar1, iParam0->f_2[3], iParam0->f_2[2], iParam0->f_2[1], iParam0->f_2[0], 0, 0, 0);
					iVar0 = iVar1;
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

var func_1283(struct<5> Param0)
{
	return func_1239(Param0, 58, 1);
}

var func_1284(struct<5> Param0)
{
	return func_1239(Param0, 57, 1);
}

var func_1285(struct<5> Param0)
{
	return func_1340(Param0, 60, 1);
}

var func_1286(struct<5> Param0)
{
	return func_1239(Param0, 62, 1);
}

int func_1287(struct<5> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;

	if (!func_1078(Param0, &(Param0.f_1), 45, 0, 0, 0))
	{
		return 1;
	}
	uVar11 = Param0.f_1;
	iVar1 = func_1275(Param0, 11);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar11;
		bVar10 = false;
		if (!func_1078(Param0, &(Param0.f_1), 46, iVar0, 0, 1))
		{
			return 0;
		}
		iVar8 = func_1344(Param0);
		iVar3 = func_1275(Param0, 12);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			if (!func_1345(Param0, iVar2, &Var4))
			{
				return 0;
			}
			switch (Var4)
			{
				case joaat("AWARD"):
					switch (Var4.f_1)
					{
						case 1858947262:
							bVar9 = Var4.f_3 == NETWORK::_0xFBE782B3165AC8EC(Var4.f_2);
							break;
						default:
							bVar9 = false;
							break;
					}
					break;
				case -1945136514:
					switch (Var4.f_1)
					{
						case joaat("EXISTS"):
							bVar9 = false;
							break;
						default:
							bVar9 = false;
							break;
					}
					break;
				default:
					bVar9 = false;
					break;
			}
			switch (iVar8)
			{
				case joaat("AND"):
					if (bVar9)
					{
					}
					else
					{
						bVar10 = true;
					}
					else
					{
						Jump @318; //curOff = 283
						if (bVar9)
						{
							Jump @327; //curOff = 291
						}
						else if (iVar2 == (iVar3 - 1))
						{
							bVar10 = true;
						}
						else
						{
							iVar2++;
						}
					}
					if (bVar10)
					{
						return 0;
					}
					iVar0++;
					return 1;
					default:
						break;
			}
		}
	}
}

var func_1288(struct<5> Param0)
{
	return func_1239(Param0, 49, 1);
}

int func_1289(int iParam0)
{
	var uVar0;
	int iVar5;

	iVar5 = func_1186(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1187(&uVar0))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 7, func_1189(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 9, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 15, 0, 0, 1))
	{
		return 0;
	}
	return func_1346(&uVar0);
}

int func_1290(int iParam0)
{
	var uVar0;
	int iVar5;

	iVar5 = func_1186(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1187(&uVar0))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 7, func_1189(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 8, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 9, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1188(&uVar0, 15, 0, 0, 1))
	{
		return 0;
	}
	return func_1347(&uVar0);
}

void func_1291(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0 = { func_1301(1) };
	*uParam1 = { func_1217(iParam0, Var0, -1591664384, 1) };
}

int func_1292(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1132377945;
		case 1:
			return 739936401;
		case 2:
			return 1201880974;
		case 3:
			return 819728896;
		case 4:
			return 1746010219;
		case 5:
			return 1433393959;
		default:
			break;
	}
	return 0;
}

int func_1293(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1348(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1294(var uParam0)
{
	if (!func_1349(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_1295(var uParam0, int iParam1, bool bParam2)
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
	if (!func_1308(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_1302(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_1350(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_1351(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_1352(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_1353(joaat("UPDATE"), &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_1354(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_1355(joaat("UPDATE"), &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_1356(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_1314(joaat("UPDATE"), &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

var func_1296(struct<5> Param0)
{
	return func_1239(Param0, 54, 1);
}

var func_1297(struct<5> Param0)
{
	return func_1239(Param0, 56, 1);
}

bool func_1298(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_1299()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1257541.f_8863;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

void func_1300(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900736.f_1[iParam0 /*2*/] };
	Global_1900736.f_1[iParam0 /*2*/] = { Global_1900736.f_1[iParam1 /*2*/] };
	Global_1900736.f_1[iParam1 /*2*/] = { Var0 };
}

struct<4> func_1301(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_1312(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_1217(joaat("CHARACTER"), func_1357(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_1217(joaat("CHARACTER"), func_1357(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_1217(joaat("CHARACTER"), func_1357(), -1591664384, bParam0);
}

int func_1302(int iParam0)
{
	vector3 vVar0;

	if (!func_1311(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1303(bool bParam0)
{
	int iVar0;

	iVar0 = func_1312(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_1217(923904168, func_1301(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_1217(923904168, func_1301(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_1217(923904168, func_1301(bParam0), -740156546, 0);
}

bool func_1304(int iParam0, bool bParam1)
{
	if (func_1306(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_1358();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1305(bool bParam0)
{
	int iVar0;

	iVar0 = func_1312(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_1217(271701509, func_1301(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_1217(271701509, func_1301(bParam0), 12999093, 0);
}

int func_1306(int iParam0)
{
	struct<2> Var0;

	if (!func_1311(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_1307(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_1306(iParam0);
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
			if (func_1359(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1308(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1360(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1309(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_1311(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1361(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_1217(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_1312(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_1312(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_1310(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_1312(0);
	*uParam1 = { func_1217(iParam0, func_1303(0), iParam3, 0) };
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

bool func_1311(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_1312(bool bParam0)
{
	if (func_65() == -1)
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

bool func_1313(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_1314(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1362(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_1364(func_1363(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1365(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1315(int iParam0, struct<17> Param1)
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

bool func_1316(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_1317(int iParam0)
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

int func_1318(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_1366(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_154(Param0);
	Var0.f_3 = iParam3;
	func_1367(&Var0, bParam2, iParam4);
	return 1;
}

bool func_1319(int iParam0)
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

bool func_1320(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1368(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1321(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1369(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1370(iVar0);
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
			uParam2->f_5 = func_1371(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1372(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1373(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_1374(iVar0);
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
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

int func_1322(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_1261();
		case 4:
			return joaat("COLOR_PURE_WHITE");
		case 9:
			return func_1260();
		case 10:
			return joaat("COLOR_PURE_WHITE");
		case 23:
			return joaat("RPG_TEXTURES");
		case 22:
			return joaat("RPG_AGITATION");
		case 24:
			return joaat("COLOR_ENEMY");
		case 18:
			return joaat("COLOR_PURE_WHITE");
		case 25:
			return func_1260();
		case 30:
			return func_1260();
		default:
			break;
	}
	return 0;
}

char* func_1323(int iParam0)
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

char* func_1324(int iParam0)
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

int func_1325(int iParam0)
{
	return 0;
}

float func_1326(int iParam0)
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

int func_1327(int iParam0)
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

bool func_1328(var uParam0)
{
	return func_1375(*uParam0, 1);
}

void func_1329(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1328(uParam0))
	{
		func_1376(uParam0);
	}
}

int func_1330(var uParam0)
{
	if (!func_1328(uParam0))
	{
		return 0;
	}
	if (func_1377(uParam0))
	{
		return uParam0->f_2;
	}
	return func_1378(uParam0->f_1);
}

void func_1331(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_1332(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	float fVar0;

	fVar0 = (((Param3.f_1 - Param0.f_1) * (Param6 - Param3)) - ((Param3 - Param0) * (Param6.f_1 - Param3.f_1)));
	if (fVar0 == 0f)
	{
		return 0;
	}
	if (fVar0 > 0f)
	{
		return 1;
	}
	return 2;
}

int func_1333(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_1334(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BOUNTY"):
			return 0;
		case joaat("MOONSHINE"):
			return 1;
		case joaat("MOONSHINE_RECIPE"):
			return 2;
		case joaat("LEGENDARY_ANIMAL"):
			return 3;
		default:
			break;
	}
	return -1;
}

var func_1335(struct<5> Param0)
{
	return func_1239(Param0, 49, 1);
}

int func_1336(int iParam0)
{
	switch (iParam0)
	{
		case joaat("START"):
			return 4;
		case joaat("COMPLETE"):
			return 8;
		case joaat("PRIMARY"):
			return 1;
		case joaat("RIVAL"):
			return 2;
		case joaat("WIN"):
			return 16;
		case joaat("LOSS"):
			return 32;
		case joaat("EASY"):
			return 64;
		case joaat("MEDIUM"):
			return 128;
		case joaat("HARD"):
			return 256;
		case joaat("NEAR"):
			return 512;
		case joaat("FAR"):
			return 1024;
		case -467684650:
			return 2048;
		case 1946702493:
			return 4096;
		case joaat("POSSE_LEADER"):
			return 16384;
		case 1689792654:
			return 32768;
		case joaat("SCRIPTED"):
			return 8192;
		default:
			break;
	}
	return 0;
}

int func_1337(int iParam0)
{
	switch (iParam0)
	{
		case -1180895447:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_1338(struct<5> Param0)
{
	return func_1239(Param0, 49, 1);
}

int func_1339(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HOURS"):
			return 1;
		case joaat("MINUTES"):
			return 2;
		case joaat("SECONDS"):
			return 3;
		case joaat("DAYS"):
			return 0;
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

var func_1340(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_INT(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1341(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0->f_1)
	{
		case joaat("POSIX"):
			switch (*iParam0)
			{
				case joaat("START"):
					break;
				case joaat("END"):
					iVar0 = iParam1;
					iVar0 = (iVar0 - iParam0->f_2[3]);
					iVar0 = (iVar0 - iParam0->f_2[2] * 60);
					iVar0 = (iVar0 - iParam0->f_2[1] * 3600);
					iVar0 = (iVar0 - (iParam0->f_2[0] * 86400));
					break;
				default:
					break;
			}
			break;
		case joaat("TIMEOFDAY"):
			switch (*iParam0)
			{
				case joaat("START"):
					break;
				case joaat("END"):
					iVar1 = iParam1;
					func_1379(&iVar1, iParam0->f_2[3], iParam0->f_2[2], iParam0->f_2[1], iParam0->f_2[0], 0, 0);
					iVar0 = iVar1;
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_1342(int iParam0)
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
	iVar0 = func_1380(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1381(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1382(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1383(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1384(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1385(iParam0);
	if (iVar5 < 1 || iVar5 > func_1386(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_1343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1383(*iParam0);
	iVar1 = func_1384(*iParam0);
	iVar2 = func_1385(*iParam0);
	iVar3 = func_1382(*iParam0);
	iVar4 = func_1381(*iParam0);
	iVar5 = func_1380(*iParam0);
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
	iVar6 = func_1386(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1386(iVar1, iVar0);
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
	func_1387(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

var func_1344(struct<5> Param0)
{
	return func_1239(Param0, 61, 1);
}

bool func_1345(struct<5> Param0, int iParam5, var uParam6)
{
	if (!func_1078(Param0, &(Param0.f_1), 47, iParam5, 0, 1))
	{
		return false;
	}
	*uParam6 = func_1388(Param0);
	uParam6->f_1 = func_1389(Param0);
	uParam6->f_2 = func_1390(Param0);
	uParam6->f_3 = func_1391(Param0);
	return true;
}

int func_1346(var uParam0)
{
	return func_1333(uParam0, 36, 1);
}

int func_1347(var uParam0)
{
	return func_1333(uParam0, 37, 1);
}

bool func_1348(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_1312(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_1349(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

struct<28> func_1350(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_1312(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1356(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1351(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1362(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_1364(func_1392(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1365(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_1352(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_1312(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1356(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_1353(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_1364(func_1393(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1365(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_1354(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_1312(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1356(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1355(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1362(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_1364(func_1394(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1365(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_1356(var uParam0, bool bParam1)
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
		Var0.f_15 = func_1361(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_1357() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

struct<4> func_1357()
{
	struct<4> Var0;

	return Var0;
}

bool func_1358()
{
	return (func_1395(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_1396(func_1217(joaat("WARDROBE"), func_1301(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_1359(int iParam0, int iParam1, int iParam2)
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

bool func_1360(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_1312(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_1361(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_1362(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_1397(uParam1->f_8, iParam0, uVar0, 2048) || func_1397(uParam1->f_8, iParam0, uVar0, 32768)) || func_1397(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_1397(uParam1->f_8, iParam0, uVar0, 4) || func_1397(uParam1->f_8, iParam0, uVar0, 256)) || func_1397(uParam1->f_8, iParam0, uVar0, 65536)) || func_1397(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_1397(uParam1->f_8, iParam0, uVar0, 1) || func_1397(uParam1->f_8, iParam0, uVar0, 8)) || func_1397(uParam1->f_8, iParam0, uVar0, 65536)) || func_1397(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_1397(uParam1->f_8, iParam0, uVar0, 1) || func_1397(uParam1->f_8, iParam0, uVar0, 16)) || func_1397(uParam1->f_8, iParam0, uVar0, 2)) || func_1397(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_1397(uParam1->f_8, iParam0, uVar0, 8) || func_1397(uParam1->f_8, iParam0, uVar0, 4096)) || func_1397(uParam1->f_8, iParam0, uVar0, 256)) || func_1397(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_1363(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_1364(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_1398(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_1398(iParam1, 2, 0, 0);
	return -1;
}

int func_1365(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_1398(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_1366(struct<2> Param0)
{
	int iVar0;

	if (Global_1196205.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205.f_129)
	{
		if (func_74(Global_1196205[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1367(var uParam0, bool bParam1, int iParam2)
{
	func_1399(uParam0, iParam2);
	if (Global_1196205.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1400(func_1366(uParam0->f_1));
	}
	else
	{
		func_1401();
	}
}

int func_1368(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_FETCH");
			break;
		case 5:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 6:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 7:
			iVar0 = joaat("MISSION_UGC");
			break;
		case 8:
			iVar0 = joaat("MISSION_BEAT");
			break;
		case 9:
			iVar0 = joaat("PROPERTY");
			break;
		case 10:
			iVar0 = joaat("RECIPE");
			break;
		case 11:
			iVar0 = joaat("TITLE");
			break;
		case 12:
			iVar0 = joaat("SHOP");
			break;
		case 13:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 14:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = joaat("GVO_UNLOCKS");
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

int func_1369(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1402(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1370(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
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
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_1371(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_1372(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_1373(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
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
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1374(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_1375(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1376(var uParam0)
{
	func_1403(uParam0, 0);
}

bool func_1377(var uParam0)
{
	return func_1375(*uParam0, 2);
}

int func_1378(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_1379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_1383(*iParam0);
	iVar1 = func_1384(*iParam0);
	iVar2 = func_1385(*iParam0);
	iVar3 = func_1382(*iParam0);
	iVar4 = func_1381(*iParam0);
	iVar5 = func_1380(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_1386(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1387(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1380(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1381(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1382(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1383(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1404(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1384(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1385(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1386(int iParam0, int iParam1)
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

void func_1387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1405(iParam0, iParam6);
	func_1406(iParam0, iParam5);
	func_1407(iParam0, iParam4);
	func_1408(iParam0, iParam3);
	func_1409(iParam0, iParam2);
	func_1410(iParam0, iParam1);
}

var func_1388(struct<5> Param0)
{
	return func_1239(Param0, 61, 1);
}

var func_1389(struct<5> Param0)
{
	return func_1239(Param0, 64, 1);
}

var func_1390(struct<5> Param0)
{
	return func_1239(Param0, 63, 1);
}

var func_1391(struct<5> Param0)
{
	return func_1411(Param0, 65, 1);
}

bool func_1392(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_1393(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_1394(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

int func_1395(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_1316(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_1312(bParam1), iParam0, iParam3);
}

int func_1396(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1412(&uParam0, iParam4, bParam5, iParam6);
}

int func_1397(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_1059(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_1398(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1413(iParam0, iParam1, iParam2, iParam3);
}

void func_1399(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1196205.f_129 >= 32)
	{
		Global_1196205.f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205.f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		Global_1196205[Global_1196205.f_129 /*4*/] = { *uParam0 };
		Global_1196205.f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205.f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { Global_1196205[iVar1 /*4*/] };
		Global_1196205[iVar1 /*4*/] = { Global_1196205[iVar1 + 1 /*4*/] };
		Global_1196205[iVar1 + 1 /*4*/] = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	Global_1196205[iParam1 /*4*/] = { *uParam0 };
	Global_1196205.f_129++;
}

void func_1400(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205.f_129)
	{
		return;
	}
	Global_1196205.f_130 = iParam0;
	Global_1196205.f_131 = Global_1196205[iParam0 /*4*/];
}

void func_1401()
{
	if (Global_1196205.f_131 == 0)
	{
		return;
	}
	Global_1196205.f_130 = func_1414(Global_1196205.f_131);
	if (Global_1196205.f_130 < 0)
	{
		Global_1196205.f_131 = 0;
	}
}

bool func_1402(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1415(iParam0, uParam1, &uVar0))
	{
		func_1416(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_1403(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_1417(uParam0, 1);
	func_1418(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_1404(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1405(int iParam0, int iParam1)
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

void func_1406(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1407(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1384(*iParam0);
	iVar1 = func_1383(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1386(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1408(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1409(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1410(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

var func_1411(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_BOOL(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1412(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1419(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_1413(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1420(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_1414(int iParam0)
{
	int iVar0;

	if (Global_1196205.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205.f_129)
	{
		if (Global_1196205[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1415(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1368(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1416(var uParam0, int iParam1, var uParam2)
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

void func_1417(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1418(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1419(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_1312(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_1360(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_1420(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1421(&(uParam0->f_4));
}

void func_1421(var uParam0)
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

