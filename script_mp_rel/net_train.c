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
	var uLocal_15 = 255;
	var uLocal_16 = 4;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 4;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 15;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	func_1(&uScriptParam_0);
	func_2(&uLocal_61, &uScriptParam_0);
	while (!func_3(&uLocal_61))
	{
		func_4(&uLocal_13, &uLocal_28, &uLocal_61);
		BUILTIN::WAIT(0);
	}
	func_5(&uLocal_13, &uLocal_61);
}

void func_1(var uParam0)
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_6(32, *uParam0);
	func_7();
	if (func_8())
	{
		func_9();
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_13, 15, 7);
	func_10(NETWORK::_0xBA24095EA96DFE17(&uLocal_13), 15, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_28, 33, 8);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(uLocal_28[0])), 33, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
}

void func_2(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
}

bool func_3(var uParam0)
{
	if (func_13(0, 0))
	{
		return true;
	}
	else if (uParam0->f_2 == 5)
	{
		return true;
	}
	return false;
}

void func_4(var uParam0, var uParam1, var uParam2)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14(uParam0, uParam1, uParam2);
	}
	func_15(uParam0, uParam1, uParam2);
}

void func_5(var uParam0, var uParam1)
{
	int iVar0;

	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_16(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (VOLUME::_0xA4A4359320345B34(uParam0->f_3[iVar0]))
			{
				uParam0->f_3[iVar0] = 0;
			}
			if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_8[iVar0]))
			{
				VOLUME::_0xFDFECC6EE4491E11(uParam0->f_8[iVar0]);
			}
			iVar0++;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam1->f_3))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_3));
	}
	func_17(uParam1->f_1);
	func_9();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_9();
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
		if (func_18() == 0)
		{
			if (func_19())
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

bool func_8()
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

void func_9()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
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

void func_14(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			func_20(uParam0, uParam2);
			break;
		case 1:
			func_21(uParam0, uParam2);
			break;
		case 2:
			func_22(uParam0, uParam2);
			break;
		case 3:
			func_23(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_24(uParam0, uParam2);
			break;
	}
}

void func_15(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 >= 4 && uParam2->f_2 < 4)
	{
		func_25(uParam2, 4);
	}
	switch (uParam2->f_2)
	{
		case 0:
			func_26(uParam0, uParam2);
			break;
		case 1:
			func_27(uParam0, uParam2);
			break;
		case 2:
			func_28(uParam0, uParam2);
			break;
		case 3:
			func_29(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_30(uParam0, uParam2);
			break;
	}
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;

	func_31(uParam1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_1))
		{
			iVar0 = NETWORK::NET_TO_VEH(uParam0->f_1);
			VEHICLE::DELETE_MISSION_TRAIN(&iVar0);
			func_32(*uParam1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_4[0]))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&(uParam1->f_4[0]));
		func_32(*uParam1, 0);
	}
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = VEHICLE::_0x635423D55CA84FC8(iParam0);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar0 = VEHICLE::_0x8DF5F6A19F99F0D5(iParam0, iVar2);
		if (iVar0 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		iVar2++;
	}
}

int func_18()
{
	return Global_1572887.f_13;
}

bool func_19()
{
	return Global_1051252.f_8;
}

void func_20(var uParam0, var uParam1)
{
	func_33(uParam0, uParam1, 1);
}

void func_21(var uParam0, var uParam1)
{
	if (func_34(uParam1->f_1))
	{
		func_33(uParam0, uParam1, 2);
	}
}

