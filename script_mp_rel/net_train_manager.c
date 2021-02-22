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
#endregion

void __EntryFunction__()
{
	func_1();
	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	func_4();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_5(32, -1);
	func_6();
	if (func_7())
	{
		func_4();
	}
	func_8(&Global_1138305);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1138305, 106, 6);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Global_1138305), 106, "g_mpTrainManagerHostData");
	func_10(&Global_1138411);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1138411, 417, 7);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Global_1138411[0 /*13*/])), 417, "g_mpTrainManagerPlayerData");
	func_12(&Global_1138828);
	func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_2()
{
	if (func_14(0, 0))
	{
		return true;
	}
	return false;
}

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_15();
	}
	func_16();
}

void func_4()
{
	func_17();
}

void func_5(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_17();
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
			func_17();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_17();
					break;
				case 2:
					func_17();
					break;
				case 4:
					func_17();
					break;
				case 3:
					func_17();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_17();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_17();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_17();
		}
		if (func_18() == 0)
		{
			if (func_19())
			{
				func_17();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_17();
	}
	return 1;
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

void func_8(var uParam0)
{
	struct<106> Var0;

	Var0.f_2 = 3;
	Var0.f_2.f_1.f_6 = -1;
	Var0.f_2.f_1.f_6.f_1 = -1;
	Var0.f_2.f_1.f_17.f_6 = -1;
	Var0.f_2.f_1.f_17.f_6.f_1 = -1;
	Var0.f_2.f_1.f_17.f_17.f_6 = -1;
	Var0.f_2.f_1.f_17.f_17.f_6.f_1 = -1;
	Var0.f_54 = 3;
	Var0.f_54.f_1.f_6 = -1;
	Var0.f_54.f_1.f_6.f_1 = -1;
	Var0.f_54.f_1.f_17.f_6 = -1;
	Var0.f_54.f_1.f_17.f_6.f_1 = -1;
	Var0.f_54.f_1.f_17.f_17.f_6 = -1;
	Var0.f_54.f_1.f_17.f_17.f_6.f_1 = -1;
	*uParam0 = { Var0 };
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_10(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_20(uParam0[iVar0 /*13*/]);
		iVar0++;
	}
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(var uParam0)
{
	struct<134> Var0;

	Var0.f_2 = 3;
	Var0.f_2.f_1.f_11 = 15;
	Var0.f_2.f_1.f_42.f_11 = 15;
	Var0.f_2.f_1.f_42.f_42.f_11 = 15;
	Var0.f_129 = 4;
	*uParam0 = { Var0 };
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
					func_17();
					break;
				case 2:
					func_17();
					break;
				case 4:
					func_17();
					break;
				case 3:
					func_17();
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
			func_17();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_14(bool bParam0, bool bParam1)
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

void func_15()
{
	switch (Global_1138305)
	{
		case 0:
			func_21();
			break;
		case 1:
			func_22();
			break;
		case 2:
			func_23();
			break;
	}
}

void func_16()
{
	switch (Global_1138828)
	{
		case 0:
			func_24();
			break;
		case 1:
			func_25();
			break;
		case 2:
			func_26();
			break;
	}
}

void func_17()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_18()
{
	return Global_1572887.f_13;
}

bool func_19()
{
	return Global_1051252.f_8;
}

void func_20(var uParam0)
{
	struct<13> Var0;

	Var0 = 3;
	*uParam0 = { Var0 };
}

void func_21()
{
	if (func_27())
	{
		func_28(2);
	}
	func_29();
	func_30(1);
}

void func_22()
{
	if (func_31())
	{
		func_30(2);
	}
}

void func_23()
{
	func_32();
}

void func_24()
{
	if (Global_1138305 > 0)
	{
		func_33();
		func_34(1);
	}
}

void func_25()
{
	if (func_31() && Global_1138305 > 1)
	{
		func_34(2);
	}
}

void func_26()
{
	func_35();
	func_36();
	func_37();
}

bool func_27()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_28(int iParam0)
{
	func_38(&(Global_1138305.f_1), iParam0);
}

int func_29()
{
	struct<13> Var0;

	if (!func_39())
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 11;
		return func_41(&Var0, func_40(0, 8));
	}
	return 1;
}

void func_30(int iParam0)
{
	if (Global_1138305 != iParam0)
	{
		Global_1138305 = iParam0;
	}
}

bool func_31()
{
	if (!func_42())
	{
		return false;
	}
	if (!func_43())
	{
		return false;
	}
	return true;
}

void func_32()
{
	if (Global_1138828.f_129[0] >= 3)
	{
		Global_1138828.f_129[0] = 0;
	}
	func_44(Global_1138828.f_129[0]);
	Global_1138828.f_129[0]++;
}

void func_33()
{
	if (!Global_1572887.f_6)
	{
		return;
	}
	if (Global_2883584)
	{
		return;
	}
	if (Global_1048577)
	{
		return;
	}
	if (func_45(2))
	{
		func_46(joaat("FLATNECK_TO_VALENTINE"), 1);
	}
	else
	{
		func_46(joaat("FLATNECK_TO_VALENTINE"), 0);
	}
	func_46(1548096282, 1);
	func_46(-245962931, 1);
	func_46(-500348165, 1);
	func_46(joaat("EMERALD_RANCH_DEAD_END_TO_RHODES"), 1);
	func_46(-1420724065, 1);
	func_46(joaat("MACFARLANES_RANCH"), 1);
	func_46(1603023256, 1);
	func_46(joaat("BACCHUS_STATION"), 1);
	func_46(joaat("APPLESEED_TIMBER_FORK"), 1);
}

void func_34(int iParam0)
{
	if (Global_1138828 != iParam0)
	{
		Global_1138828 = iParam0;
	}
}

void func_35()
{
	if (func_47(64, 255) || (Global_1901947.f_308.f_269 > 0 && !func_48()))
	{
		if (!func_49(1))
		{
			func_50(1);
		}
	}
	else if (func_49(1))
	{
		func_51(1);
	}
}

void func_36()
{
	if (!NETWORK::NETWORK_IS_HOST())
	{
		return;
	}
	Global_1138828.f_129[2]++;
	if (Global_1138828.f_129[2] >= 300)
	{
		func_33();
		Global_1138828.f_129[2] = 0;
	}
}

void func_37()
{
	if (Global_1138828.f_129[1] >= 3)
	{
		Global_1138828.f_129[1] = 0;
	}
	func_52(Global_1138828.f_129[1]);
	Global_1138828.f_129[1]++;
}

void func_38(var uParam0, int iParam1)
{
	func_53(uParam0, iParam1);
}

bool func_39()
{
	if (!NETWORK::NETWORK_IS_HOST())
	{
		return false;
	}
	VEHICLE::_0x138398153824E332();
	return true;
}

var func_40(int iParam0, int iParam1)
{
	return func_54(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

int func_41(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return 0;
	}
	*uParam0 = 20;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 23, 0, &uParam1);
	return 1;
}

bool func_42()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_3;
}

bool func_43()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_5;
}

void func_44(int iParam0)
{
	switch (Global_1138305.f_2[iParam0 /*17*/])
	{
		case 0:
			func_55(iParam0);
			break;
		case 1:
			func_56(iParam0);
			break;
		case 3:
			func_57(iParam0);
			break;
		case 4:
			func_58(iParam0);
			break;
	}
}

bool func_45(int iParam0)
{
	return func_59(Global_1138305.f_1, iParam0);
}

int func_46(int iParam0, int iParam1)
{
	struct<13> Var0;

	if (!func_60(iParam0, iParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 10;
		Var0.f_7 = iParam0;
		Var0.f_11 = iParam1;
		return func_41(&Var0, func_40(0, 8));
	}
	return 1;
}

bool func_47(int iParam0, int iParam1)
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

bool func_48()
{
	return func_61(Global_1572887.f_7, 1);
}

bool func_49(int iParam0)
{
	return func_59(Global_1138828.f_1, iParam0);
}

void func_50(int iParam0)
{
	func_38(&(Global_1138828.f_1), iParam0);
}

void func_51(int iParam0)
{
	func_62(&(Global_1138828.f_1), iParam0);
}

void func_52(int iParam0)
{
	func_63(iParam0);
	switch (Global_1138828.f_2[iParam0 /*42*/])
	{
		case 0:
			func_64(iParam0);
			break;
		case 1:
			func_65(iParam0);
			break;
		case 2:
			func_66(iParam0);
			break;
		case 3:
			func_67(iParam0);
			break;
		case 4:
			func_68(iParam0);
			break;
	}
}

void func_53(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

var func_54(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_69() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_70());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_70());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_70());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_71(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_72(iVar2))
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
				if (iVar9 & 8192 != 0 && func_73(iVar2) != 1)
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
					if (!func_74(iVar10))
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