void func_22(var uParam0, var uParam1)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
		{
			return;
		}
		vVar0 = { func_35(*uParam1) };
		uVar3 = func_36(*uParam1);
		iVar4 = func_37(uParam1->f_1);
		if (!func_38(&(uParam0->f_1), uParam1->f_1, vVar0, uVar3, iVar4, 0, 1, 1))
		{
			func_33(uParam0, uParam1, 4);
			return;
		}
		iVar5 = NETWORK::NET_TO_VEH(uParam0->f_1);
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
		}
		fVar6 = func_39(uParam1->f_1);
		VEHICLE::SET_TRAIN_SPEED(iVar5, fVar6);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iVar5, fVar6);
		VEHICLE::_0x160C1B5AB48AB87C(iVar5, func_40(uParam1->f_1));
		VEHICLE::_0x4182C037AA1F0091(iVar5, func_41(uParam1->f_1));
		VEHICLE::_0xE6BD7DD3FD474415(iVar5, func_42(uParam1->f_1));
		VEHICLE::_0x06A09A6E0C6D2A84(iVar5, 0);
		if (!func_43(uParam1->f_1))
		{
			VEHICLE::_0xA72B1BF3857B94D7(iVar5, 1);
		}
		if (func_44(uParam1->f_1))
		{
			VEHICLE::_0x1BFBAFCC6760FF02(iVar5, 0);
		}
	}
	else
	{
		iVar7 = NETWORK::NET_TO_VEH(uParam0->f_1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			func_33(uParam0, uParam1, 4);
		}
		else if (ENTITY::IS_ENTITY_DEAD(iVar7))
		{
			func_33(uParam0, uParam1, 4);
		}
		else if (VEHICLE::_0xBD3C4A2ED509205E(iVar7))
		{
			func_33(uParam0, uParam1, 3);
		}
	}
}

void func_23(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (func_45(uParam0, uParam2))
	{
		func_33(uParam0, uParam2, 4);
		return;
	}
	if (uParam0->f_14 == 0 && func_46(uParam1))
	{
		uParam0->f_14 = 1;
	}
	func_47(uParam0, uParam2);
	if (uParam0->f_2 == 255)
	{
		iVar0 = 255;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (func_48(uParam1, 1, iVar1))
			{
				iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
				{
					uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
					return;
				}
			}
			iVar1++;
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_2))
	{
		uParam0->f_2 = 255;
	}
}

void func_24(var uParam0, var uParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		func_33(uParam0, uParam1, 5);
	}
}

void func_25(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

void func_26(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_25(uParam1, 1);
	}
}

void func_27(var uParam0, var uParam1)
{
	if (func_34(uParam1->f_1) && *uParam0 > 1)
	{
		func_25(uParam1, 2);
	}
}

void func_28(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;

	if (*uParam0 > 2 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar0 = NETWORK::NET_TO_VEH(uParam0->f_1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_25(uParam1, 4);
		}
		else if (VEHICLE::_0xBD3C4A2ED509205E(iVar0))
		{
			func_49(*uParam1, iVar0);
			if (func_50(uParam1->f_1))
			{
				uParam1->f_3 = MAP::_BLIP_ADD_FOR_ENTITY(-399496385, iVar0);
				MAP::SET_BLIP_SPRITE(uParam1->f_3, joaat("BLIP_AMBIENT_TRAIN"), true);
				if (!func_51(*uParam1, 16))
				{
					MAP::_BLIP_REMOVE_MODIFIER(uParam1->f_3, -1186550032);
				}
				else
				{
					MAP::_BLIP_SET_MODIFIER(uParam1->f_3, -1186550032);
				}
				func_52(*uParam1, uParam1->f_3);
			}
			if (!func_53(uParam1->f_1))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar0, PLAYER::PLAYER_ID(), true);
				VEHICLE::_0x63DC1F22C903B709(iVar0, true);
			}
			iVar1 = VEHICLE::_0x60B7D1DCC312697D(iVar0);
			func_54(*uParam1, iVar1);
			iVar12 = 0;
			iVar12 = 0;
			while (iVar12 <= (iVar1 - 1))
			{
				uParam1->f_4[iVar12] = VEHICLE::GET_TRAIN_CARRIAGE(iVar0, iVar12);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[iVar12]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_4[iVar12]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_4[iVar12]))
					{
						if (func_55(uParam1->f_1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_4[iVar12], true);
						}
						else
						{
							ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_4[iVar12], false);
						}
						ENTITY::_0xA91E6CF94404E8C9(uParam1->f_4[iVar12]);
					}
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_4[iVar12]), &vVar3, &vVar6);
					vVar9 = { vVar6 - vVar3 };
					vVar9.x = (vVar9.x * 0.9f);
					vVar9.f_2 = (vVar9.z * 1.25f);
					iVar2 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(uParam1->f_4[iVar12], false, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(uParam1->f_4[iVar12]), vVar9);
					PED::_0x7C00CFC48A782DC0(iVar2, uParam1->f_4[iVar12], 0f, 0f, (vVar9.z * 0.6f), 0f, 0f, 0f, 2, 1);
					func_56(*uParam1, iVar12, uParam1->f_4[iVar12]);
					func_57(*uParam1, iVar12, iVar2);
				}
				iVar12++;
			}
			func_58(*uParam1, 4);
			func_17(uParam1->f_1);
			func_25(uParam1, 3);
		}
	}
}

void func_29(var uParam0, var uParam1, var uParam2)
{
	if (func_45(uParam0, uParam2))
	{
		func_25(uParam2, 4);
		return;
	}
	func_31(uParam2);
	if (func_59(uParam0, uParam2))
	{
		if (!func_48(uParam1, 2, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_60(uParam1, 2, NETWORK::PARTICIPANT_ID_TO_INT());
			func_61();
		}
	}
	if (func_62(uParam2))
	{
		if (!func_48(uParam1, 1, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_60(uParam1, 1, NETWORK::PARTICIPANT_ID_TO_INT());
		}
		if (uParam0->f_2 == PLAYER::PLAYER_ID())
		{
			func_25(uParam2, 5);
		}
	}
}

void func_30(var uParam0, var uParam1)
{
	func_16(uParam0, uParam1);
	if (*uParam0 > 4)
	{
		func_25(uParam1, 5);
	}
}

void func_31(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = uParam0->f_4[0];
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		if (!func_63(vVar1))
		{
			vVar4 = { Global_1138411[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1 };
			if (BUILTIN::VDIST(vVar4, vVar1) > 10f)
			{
				Global_1138411[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1 = { vVar1 };
			}
		}
	}
	else if (!func_63(Global_1138411[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1))
	{
		Global_1138411[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][*uParam0 /*4*/].f_1 = { 0f, 0f, 0f };
	}
}

int func_32(int iParam0, bool bParam1)
{
	struct<13> Var0;

	if (!func_64(iParam0, bParam1))
	{
		Var0.f_12 = -1;
		Var0.f_12.f_1 = -1;
		Var0.f_4 = 2;
		Var0.f_5 = iParam0;
		if (bParam1)
		{
			func_65(iParam0);
		}
		return func_67(&Var0, func_66(0, 8));
	}
	return 1;
}

void func_33(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 != iParam2)
	{
		*uParam0 = iParam2;
	}
}

bool func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar2 = VEHICLE::_0x635423D55CA84FC8(iParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= (iVar2 - 1))
	{
		iVar1 = VEHICLE::_0x8DF5F6A19F99F0D5(iParam0, iVar3);
		if (iVar1 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1))
			{
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

Vector3 func_35(int iParam0)
{
	return Global_1138305.f_2[iParam0 /*17*/].f_2;
}

var func_36(int iParam0)
{
	return Global_1138305.f_2[iParam0 /*17*/].f_5;
}

int func_37(int iParam0)
{
	if (func_68(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(VEHICLE::_0x635423D55CA84FC8(iParam1)))
	{
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (bParam7)
	{
		iVar1 = VEHICLE::_0x635423D55CA84FC8(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			if (!func_69(VEHICLE::_0x8DF5F6A19F99F0D5(iParam1, iVar0)))
			{
				bVar2 = true;
			}
			iVar0++;
		}
		if (bVar2)
		{
			return false;
		}
	}
	iVar3 = VEHICLE::_CREATE_MISSION_TRAIN(iParam1, vParam2, bParam5, bParam6, true, bParam8);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return false;
	}
	VEHICLE::_0x06A09A6E0C6D2A84(iVar3, 0);
	*uParam0 = NETWORK::VEH_TO_NET(iVar3);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		return false;
	}
	if (bParam9)
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar3, true);
	}
	else
	{
		NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
	}
	return true;
}

float func_39(int iParam0)
{
	if (func_68(iParam0))
	{
		return 4.5f;
	}
	switch (iParam0)
	{
		case joaat("NET_FETCH_TRAIN_VIP_RESCUE_00"):
			return 0f;
		case joaat("NET_FETCH_TRAIN_CAMP_RESUPPLY_00"):
			return 0f;
		case joaat("NET_FETCH_TRAIN_MOVING_BOUNTY_1"):
			return 0f;
		case -735194130:
			return 0f;
		case joaat("NET_FETCH_TRAIN_KIDNAPPED_BUYER_00"):
			return 0f;
		default:
			break;
	}
	return 8f;
}

float func_40(int iParam0)
{
	if (func_68(iParam0))
	{
		return 5f;
	}
	return 30f;
}

int func_41(int iParam0)
{
	if (func_68(iParam0))
	{
		return 1;
	}
	return 1;
}

int func_42(int iParam0)
{
	if (func_68(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_43(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

bool func_44(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return true;
		default:
			break;
	}
	return false;
}

bool func_45(var uParam0, var uParam1)
{
	if (func_70(1))
	{
		return true;
	}
	else if (Global_1138828.f_2[*uParam1 /*42*/].f_3 == 0f)
	{
		return true;
	}
	else if (func_71(*uParam1) != uParam1->f_1)
	{
		return true;
	}
	else if (Global_1138828.f_2[*uParam1 /*42*/] != 3)
	{
		return true;
	}
	else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return true;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[0]))
	{
		return true;
	}
	return false;
}

bool func_46(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 2;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && func_72((*uParam0)[iVar0], iVar1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_47(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	uParam1->f_21++;
	if (uParam1->f_21 < 15)
	{
		return;
	}
	uParam1->f_21 = 0;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = VEHICLE::_0x60B7D1DCC312697D(iVar0);
	iVar2 = uParam0->f_13;
	iVar3 = uParam0->f_13 * 4;
	if (iVar3 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4[iVar3]))
		{
			func_73(uParam0, uParam1, iVar2, uParam1->f_4[iVar3]);
		}
		iVar2++;
	}
	else
	{
		iVar2 = 0;
	}
	if (iVar2 >= 4)
	{
		iVar2 = 0;
	}
	uParam0->f_13 = iVar2;
}

bool func_48(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return false;
	}
	return func_72((*uParam0)[iParam2], iParam1);
}

void func_49(int iParam0, int iParam1)
{
	Global_1138828.f_2[iParam0 /*42*/].f_2 = iParam1;
}

bool func_50(int iParam0)
{
	if (func_68(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

bool func_51(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_72(Global_1138411[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_52(int iParam0, var uParam1)
{
	Global_1138828.f_2[iParam0 /*42*/].f_6 = uParam1;
}

bool func_53(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

void func_54(int iParam0, int iParam1)
{
	Global_1138828.f_2[iParam0 /*42*/].f_5 = iParam1;
}

bool func_55(var uParam0)
{
	return true;
}

void func_56(int iParam0, int iParam1, var uParam2)
{
	Global_1138828.f_2[iParam0 /*42*/].f_11[iParam1 /*2*/] = uParam2;
}

void func_57(int iParam0, int iParam1, int iParam2)
{
	Global_1138828.f_2[iParam0 /*42*/].f_11[iParam1 /*2*/].f_1 = iParam2;
}

void func_58(int iParam0, int iParam1)
{
	if (!func_72(Global_1138411[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1))
	{
		func_74(&(Global_1138411[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/]), iParam1);
	}
}

bool func_59(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_4[0];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (uParam0->f_14 == 1)
	{
		return false;
	}
	iVar1 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0);
	if (iVar1 == Global_34)
	{
		return true;
	}
	return false;
}

void func_60(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return;
	}
	if (!func_72((*uParam0)[iParam2], iParam1))
	{
		func_74(uParam0[iParam2], iParam1);
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3[3];
	var uVar7;
	struct<10> Var9;

	fVar2 = 25f;
	uVar7 = 1;
	iVar0 = func_75(&uVar3, &uVar7, 3, Global_35, fVar2, 0, 0, 0, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 1);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar3[iVar1]) && !ENTITY::IS_ENTITY_DEAD(uVar3[iVar1])) && !LAW::_0x40851BCC33ACD9AB(uVar3[iVar1]))
		{
			Var9 = Global_34;
			Var9.f_3 = { Global_35 };
			Var9.f_6 = func_76();
			Var9.f_9 = 1;
			Var9.f_2 = joaat("CRIME_TRAIN_ROBBERY");
			Var9.f_8 = 1;
			LAW::_0x018F30D762E62DF8(uVar3[iVar1], &Var9);
			func_77(uVar3[iVar1], Global_35, 2, 1, 1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(uVar3[iVar1], Global_34, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar1++;
	}
}

bool func_62(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;

	if (func_78(uParam0, 1))
	{
		return true;
	}
	iVar0 = uParam0->f_4[0];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	if (func_63(vVar1))
	{
		func_79(uParam0, 1);
		return true;
	}
	fVar4 = Global_1138828.f_2[*uParam0 /*42*/].f_3;
	if (fVar4 > 0f)
	{
		fVar5 = (fVar4 + 50f);
		fVar6 = BUILTIN::VDIST(Global_35, vVar1);
		if (fVar6 > fVar5 && !func_80(*uParam0))
		{
			func_79(uParam0, 1);
			return true;
		}
	}
	return false;
}

bool func_63(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_64(int iParam0, bool bParam1)
{
	if (!func_81())
	{
		return false;
	}
	if (Global_1138305.f_2[iParam0 /*17*/].f_1 == 0)
	{
		return false;
	}
	if (bParam1)
	{
		func_65(iParam0);
	}
	func_82(iParam0, 4);
	return true;
}

void func_65(int iParam0)
{
	Global_1138828.f_2[iParam0 /*42*/].f_10 = Global_1296859.f_21 + 60;
}

var func_66(int iParam0, int iParam1)
{
	return func_83(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

int func_67(var uParam0, var uParam1)
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

bool func_68(int iParam0)
{
	switch (iParam0)
	{
		case -1865722934:
		case -1643549114:
		case -1083616881:
		case -272646696:
		case 1936859429:
			return true;
		default:
			break;
	}
	return false;
}

bool func_69(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_70(int iParam0)
{
	return func_72(Global_1138828.f_1, iParam0);
}

int func_71(int iParam0)
{
	return Global_1138305.f_2[iParam0 /*17*/].f_1;
}

bool func_72(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_73(var uParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	struct<8> Var5;
	vector3 vVar14;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam3, true, false) };
	if (func_63(vVar0))
	{
		return;
	}
	fVar3 = 40f;
	if (!VOLUME::_0xA4A4359320345B34(uParam0->f_3[iParam2]))
	{
		iVar4 = MISC::GET_HASH_KEY("NET_TRAIN");
		if (VOLUME::_0x397769175A7DBB30(vVar0, fVar3, 1, 0, iVar4))
		{
			return;
		}
		Var5 = { vVar0 };
		Var5.f_4 = 40f;
		Var5.f_6 = MISC::GET_HASH_KEY("NET_TRAIN");
		Var5.f_7 = *uParam1;
		Var5.f_5 = 48;
		uParam0->f_3[iParam2] = VOLUME::_0x183C0B6CFEFFCAE4(&Var5);
	}
	else if (!VOLUME::_0xF6A8A652A6B186CD(uParam0->f_8[iParam2]))
	{
		switch (VOLUME::_0xB33A604345F58202(uParam0->f_3[iParam2]))
		{
			case 3:
				uParam0->f_8[iParam2] = VOLUME::_0x351D71B8B72B858B(uParam0->f_3[iParam2]);
				break;
			case 4:
				uParam0->f_3[iParam2] = 0;
				break;
			default:
				break;
		}
	}
	else
	{
		vVar14 = { VOLUME::_0xC4019CF9AE8E931A(uParam0->f_8[iParam2]) };
		if (BUILTIN::VDIST(vVar14, vVar0) > fVar3)
		{
			VOLUME::_0xEC43C2FFB70E3F30(uParam0->f_8[iParam2], vVar0);
		}
	}
}

void func_74(var uParam0, int iParam1)
{
	func_84(uParam0, iParam1);
}

int func_75(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_85(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_86(iVar0);
	return iVar1;
}

var func_76()
{
	return Global_1939161.f_26;
}

void func_77(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_87(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (iParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		PED::_0xF1C03A5352243A30(iParam0);
		return;
	}
	if (func_63(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::_0x802092B07E3B1EEA(iParam0, vParam1, iParam6);
			break;
		case 5:
			PED::_0x463803429297117C(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			PED::_0x62FDAD5E01D2DD47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			PED::_0xEC6935EBE0847B90(iParam0, vParam1);
			break;
		case 2:
			PED::_0xEEED8FAFEC331A70(iParam0, vParam1, iParam6);
			break;
		case 1:
			PED::_0xF1C03A5352243A30(iParam0);
			break;
		case 7:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
		default:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
	}
}

bool func_78(var uParam0, int iParam1)
{
	return func_72(uParam0->f_20, iParam1);
}

void func_79(var uParam0, int iParam1)
{
	if (!func_72(uParam0->f_20, iParam1))
	{
		func_74(&(uParam0->f_20), iParam1);
	}
}

bool func_80(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1138828.f_2[iParam0 /*42*/].f_9 == iVar0 || Global_1138828.f_2[iParam0 /*42*/].f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_81()
{
	return (((SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[3]) && SCRIPTS::IS_THREAD_ACTIVE(Global_1051252.f_16[3], false)) && NETWORK::_0x31DAD2CD6D49546E(Global_1051252.f_16[3])) && NETWORK::_0xB4A25351D79B444C(Global_1051252.f_16[3]) == PLAYER::PLAYER_ID());
}

void func_82(int iParam0, int iParam1)
{
	if (Global_1138305.f_2[iParam0 /*17*/] != iParam1)
	{
		Global_1138305.f_2[iParam0 /*17*/] = iParam1;
	}
}

var func_83(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_88() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_89());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_89());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_89());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_90(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_91(iVar2))
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
				if (iVar9 & 8192 != 0 && func_92(iVar2) != 1)
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
					if (!func_93(iVar10))
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

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_85(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_94(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_95(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

void func_86(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

bool func_87(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_72(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_72(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_72(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_72(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_72(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_72(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_72(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_72(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_88()
{
	return Global_1051252.f_12;
}

char* func_89()
{
	return "unnamed";
}

int func_90(int iParam0)
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

bool func_91(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_96(36, iParam0);
}

int func_92(int iParam0)
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

bool func_93(int iParam0)
{
	if (func_97(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_98(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_94(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_99(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_95(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_96(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_100(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_101())
	{
		return func_100(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_100(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_97(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_98(int iParam0)
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
		func_102(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_103(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

int func_99(int iParam0, bool bParam1)
{
	return func_104(iParam0, Global_1893587.f_2, bParam1);
}

bool func_100(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_101()
{
	return Global_1102219.f_3672;
}

void func_102(int iParam0)
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
	func_103(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_103(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_104(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_105(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_106(iParam0, iVar0, iVar1, bParam2);
}

bool func_105(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_18() != -1;
	switch (iParam0)
	{
		case 81:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*uParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*uParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*uParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*uParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*uParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*uParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*uParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*uParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*uParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*uParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*uParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*uParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*uParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*uParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 709;
			}
			else
			{
				*uParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*uParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*uParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*uParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*uParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*uParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*uParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*uParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*uParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*uParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*uParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*uParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*uParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*uParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*uParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*uParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*uParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*uParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*uParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*uParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_106(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(iParam0);
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_107(iVar2) != 0 && PERSCHAR::_0x800DF3FC913355F3(func_108(iVar2)))
		{
			if (func_108(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_107(int iParam0)
{
	if (!func_109(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0 /*3*/];
}

int func_108(int iParam0)
{
	if (!func_109(iParam0))
	{
		return 0;
	}
	return Global_1893775[iParam0 /*3*/].f_1;
}

bool func_109(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