void func_55(int iParam0)
{
	if (func_49(1))
	{
		return;
	}
	if (Global_1138305.f_54[iParam0 /*17*/].f_1 != 0)
	{
		Global_1138305.f_2[iParam0 /*17*/] = { Global_1138305.f_54[iParam0 /*17*/] };
		func_75(&(Global_1138305.f_54[iParam0 /*17*/]));
		func_76(iParam0, 1);
	}
	else
	{
		func_77(iParam0);
	}
}

void func_56(int iParam0)
{
	if (func_49(1))
	{
		func_76(iParam0, 4);
		return;
	}
	func_76(iParam0, 3);
}

void func_57(int iParam0)
{
	if (func_49(1))
	{
		func_76(iParam0, 4);
		return;
	}
	else if (!func_78(iParam0, 1))
	{
		func_76(iParam0, 4);
		return;
	}
	else if (Global_1138305.f_54[iParam0 /*17*/].f_1 != 0)
	{
		func_76(iParam0, 4);
		return;
	}
	func_79(iParam0);
	if (!func_80(&(Global_1138305.f_2[iParam0 /*17*/].f_12)))
	{
		if (!func_78(iParam0, 2))
		{
			Global_1138305.f_2[iParam0 /*17*/].f_16 = MISC::GET_RANDOM_INT_IN_RANGE(180000, 300000);
			func_81(&(Global_1138305.f_2[iParam0 /*17*/].f_12));
		}
	}
	else if (func_78(iParam0, 2))
	{
		func_82(&(Global_1138305.f_2[iParam0 /*17*/].f_12));
	}
	else if (func_83(&(Global_1138305.f_2[iParam0 /*17*/].f_12)) > Global_1138305.f_2[iParam0 /*17*/].f_16)
	{
		func_76(iParam0, 4);
		return;
	}
}

void func_58(int iParam0)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (!func_78(iParam0, 1))
	{
		func_75(&(Global_1138305.f_2[iParam0 /*17*/]));
	}
}

bool func_59(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_60(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("FLATNECK_TO_VALENTINE"):
			iVar0 = joaat("FREIGHT_GROUP");
			vVar1 = { -281.0263f, -319.5532f, 88.02095f };
			break;
		case -245962931:
			iVar0 = joaat("TRAINS3");
			vVar1 = { 1481.509f, 648.3527f, 91.52025f };
			break;
		case -500348165:
			iVar0 = joaat("BRAITHWAITES2_TRACK_CONFIG");
			vVar1 = { 1529.881f, 467.6379f, 89.20429f };
			break;
		case joaat("EMERALD_RANCH_DEAD_END_TO_RHODES"):
			iVar0 = joaat("TRAINS3");
			vVar1 = { 1692.865f, 544.3328f, 97.59906f };
			break;
		case -1420724065:
			iVar0 = joaat("TRAINS3");
			vVar1 = { 2659.843f, -435.6971f, 42.38826f };
			break;
		case 1548096282:
			iVar0 = joaat("TRAINS3");
			vVar1 = { 31.56687f, -29.40786f, 102.3233f };
			break;
		case joaat("MACFARLANES_RANCH"):
			iVar0 = joaat("TRAINS_OLD_WEST01");
			vVar1 = { -2174.342f, -2508.351f, 64.79848f };
			break;
		case 1603023256:
			iVar0 = joaat("TRAINS_OLD_WEST03");
			vVar1 = { -4916.622f, -3009.565f, -19.15694f };
			break;
		case joaat("BACCHUS_STATION"):
			iVar0 = joaat("FREIGHT_GROUP");
			vVar1 = { 610.215f, 1662.165f, 186.3704f };
			break;
		case joaat("APPLESEED_TIMBER_FORK"):
			iVar0 = joaat("FREIGHT_GROUP");
			vVar1 = { -1375.646f, -137.362f, 99.87008f };
			break;
	}
	if (!VEHICLE::_0x86AFC343CF7F0B34(iVar0, vVar1, &uVar4))
	{
		return false;
	}
	VEHICLE::_0xE6C5E2125EB210C1(iVar0, uVar4, iParam1);
	return true;
}

bool func_61(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_62(var uParam0, int iParam1)
{
	func_85(uParam0, iParam1);
}

void func_63(int iParam0)
{
	float fVar0;
	struct<2> Var1;

	fVar0 = func_86(iParam0);
	Var1 = { Global_1138305.f_2[iParam0 /*17*/].f_6 };
	if (func_87(Var1) && func_89(func_88(0), Var1))
	{
		fVar0 = -1f;
	}
	if (Global_1138828.f_2[iParam0 /*42*/].f_3 != fVar0)
	{
		Global_1138828.f_2[iParam0 /*42*/].f_3 = fVar0;
	}
}

void func_64(int iParam0)
{
	if (func_49(1))
	{
		return;
	}
	if (Global_1138305.f_2[iParam0 /*17*/] > 0 && Global_1138305.f_2[iParam0 /*17*/] < 4)
	{
		func_90(iParam0, 1);
		func_91(iParam0, 1);
	}
}

void func_65(int iParam0)
{
	float fVar0;

	if (Global_1138305.f_2[iParam0 /*17*/] == 4)
	{
		func_91(iParam0, 4);
		return;
	}
	else if (func_49(1))
	{
		func_91(iParam0, 4);
		return;
	}
	if (Global_1138305.f_2[iParam0 /*17*/] > 1)
	{
		if (Global_1138828.f_2[iParam0 /*42*/].f_3 > 0f)
		{
			if (!func_92(Global_1138305.f_2[iParam0 /*17*/].f_2))
			{
				fVar0 = BUILTIN::VDIST(Global_1138305.f_2[iParam0 /*17*/].f_2, Global_35);
				if (fVar0 < Global_1138828.f_2[iParam0 /*42*/].f_3 || func_93(iParam0))
				{
					func_91(iParam0, 2);
				}
			}
		}
		else if (Global_1138828.f_2[iParam0 /*42*/].f_3 == -1f)
		{
			func_91(iParam0, 2);
		}
	}
}

void func_66(int iParam0)
{
	struct<2> Var0;

	if (Global_1138305.f_2[iParam0 /*17*/] == 4)
	{
		func_91(iParam0, 4);
		return;
	}
	else if (func_49(1))
	{
		func_91(iParam0, 4);
		return;
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1138828.f_2[iParam0 /*42*/].f_1))
	{
		SCRIPTS::REQUEST_SCRIPT("net_train");
		if (!SCRIPTS::HAS_SCRIPT_LOADED("net_train"))
		{
			return;
		}
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1024) <= 0)
		{
			return;
		}
		Var0 = iParam0;
		Var0.f_1 = Global_1138305.f_2[iParam0 /*17*/].f_1;
		Global_1138828.f_2[iParam0 /*42*/].f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("net_train", &Var0, 2, 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_train");
		func_90(iParam0, 2);
	}
	else
	{
		func_91(iParam0, 3);
	}
}

void func_67(int iParam0)
{
	if (Global_1138305.f_2[iParam0 /*17*/] == 4)
	{
		func_91(iParam0, 4);
	}
	else if (func_49(1))
	{
		func_91(iParam0, 4);
	}
	else if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1138828.f_2[iParam0 /*42*/].f_1))
	{
		func_91(iParam0, 4);
	}
}

void func_68(int iParam0)
{
	struct<4> Var0;
	struct<42> Var4;

	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1138828.f_2[iParam0 /*42*/].f_1))
	{
		return;
	}
	Global_1138411[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/] = { Var0 };
	Var4.f_11 = 15;
	if (Global_1138828.f_2[iParam0 /*42*/].f_9 != 0)
	{
		Var4.f_9 = Global_1138828.f_2[iParam0 /*42*/].f_9;
	}
	if (!func_84(iParam0))
	{
		return;
	}
	Global_1138828.f_2[iParam0 /*42*/] = { Var4 };
}

int func_69()
{
	return Global_1051252.f_12;
}

char* func_70()
{
	return "unnamed";
}

int func_71(int iParam0)
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

bool func_72(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_94(36, iParam0);
}

int func_73(int iParam0)
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

bool func_74(int iParam0)
{
	if (func_95(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_96(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

void func_75(var uParam0)
{
	struct<17> Var0;

	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_76(int iParam0, int iParam1)
{
	if (Global_1138305.f_2[iParam0 /*17*/] != iParam1)
	{
		Global_1138305.f_2[iParam0 /*17*/] = iParam1;
	}
}

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;

	Global_1138828.f_2[iParam0 /*42*/].f_7++;
	if (Global_1138828.f_2[iParam0 /*42*/].f_7 < 60)
	{
		return;
	}
	Global_1138828.f_2[iParam0 /*42*/].f_7 = 0;
	if (func_48())
	{
		return;
	}
	if (!func_80(&(Global_1138305.f_2[iParam0 /*17*/].f_9)))
	{
		iVar0 = func_97(iParam0);
		if (iVar0 > 0)
		{
			Global_1138305.f_2[iParam0 /*17*/].f_15 = iVar0;
			func_81(&(Global_1138305.f_2[iParam0 /*17*/].f_9));
		}
		return;
	}
	else if (func_83(&(Global_1138305.f_2[iParam0 /*17*/].f_9)) < Global_1138305.f_2[iParam0 /*17*/].f_15)
	{
		return;
	}
	iVar1 = func_98(iParam0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_99(iParam0);
	if (iVar2 == 0)
	{
		return;
	}
	vVar3 = { func_100(iVar2) };
	fVar6 = 0f;
	vVar7 = { VEHICLE::_0xBA958F68031DDBFC(vVar3.x, vVar3.y) };
	iVar13 = 0;
	while (iVar13 <= 30)
	{
		fVar6 = (200f + (IntToFloat(iVar13) * 10f));
		vVar10 = { VEHICLE::_0x35D302397E524939(vVar3.x, vVar7, fVar6, !vVar3.z) };
		if (func_101(iParam0, vVar10))
		{
			func_103(iParam0, iVar1, vVar10, vVar3.z, func_102());
			return;
		}
		iVar13++;
	}
}

bool func_78(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_59(Global_1138411[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = Global_1138828.f_2[iParam0 /*42*/].f_8;
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		vVar2 = { Global_1138411[iVar0 /*13*/][iParam0 /*4*/].f_1 };
		if (!func_92(vVar2))
		{
			if (BUILTIN::VDIST(vVar2, Global_1138305.f_2[iParam0 /*17*/].f_2) > 10f)
			{
				Global_1138305.f_2[iParam0 /*17*/].f_2 = { vVar2 };
			}
		}
	}
	Global_1138828.f_2[iParam0 /*42*/].f_8++;
	if (Global_1138828.f_2[iParam0 /*42*/].f_8 >= 32)
	{
		Global_1138828.f_2[iParam0 /*42*/].f_8 = 0;
	}
}

bool func_80(var uParam0)
{
	return func_104(*uParam0, 1);
}

void func_81(var uParam0)
{
	func_105(uParam0, 0);
}

void func_82(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_83(var uParam0)
{
	if (!func_80(uParam0))
	{
		return 0;
	}
	if (func_106(uParam0))
	{
		return uParam0->f_2;
	}
	return func_107(uParam0->f_1);
}

bool func_84(int iParam0)
{
	if (Global_1138828.f_2[iParam0 /*42*/].f_10 < Global_1296859.f_21)
	{
		return true;
	}
	return false;
}

void func_85(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_86(int iParam0)
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

bool func_87(struct<2> Param0)
{
	if (!func_108(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_109(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_88(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_89(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_90(int iParam0, int iParam1)
{
	if (!func_59(Global_1138411[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1))
	{
		func_38(&(Global_1138411[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/]), iParam1);
	}
}

void func_91(int iParam0, int iParam1)
{
	if (Global_1138828.f_2[iParam0 /*42*/] != iParam1)
	{
		Global_1138828.f_2[iParam0 /*42*/] = iParam1;
	}
}

bool func_92(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_93(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1138828.f_2[iParam0 /*42*/].f_9 == iVar0 || Global_1138828.f_2[iParam0 /*42*/].f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_94(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_110(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_111())
	{
		return func_110(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_110(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_95(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_96(int iParam0)
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
		func_112(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_113(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901947.f_308.f_266;
		case 1:
			return Global_1901947.f_308.f_267;
		case 2:
			return Global_1901947.f_308.f_268;
		default:
			break;
	}
	return 0;
}

int func_98(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = 756707084;
			break;
		case 1:
			iVar0 = 756707084;
			break;
		case 2:
			iVar0 = -1083616881;
			break;
	}
	return iVar0;
}

int func_99(int iParam0)
{
	struct<2> Var0;
	float fVar41;
	int iVar42;

	if (iParam0 == 2)
	{
		return func_114(iParam0);
	}
	Var0 = 20;
	Var0.f_1 = 1203982336;
	Var0.f_1.f_2 = 1203982336;
	Var0.f_1.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	Var0.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 1203982336;
	iVar42 = func_115(iParam0);
	while (iVar42 <= func_116(iParam0))
	{
		fVar41 = func_117(iParam0, iVar42);
		if (fVar41 > 0f)
		{
			Var0[iVar42 /*2*/] = fVar41;
			Var0[iVar42 /*2*/].f_1 = iVar42;
		}
		iVar42++;
	}
	NETWORK::_0x7E300B5B86AB1D1A(&Var0, Var0, 2, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return Var0[0 /*2*/].f_1;
}

Vector3 func_100(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0.x = 0;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 2:
			vVar0.x = 0;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 3:
			vVar0.x = 0;
			vVar0.f_1 = 2;
			vVar0.f_2 = 0;
			break;
		case 4:
			vVar0.x = 0;
			vVar0.f_1 = 3;
			vVar0.f_2 = 0;
			break;
		case 5:
			vVar0.x = 0;
			vVar0.f_1 = 4;
			vVar0.f_2 = 0;
			break;
		case 6:
			vVar0.x = 0;
			vVar0.f_1 = 5;
			vVar0.f_2 = 0;
			break;
		case 7:
			vVar0.x = 1;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 8:
			vVar0.x = 2;
			vVar0.f_1 = 0;
			vVar0.f_2 = 0;
			break;
		case 9:
			vVar0.x = 24;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 10:
			vVar0.x = 24;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 11:
			vVar0.x = 23;
			vVar0.f_1 = 1;
			vVar0.f_2 = 0;
			break;
		case 12:
			vVar0.x = 3;
			vVar0.f_1 = 0;
			vVar0.f_2 = 1;
			break;
		case 13:
			vVar0.x = 3;
			vVar0.f_1 = 1;
			vVar0.f_2 = 1;
			break;
		case 14:
			vVar0.x = 3;
			vVar0.f_1 = 2;
			vVar0.f_2 = 1;
			break;
		case 15:
			vVar0.x = 3;
			vVar0.f_1 = 3;
			vVar0.f_2 = 1;
			break;
		case 16:
			vVar0.x = 3;
			vVar0.f_1 = 4;
			vVar0.f_2 = 1;
			break;
		case 17:
			vVar0.x = 3;
			vVar0.f_1 = 5;
			vVar0.f_2 = 1;
			break;
		case 18:
			vVar0.x = 3;
			vVar0.f_1 = 6;
			vVar0.f_2 = 1;
			break;
		case 19:
			vVar0.x = 3;
			vVar0.f_1 = 7;
			vVar0.f_2 = 1;
			break;
		default:
			break;
	}
	return vVar0;
}

bool func_101(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_92(vParam1))
	{
		return false;
	}
	if (func_118(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_86(iParam0);
	if (fVar1 > 300f)
	{
		fVar1 = 300f;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, fVar0, fVar1))
	{
		return false;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, fVar0, fVar1))
	{
		return false;
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
				if (fVar4 < fVar1 && !func_93(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

struct<2> func_102()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_103(int iParam0, int iParam1, vector3 vParam2, var uParam5, struct<2> Param6)
{
	if (!func_119())
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	else if (func_92(vParam2))
	{
		return 0;
	}
	Global_1138305.f_54[iParam0 /*17*/].f_1 = iParam1;
	Global_1138305.f_54[iParam0 /*17*/].f_2 = { vParam2 };
	Global_1138305.f_54[iParam0 /*17*/].f_5 = uParam5;
	Global_1138305.f_54[iParam0 /*17*/].f_6 = { Param6 };
	return 1;
}

bool func_104(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_120(uParam0, 1);
	func_121(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_106(var uParam0)
{
	return func_104(*uParam0, 2);
}

int func_107(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

bool func_108(int iParam0)
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

int func_109(int iParam0)
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

bool func_110(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_111()
{
	return Global_1102219.f_3672;
}

void func_112(int iParam0)
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
	func_113(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_113(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_114(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_115(iParam0);
	iVar1 = func_116(iParam0);
	return MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1 + 1);
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 9;
		case 2:
			return 12;
	}
	return 0;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 11;
		case 2:
			return 19;
	}
	return 0;
}

float func_117(int iParam0, int iParam1)
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	fVar0 = 0f;
	vVar1 = { func_100(iParam1) };
	fVar4 = 0f;
	vVar5 = { VEHICLE::_0xBA958F68031DDBFC(vVar1.x, vVar1.y) };
	iVar15 = 0;
	while (iVar15 <= 30)
	{
		fVar4 = (200f + (IntToFloat(iVar15) * 10f));
		vVar8 = { VEHICLE::_0x35D302397E524939(vVar1.x, vVar5, fVar4, !vVar1.z) };
		if (func_101(iParam0, vVar8))
		{
			iVar14 = 0;
			while (iVar14 <= 31)
			{
				iVar12 = PLAYER::INT_TO_PLAYERINDEX(iVar14);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
				{
					iVar13 = PLAYER::GET_PLAYER_PED(iVar12);
					if (ENTITY::DOES_ENTITY_EXIST(iVar13))
					{
						fVar11 = (fVar11 + func_122(vVar8, ENTITY::GET_ENTITY_COORDS(iVar13, false, false)));
					}
				}
				iVar14++;
			}
			fVar0 = fVar11;
		}
		else
		{
			iVar15++;
		}
	}
	return fVar0;
}

bool func_118(int iParam0)
{
	return func_78(iParam0, 4);
}

bool func_119()
{
	return (((SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[3]) && SCRIPTS::IS_THREAD_ACTIVE(Global_1051252.f_16[3], false)) && NETWORK::_0x31DAD2CD6D49546E(Global_1051252.f_16[3])) && NETWORK::_0xB4A25351D79B444C(Global_1051252.f_16[3]) == PLAYER::PLAYER_ID());
}

void func_120(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_121(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_122(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

