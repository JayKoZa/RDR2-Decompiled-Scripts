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
	struct<4> Local_19 = { 0, 0, 0, 0 } ;
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
	var uLocal_39 = 255;
	var uLocal_40 = 0;
	var uLocal_41 = 4;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 2;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = -1;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	Local_19.f_3 = BRAIN::_0x6818D1A194E29983();
	if (!ENTITY::DOES_ENTITY_EXIST(Local_19.f_3))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	func_1();
	while (!func_2(1, 1) && (ENTITY::DOES_ENTITY_EXIST(Local_19.f_3) && BRAIN::_0x6818D1A194E29983() == Local_19.f_3))
	{
		if (!func_3(&Local_19, &uScriptParam_0))
		{
			func_4(&Local_19, &uScriptParam_0);
			if (func_3(&Local_19, &uScriptParam_0))
			{
			}
			else
			{
				Jump @119; //curOff = 113
				Jump @127; //curOff = 116
				BUILTIN::WAIT(0);
			}
			func_5(&Local_19, &uScriptParam_0);
		}
	}
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	BRAIN::_0xA6AC35DB4A7957A8(250);
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

bool func_3(var uParam0, var uParam1)
{
	if (func_2(1, 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return true;
	}
	if (func_6(uParam0, 12))
	{
		return true;
	}
	if (func_6(uParam0, 0))
	{
		return true;
	}
	if (!func_6(uParam0, 2))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(uParam1) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
		{
			func_7(uParam0, 11);
			return true;
		}
	}
	return false;
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;

	uParam0->f_3 = BRAIN::_0x6818D1A194E29983();
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	else
	{
		uParam0->f_21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	uParam0->f_20 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_20))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_20);
		if (uParam0->f_19 != iVar0)
		{
			uParam0->f_19 = iVar0;
			func_7(uParam0, 29);
		}
	}
	switch (*uParam0)
	{
		case 0:
			func_8(uParam0, uParam1);
			break;
		case 1:
			func_9(uParam0, uParam1);
			break;
		case 2:
			func_10(uParam0, uParam1);
			break;
		case 3:
			func_11(uParam0, uParam1);
			break;
		case 4:
			func_12(uParam0, uParam1);
			break;
	}
	func_13(uParam0, uParam1);
	uParam0->f_2++;
	if (uParam0->f_2 > 5)
	{
		uParam0->f_2 = 0;
	}
}

void func_5(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_16));
	}
	if (HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_5))
	{
		HUD::REMOVE_MP_GAMER_TAG(&(uParam0->f_5));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		bVar2 = PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true);
		bVar3 = TASK::IS_PED_IN_WRITHE(uParam0->f_18);
	}
	bVar4 = true;
	if ((!Global_1048579 || !Global_390124.f_3) || Global_390124.f_18.f_1)
	{
		bVar4 = false;
	}
	bVar5 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3);
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "HorseCamp"))
	{
		DECORATOR::DECOR_REMOVE(uParam0->f_3, "HorseCamp");
	}
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_3, "bHorseHasBeenStolen"))
	{
		DECORATOR::DECOR_REMOVE(uParam0->f_3, "bHorseHasBeenStolen");
	}
	if (func_6(uParam0, 5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (TASK::_0xEFC4303DDC6E60D3(iVar1) && TASK::_0xED1F514AF4732258(iVar1) == uParam0->f_18)
			{
				TASK::_0xED27560703F37258(iVar1);
			}
		}
		if (PED::_0x5102307CE88798EB(uParam0->f_18))
		{
			PED::_0x3088634CF8C819CF(uParam0->f_18);
		}
		if (bVar5)
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 211, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 297, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 400, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (func_14(iVar1, uParam0->f_18, 0) || (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::GET_MOUNT(iVar1) == uParam0->f_18))
			{
				bVar6 = false;
				if (!PLAYER::IS_PLAYER_DEAD(iVar0))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING(iVar0) || PED::GET_PED_RESET_FLAG(iVar1, 311))
					{
						bVar6 = true;
					}
				}
				if ((bVar6 || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_18)) || PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
					PED::_REMOVE_PED_FROM_MOUNT(iVar1, true, false);
				}
				else
				{
					TASK::TASK_DISMOUNT_ANIMAL(iVar1, 1, 0, 0, 0, 0);
				}
			}
		}
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			iVar7 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar7))
			{
				iVar7 = uParam0->f_20;
			}
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar7) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar7))
			{
				iVar8 = iVar0;
				iVar9 = iVar7;
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1291106[iVar8 /*19*/].f_13), iVar9))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(Global_1291106[iVar8 /*19*/].f_13), iVar9);
				}
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1291106[iVar8 /*19*/].f_14), iVar9))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(Global_1291106[iVar8 /*19*/].f_14), iVar9);
				}
			}
		}
		if (!bVar5)
		{
			if (!func_15(uParam0->f_3, uParam0->f_4, !func_6(uParam0, 11)))
			{
			}
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(uParam0->f_3, "bHorseCleanedUp", true);
		}
	}
	else if (func_6(uParam0, 6))
	{
		bVar10 = ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_3);
		if (bVar10)
		{
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
			{
				iVar11 = PLAYER::_0x7C803BDC8343228D(uParam0->f_21);
				if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar11))
				{
					iVar11 = uParam0->f_20;
				}
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar11) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar11))
				{
					iVar12 = iVar0;
					iVar13 = iVar11;
					if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1291106[iVar12 /*19*/].f_13), iVar13))
					{
						SCRIPTS::_0xD426E2E3288469D6(&(Global_1291106[iVar12 /*19*/].f_13), iVar13);
					}
				}
				else if (!func_15(uParam0->f_3, uParam0->f_4, 0))
				{
				}
			}
		}
	}
	if (func_6(uParam0, 7))
	{
		if (PLAYER::_GET_MOUNT_OF_PLAYER(iVar0) == uParam0->f_18)
		{
			func_16();
			func_17(uParam0->f_18, &(uParam1->f_7));
			func_18();
			if (!func_6(uParam0, 11))
			{
				if (!func_6(uParam0, 17))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
					{
						func_19(uParam0->f_18);
					}
				}
			}
			func_20(1);
			func_20(65536);
			func_20(32768);
			func_20(131072);
			func_21(0, 1);
			func_22(0, 1);
		}
		if (uParam1->f_11 == Global_1291734.f_581.f_46)
		{
			if (PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar0) == uParam0->f_21)
			{
				if (!func_23(94))
				{
					PLAYER::_SET_PLAYER_OWNS_VEHICLE(iVar0, 0);
				}
				func_24(1);
			}
		}
	}
	if (func_23(94) && PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar0) == uParam0->f_21)
	{
		if (bVar5)
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (func_6(uParam0, 6))
	{
		iVar14 = 0;
		while (iVar14 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22[iVar14]))
			{
			}
			else
			{
				ENTITY::IS_ENTITY_DEAD(uParam0->f_22[iVar14]);
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_22[iVar14]))
				{
				}
				else
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_22[iVar14]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_22[iVar14], true, true);
					}
					if (!ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_22[iVar14]))
					{
					}
					else if (func_6(uParam0, 11))
					{
						PED::DELETE_PED(&(uParam0->f_22[iVar14]));
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_22[iVar14]));
					}
				}
			}
			iVar14++;
		}
	}
	if (!bVar5)
	{
		func_25(uParam0, func_6(uParam0, 11));
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, false);
	}
	if (!bVar5)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	if (func_6(uParam0, 5))
	{
		if (func_6(uParam0, 2))
		{
			Global_1904087.f_111 = 0;
			Global_1904087.f_112 = 0;
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, false);
		}
		func_25(uParam0, func_6(uParam0, 11));
		ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, 1);
		if (func_6(uParam0, 11) || func_6(uParam0, 17))
		{
			iVar15 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, 0);
			iVar16 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_18, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar15))
			{
				if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
				{
					PED::DELETE_PED(&(uParam0->f_18));
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar16))
			{
				if (iVar16 == PLAYER::GET_PLAYER_PED(iVar0))
				{
					PED::_REMOVE_PED_FROM_MOUNT(iVar16, true, false);
					if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
					{
						if (bVar4)
						{
							PED::DELETE_PED(&(uParam0->f_18));
						}
						else
						{
							PED::_0x7043D0681285BA2D(&(uParam0->f_18));
						}
					}
				}
				else if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
				{
					PED::DELETE_PED(&(uParam0->f_18));
				}
			}
			else if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
			{
				if (bVar4)
				{
					PED::DELETE_PED(&(uParam0->f_18));
				}
				else
				{
					PED::_0x7043D0681285BA2D(&(uParam0->f_18));
				}
			}
		}
		else
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_18, 105, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_18, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 288, true);
			if (!bVar2 && !bVar3)
			{
				iVar17 = PLAYER::GET_PLAYER_PED(PLAYER::_0xAD03B03737CE6810(uParam0->f_18));
				if ((!ENTITY::DOES_ENTITY_EXIST(iVar17) || ENTITY::IS_ENTITY_DEAD(iVar17)) || func_26(ENTITY::GET_ENTITY_COORDS(iVar17, true, false)))
				{
					iVar17 = uParam0->f_18;
				}
				TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_18, ENTITY::GET_ENTITY_COORDS(iVar17, true, false), 4, 5767424, -1082130432 /* Float: -1f */, -1, 0);
				AITRANSPORT::_0xDD0660C997DE94FD(uParam0->f_3, 0);
			}
			if (bVar3)
			{
				ENTITY::_SET_ENTITY_HEALTH(uParam0->f_18, 0, 0);
			}
			PED::_0x39A2FC5AF55A52B1(uParam0->f_18, -1);
			PED::_0x36E4B61DC56DE77C(uParam0->f_18, 20f, 150f, 30000, 5000);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_18));
		}
	}
	else
	{
		VEHICLE::_0xC399CC89FBA05DA0(uParam0->f_21, 1);
		if (func_6(uParam0, 11))
		{
			VEHICLE::_0x35DC1877312FBA0F(&(uParam0->f_21));
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_21));
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_1, iParam1);
}

void func_7(var uParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(uParam0->f_1, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(uParam0->f_1), iParam1);
}

void func_8(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, true);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_27(&(uParam0->f_29)))
	{
		func_28(&(uParam0->f_29));
	}
	iVar1 = func_29(iVar0);
	if (iVar1 == -1)
	{
		if (STREAMING::IS_MODEL_A_PED(iVar0))
		{
			iVar1 = 0;
		}
		else if (STREAMING::IS_MODEL_A_VEHICLE(iVar0))
		{
			iVar1 = 2;
		}
		else
		{
			func_7(uParam0, 0);
		}
	}
	iVar2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_4 = iVar1;
	iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	uParam0->f_20 = iVar3;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam1->f_7)))
	{
		func_7(uParam0, 1);
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	else
	{
		uParam0->f_21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	if ((!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar3)) || iVar3 != PLAYER::PLAYER_ID())
	{
		switch (uParam0->f_4)
		{
			case 0:
			case 1:
				func_7(uParam0, 5);
				if (MISC::COMPARE_STRINGS(&(uParam1->f_12), func_30(), false, -1) == 0)
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_32(func_31(iVar0))));
				}
				else if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(uParam1->f_12)) > 0 && NETWORK::_0xF23A6D6C11D8EC15(uParam1))
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(uParam1->f_12));
				}
				else if (iVar0 == func_33())
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_32(func_34())));
				}
				func_7(uParam0, 21);
				break;
			case 2:
				func_7(uParam0, 6);
				func_35(uParam0, iVar2, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1));
				break;
			case 3:
				func_7(uParam0, 6);
				func_7(uParam0, 21);
				break;
			default:
				func_7(uParam0, 21);
				break;
		}
		func_36(uParam0, 4);
		return;
	}
	if (func_6(uParam0, 1))
	{
		if (iVar1 == 0 || iVar1 == 1)
		{
			iVar4 = func_31(iVar0);
			StringCopy(&(Global_1291734.f_11.f_515), MISC::_CREATE_VAR_STRING(2, func_32(iVar4)), 64);
		}
	}
	else
	{
		if (!func_37(&(uParam1->f_7), &uVar5))
		{
			if (func_38(&(uParam1->f_7)))
			{
				func_39(0, 1);
			}
		}
		if (iVar1 == 0 || iVar1 == 1)
		{
			if (!func_40(&(uParam1->f_7), uParam0->f_4, 1))
			{
				func_7(uParam0, 0);
				return;
			}
		}
		uParam1->f_7 = { Global_1904087 };
		uParam0->f_4 = Global_1904087.f_10;
		Global_1291734.f_11.f_515 = { func_41(&Global_1904087, 1) };
	}
	if (uParam0->f_4 == -1)
	{
		func_7(uParam0, 0);
		return;
	}
	func_7(uParam0, 2);
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1988458112))
	{
		ENTITY::IS_ENTITY_DEAD(iVar2);
		PED::SET_PED_CONFIG_FLAG(iVar2, 561, false);
		func_42(uParam0, 23);
	}
	uParam0->f_17 = func_43(uParam0->f_4);
	if (func_6(uParam0, 1))
	{
		uParam0->f_17 = -1230993421;
	}
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			func_7(uParam0, 21);
			if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-475019843, 1661175588) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-475019843, 1661175588))
			{
				if (func_6(uParam0, 1))
				{
					iVar7 = 1;
				}
				else
				{
					func_44(uParam0->f_18, Global_1904087.f_23);
					iVar7 = func_45(uParam0->f_18);
				}
				PED::_0xA69899995997A63B(uParam0->f_18, iVar7);
			}
			uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			iVar6 = NETWORK::PED_TO_NET(uParam0->f_18);
			func_46(uParam0->f_3, 0);
			func_7(uParam0, 5);
			func_36(uParam0, 1);
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1291734.f_11.f_515)) > 0)
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, &(Global_1291734.f_11.f_515), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(Global_1291734.f_11.f_515));
			}
			else if (iVar0 == func_33())
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_32(func_34())), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_32(func_34())));
			}
			else
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, "HORSE", true, false, "", 0);
			}
			if (func_6(uParam0, 1))
			{
				HUD::_SET_MP_GAMER_TAG_TOP_ICON(uParam0->f_5, -847116890);
			}
			else
			{
				HUD::_SET_MP_GAMER_TAG_TOP_ICON(uParam0->f_5, joaat("PLAYER_HORSE"));
			}
			HUD::_SET_MP_GAMER_TAG_COLOUR(uParam0->f_5, joaat("COLOR_FRIENDLY"));
			HUD::_SET_MP_GAMER_TAG_VISIBILITY(uParam0->f_5, uParam0->f_6);
			if (func_40(&(uParam1->f_7), uParam0->f_4, 0))
			{
				if (!func_47(&Global_1904087, &(uParam0->f_34)))
				{
				}
			}
			func_48();
			break;
		case 2:
			func_35(uParam0, iVar2, PLAYER::PLAYER_ID());
			func_7(uParam0, 6);
			func_36(uParam0, 2);
			iVar6 = NETWORK::_0xF260AF6F43953316(uParam0->f_3);
			break;
		case 3:
			func_7(uParam0, 21);
			func_7(uParam0, 6);
			func_36(uParam0, 3);
			iVar6 = NETWORK::_0xF260AF6F43953316(uParam0->f_3);
			break;
		default:
			func_7(uParam0, 0);
			break;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar6))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iVar6, PLAYER::PLAYER_ID(), true);
}

void func_9(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	char* sVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_49(uParam0);
		return;
	}
	func_50(uParam0);
	if (PLAYER::_GET_MOUNT_OF_PLAYER(iVar0) == uParam0->f_18)
	{
		func_7(uParam0, 7);
		if (!func_6(uParam0, 22))
		{
			func_51();
			if (!func_52())
			{
			}
			else
			{
				func_53(&(Global_1904087.f_113));
				Global_1904087.f_111 = 1;
				Global_1904087.f_112 = 0;
				Var2 = { func_54(0, 1, 0, -1) };
				TELEMETRY::_0xFF9052BC7A3B7D33(uParam0->f_18, joaat("CALL"), &Var2, 0);
				func_7(uParam0, 22);
			}
		}
		if (func_23(44))
		{
			func_42(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_55(2, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_42(uParam0, 8);
		}
		Global_1291106[iVar1 /*19*/].f_1 |= 1;
		if (func_6(uParam0, 20))
		{
			func_40(&(uParam1->f_7), 0, 0);
			sVar6 = func_56(func_41(&Global_1904087, 1));
			if (MISC::COMPARE_STRINGS(sVar6, &(Global_1291734.f_11.f_515), true, -1) > 0)
			{
				HUD::SET_MP_GAMER_TAG_NAME(uParam0->f_5, &(Global_1904087.f_12));
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(Global_1904087.f_12));
				Global_1291734.f_11.f_515 = { Global_1904087.f_12 };
				func_42(uParam0, 20);
			}
		}
		if (func_55(4096, 255))
		{
			func_20(4096);
			func_7(uParam0, 20);
		}
		func_57(uParam0);
		func_58(uParam0);
		func_59(uParam0, uParam1);
		func_60(uParam0, uParam0->f_18, 8192, 16384, func_23(91));
	}
	else
	{
		func_42(uParam0, 7);
		func_42(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_42(uParam0, 4);
		}
	}
	func_61(uParam0, uParam1);
	func_62(uParam0, uParam1);
	func_63(uParam0);
	func_64(uParam0);
	func_65(uParam0);
	func_66(uParam0);
	func_67(uParam0, iVar1);
	func_68(uParam0, iVar1);
	func_69(uParam0, iVar1);
	func_70(uParam0, uParam1, iVar1);
	func_71(uParam0, uParam1, iVar1);
	func_72(uParam0);
	func_73(uParam0);
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (uParam1->f_11 == Global_1291734.f_581.f_46)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_21);
		if (func_23(94))
		{
			BRAIN::_0xA6AC35DB4A7957A8(9999);
		}
		else
		{
			BRAIN::_0xA6AC35DB4A7957A8(250);
		}
		func_7(uParam0, 7);
		if (func_23(90))
		{
			func_42(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_74(8, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_42(uParam0, 8);
		}
		Global_1291106[iVar1 /*19*/].f_2 |= 1;
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_21) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_21))
		{
			VEHICLE::_0x226C6A4E3346D288(uParam0->f_21, func_23(96));
			VEHICLE::_0x6090A031C69F384E(uParam0->f_21, func_23(96));
		}
		func_60(uParam0, uParam0->f_21, 32768, 65536, func_23(91));
	}
	else
	{
		func_42(uParam0, 7);
		func_42(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_42(uParam0, 4);
		}
	}
	func_75(uParam0);
	func_35(uParam0, iVar0, PLAYER::PLAYER_ID());
	func_66(uParam0);
	func_70(uParam0, uParam1, iVar1);
	func_71(uParam0, uParam1, iVar1);
	func_76(uParam0);
}

void func_11(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (uParam1->f_11 == Global_1291734.f_581.f_46)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_21);
		func_7(uParam0, 7);
		if (func_23(90))
		{
			func_42(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_74(8, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_42(uParam0, 8);
		}
		Global_1291106[iVar0 /*19*/].f_2 |= 1;
		func_60(uParam0, uParam0->f_21, 32768, 65536, func_23(91));
	}
	else
	{
		func_42(uParam0, 7);
		func_42(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_42(uParam0, 4);
		}
	}
	func_66(uParam0);
	func_70(uParam0, uParam1, iVar0);
	func_71(uParam0, uParam1, iVar0);
	func_77(uParam0);
}

void func_12(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	iVar1 = iVar0;
	if (iVar0 != uParam0->f_20)
	{
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	switch (func_78(uParam0, 1))
	{
		case 1:
			return;
		case 2:
			func_7(uParam0, 0);
			return;
		default:
			break;
	}
	if (!Global_1071686.f_5)
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	if (uParam0->f_4 == 2)
	{
		func_35(uParam0, PLAYER::PLAYER_PED_ID(), iVar0);
	}
	func_67(uParam0, iVar1);
	if (uParam0->f_2 != 0)
	{
		return;
	}
	func_68(uParam0, iVar1);
	func_70(uParam0, uParam1, iVar1);
	func_71(uParam0, uParam1, iVar1);
	func_72(uParam0);
	if (!func_6(uParam0, 18))
	{
		if (uParam0->f_18 != PLAYER::_GET_MOUNT_OF_PLAYER(iVar0))
		{
			if (!func_27(&(uParam0->f_10)))
			{
				func_79(&(uParam0->f_10));
			}
			fVar2 = func_80(&(uParam0->f_10));
			if (fVar2 > 5f)
			{
				func_7(uParam0, 18);
			}
		}
		else if (func_27(&(uParam0->f_10)))
		{
			func_28(&(uParam0->f_10));
		}
	}
	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
			{
				uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (uParam0->f_18 == PLAYER::_GET_MOUNT_OF_PLAYER(iVar0))
			{
				func_64(uParam0);
				func_61(uParam0, uParam1);
				func_63(uParam0);
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
			{
				uParam0->f_21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (func_74(1, iVar1) && Global_1291106[iVar1 /*19*/].f_6 == uParam1->f_11)
			{
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			func_75(uParam0);
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
			{
				uParam0->f_21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (func_74(1, iVar1) && Global_1291106[iVar1 /*19*/].f_6 == uParam1->f_11)
			{
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
		default:
			func_7(uParam0, 0);
			break;
	}
}

void func_13(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -507840394:
				func_81(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
}

bool func_14(int iParam0, int iParam1, bool bParam2)
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

bool func_15(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_1291734.f_11.f_320, iVar1))
		{
			Global_1291734.f_11.f_322[iVar1 /*6*/].f_1 = iParam0;
			Global_1291734.f_11.f_322[iVar1 /*6*/].f_2 = uParam1;
			Global_1291734.f_11.f_322[iVar1 /*6*/] = bParam2;
			func_79(&(Global_1291734.f_11.f_322[iVar1 /*6*/].f_3));
			MISC::SET_BIT(&(Global_1291734.f_11.f_320), iVar1);
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_16()
{
	if (Global_1291734.f_1403.f_5 == 1)
	{
		return;
	}
	Global_1291734.f_1403.f_5 = 1;
}

void func_17(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (func_83(func_82(), 0, 0))
	{
		return;
	}
	if (!func_84(iParam0))
	{
		return;
	}
	bVar0 = TASK::IS_PED_IN_WRITHE(iParam0);
	bVar1 = PED::_0xB655DB7582AEC805(iParam0);
	if (!bVar0 && !bVar1)
	{
		return;
	}
	iVar2 = PLAYER::_0xAD03B03737CE6810(iParam0);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		return;
	}
	if (iVar2 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (func_23(8))
	{
		return;
	}
	func_85(iParam0, 0, 0);
	if (!func_40(uParam1, 0, 0))
	{
		return;
	}
	func_86(&Global_1904087, 0, 1);
	func_87();
	iVar3 = func_88(uParam1, joaat("SLOTID_HORSE_INSURANCE"), 0);
	bVar4 = iVar3 > 0;
	if (bVar4)
	{
		func_89(18, 0);
		func_90(*uParam1, 0, 0);
	}
	else
	{
		func_89(17, 0);
	}
}

void func_18()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_MOUNT_OF_PLAYER(iVar0)))
	{
		return;
	}
	PLAYER::_0xE6D4E435B56D5BD0(iVar0, 0);
}

void func_19(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1291734.f_11.f_157))
	{
		Global_1291734.f_11.f_158 = Global_1291734.f_11.f_157;
	}
	Global_1291734.f_11.f_157 = iParam0;
	Global_1291734.f_11.f_159 = Global_1296859.f_21 + 35;
}

void func_20(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1291106[iVar0 /*19*/].f_1 = (Global_1291106[iVar0 /*19*/].f_1 - (Global_1291106[iVar0 /*19*/].f_1 && iParam0));
}

void func_21(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (func_91(Global_1291106[iVar1 /*19*/].f_4, 1) != bParam0)
	{
		if (bParam0)
		{
			func_92(&(Global_1291106[iVar1 /*19*/].f_4), 1);
		}
		else
		{
			func_93(&(Global_1291106[iVar1 /*19*/].f_4), 1);
		}
		func_93(&(Global_1291106[iVar1 /*19*/].f_4), 2);
		if (bParam0)
		{
			func_79(&(Global_1291734.f_11.f_556));
		}
		else
		{
			func_28(&(Global_1291734.f_11.f_556));
		}
	}
}

void func_22(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (!func_91(Global_1291106[iVar1 /*19*/].f_4, 1))
	{
		return;
	}
	if (func_91(Global_1291106[iVar1 /*19*/].f_4, 2) != bParam0)
	{
		if (bParam0)
		{
			func_92(&(Global_1291106[iVar1 /*19*/].f_4), 2);
		}
		else
		{
			func_93(&(Global_1291106[iVar1 /*19*/].f_4), 2);
		}
	}
}

bool func_23(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_1904087.f_496[iVar0], iVar1);
}

void func_24(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1291106[iVar0 /*19*/].f_2 = (Global_1291106[iVar0 /*19*/].f_2 - (Global_1291106[iVar0 /*19*/].f_2 && iParam0));
}

void func_25(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<2> Var12;

	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar3 = func_94(iVar2);
		if (PED::_0x608BC6A6AACD5036(&Var4, uParam0->f_18, iVar3, 0))
		{
			if (func_6(uParam0, 2))
			{
				if (func_95(Var4.f_3, iVar3))
				{
					func_96(iVar2);
					MISC::SET_BIT(&iVar1, iVar2);
				}
			}
			func_97(Var4.f_3, iVar2, bParam1);
		}
		else if (func_6(uParam0, 2))
		{
			if (func_98(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1291734.f_938.f_245[iVar2 /*4*/].f_3))
				{
					func_97(Global_1291734.f_938.f_245[iVar2 /*4*/].f_3, iVar2, bParam1);
				}
				func_96(iVar2);
			}
			MISC::SET_BIT(&iVar1, iVar2);
		}
		iVar2++;
	}
	if (func_6(uParam0, 2))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8))
			{
			}
			else
			{
				iVar9 = PLAYER::GET_PLAYER_PED(iVar8);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
				{
				}
				else
				{
					iVar11 = PED::_0x4642182A298187D0(iVar9, 7, &Var12, 4, 1);
					if (iVar11 != 0)
					{
						if (!ENTITY::IS_ENTITY_A_PED(Var12.f_1))
						{
						}
						else if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var12.f_1) != uParam0->f_18)
						{
						}
						else if (!PED::_0xB36B0C7152B15278(iVar9, &iVar10))
						{
						}
						else
						{
							iVar2 = func_99(iVar10);
							if (MISC::IS_BIT_SET(iVar1, iVar2))
							{
							}
							else
							{
								func_96(iVar2);
								MISC::SET_BIT(&iVar1, iVar2);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_26(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_27(var uParam0)
{
	return func_100(*uParam0, 1);
}

void func_28(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;

	func_101();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		Global_1904087.f_106.f_1 = 0;
		Global_1904087.f_106.f_2 = -571823039;
		Global_1904087.f_106.f_3 = func_102(iVar1);
		Global_1904087.f_106.f_4 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Global_1904087.f_106.f_1), &(Global_1904087.f_106)))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

char* func_30()
{
	return "UNNAMED_HORSE";
}

int func_31(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("BREED_APPALOOSA_BLANKET");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("BREED_SHIRE_DARKBAY");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("BREED_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("BREED_TURKOMAN_GOLD");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("BREED_TURKOMAN_SILVER");
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return joaat("BREED_BRETON_REDROAN");
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return joaat("BREED_BRETON_SORREL");
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return joaat("BREED_BRETON_GRULLODUN");
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return joaat("BREED_BRETON_SEALBROWN");
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return joaat("BREED_BRETON_MEALYDAPPLEBAY");
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return joaat("BREED_BRETON_STEELGREY");
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return joaat("BREED_CRIOLLO_BLUEROANOVERO");
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return joaat("BREED_CRIOLLO_DUN");
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return joaat("BREED_CRIOLLO_BAYBRINDLE");
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return joaat("BREED_CRIOLLO_SORRELOVERO");
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return joaat("BREED_CRIOLLO_BAYFRAMEOVERO");
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return joaat("BREED_CRIOLLO_MARBLESABINO");
		case joaat("A_C_HORSE_GYPSYCOB_PIEBALD"):
			return joaat("BREED_GYPSYCOB_PIEBALD");
		case joaat("A_C_HORSE_GYPSYCOB_WHITEBLAGDON"):
			return joaat("BREED_GYPSYCOB_WHITEBLAGDON");
		case joaat("A_C_HORSE_GYPSYCOB_PALOMINOBLAGDON"):
			return joaat("BREED_GYPSYCOB_PALOMINOBLAGDON");
		case joaat("A_C_HORSE_GYPSYCOB_SKEWBALD"):
			return joaat("BREED_GYPSYCOB_SKEWBALD");
		case joaat("A_C_HORSE_GYPSYCOB_SPLASHEDBAY"):
			return joaat("BREED_GYPSYCOB_SPLASHEDBAY");
		case joaat("A_C_HORSE_GYPSYCOB_SPLASHEDPIEBALD"):
			return joaat("BREED_GYPSYCOB_SPLASHEDPIEBALD");
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return joaat("BREED_KLADRUBER_BLACK");
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return joaat("BREED_KLADRUBER_WHITE");
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return joaat("BREED_KLADRUBER_CREMELLO");
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return joaat("BREED_KLADRUBER_GREY");
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return joaat("BREED_KLADRUBER_DAPPLEROSEGREY");
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return joaat("BREED_KLADRUBER_SILVER");
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return joaat("BREED_NORFOLKROADSTER_BLACK");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY");
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("BREED_NORFOLKROADSTER_PIEBALDROAN");
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return joaat("BREED_NORFOLKROADSTER_ROSEGREY");
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR");
		case joaat("A_C_DONKEY_01"):
			return joaat("BREED_DONKEY");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("BREED_MULE");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("BREED_MULE_PAINTED");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("BREED_MURFREEBROOD_MANGE_01");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("BREED_MURFREEBROOD_MANGE_02");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("BREED_MURFREEBROOD_MANGE_03");
		default:
			break;
	}
	return 0;
}

char* func_32(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN";
		case joaat("BREED_APPALOOSA_BLANKET"):
		case joaat("BREED_APPALOOSA_LEOPARD"):
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA";
		case joaat("BREED_ARABIAN_BLACK"):
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
		case joaat("BREED_ARABIAN_GREY"):
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_MORGAN_PALOMINO"):
		case joaat("BREED_MORGAN_BAYROAN"):
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN";
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
		case joaat("BREED_NOKOTA_WHITEROAN"):
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA";
		case joaat("BREED_SHIRE_LIGHTGREY"):
		case joaat("BREED_SHIRE_RAVENBLACK"):
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN";
		case joaat("BREED_BRETON_STEELGREY"):
		case joaat("BREED_BRETON_REDROAN"):
		case joaat("BREED_BRETON_SEALBROWN"):
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
		case joaat("BREED_BRETON_GRULLODUN"):
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
		case joaat("BREED_CRIOLLO_DUN"):
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO";
		case joaat("BREED_GYPSYCOB_SPLASHEDPIEBALD"):
		case joaat("BREED_GYPSYCOB_PALOMINOBLAGDON"):
		case joaat("BREED_GYPSYCOB_PIEBALD"):
		case joaat("BREED_GYPSYCOB_WHITEBLAGDON"):
		case joaat("BREED_GYPSYCOB_SKEWBALD"):
		case joaat("BREED_GYPSYCOB_SPLASHEDBAY"):
			return "BREED_GYPSYCOB";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
		case joaat("BREED_KLADRUBER_WHITE"):
		case joaat("BREED_KLADRUBER_SILVER"):
		case joaat("BREED_KLADRUBER_CREMELLO"):
		case joaat("BREED_KLADRUBER_GREY"):
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE_PAINTED"):
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_NOKOTA";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_APPALOOSA";
		case joaat("BREED_WINTER02_01"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_BILL"):
			return "BREED_ARDENNES";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_ARABIAN";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_APPALOOSA";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

int func_33()
{
	return joaat("A_C_HORSE_MP_MANGY_BACKUP");
}

int func_34()
{
	return joaat("BREED_MANGY_BACKUP");
}

void func_35(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	while (iVar0 < uParam0->f_27)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22[iVar0]))
		{
		}
		else
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_22[iVar0], PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		iVar0++;
	}
	if (func_6(uParam0, 21))
	{
		return;
	}
	uParam0->f_21 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	if (!VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_21))
	{
		uParam0->f_32++;
		return;
	}
	VEHICLE::_0xA19447D83294E29F(uParam0->f_21, &iVar4, &iVar3);
	if (iVar4 == 0)
	{
		if (iVar3 == 0)
		{
			uParam0->f_32++;
			if (uParam0->f_32 > 90)
			{
				func_7(uParam0, 0);
			}
			return;
		}
	}
	if (iVar3 >= iVar4)
	{
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_21, iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
			}
			else
			{
				if (iVar2 >= 4)
				{
				}
				else
				{
					uParam0->f_22[iVar2] = iVar5;
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_22[iVar2]) || !ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_22[iVar2]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_22[iVar2], true, true);
					}
					PED::_0x931B241409216C1F(PLAYER::GET_PLAYER_PED(iParam2), uParam0->f_22[iVar2], 0);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_22[iVar2], 208, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_22[iVar2], 209, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_22[iVar2], 277, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_22[iVar2], 467, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_22[iVar2], PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
					iVar2++;
					iVar1++;
				}
				Jump @424; //curOff = 392
				uParam0->f_32++;
				if (uParam0->f_32 > 90)
				{
					func_7(uParam0, 0);
				}
				return;
				uParam0->f_27 = iVar2;
				func_7(uParam0, 21);
			}
		}
	}
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_37(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17411.f_55.f_61.f_41[*uParam1 /*54*/]), uParam0))
		{
		}
		else
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

bool func_38(var uParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	Var0 = { func_103() };
	if (INVENTORY::_0x4C543D5DFCD2DAFD(uParam0, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17411.f_55.f_61.f_41[iVar19 /*54*/]), uParam0))
		{
			bVar18 = true;
		}
		else if (INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_17411.f_55.f_61.f_41[iVar19 /*54*/]), &Var0))
		{
			func_104(&(Global_17411.f_55.f_61.f_41[iVar19 /*54*/]));
			Global_17411.f_55.f_61.f_41[iVar19 /*54*/] = { *uParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_105(Global_17411.f_55.f_61.f_41[iVar19 /*54*/], &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_104(&(Global_17411.f_55.f_61.f_41[iVar19 /*54*/]));
				Global_17411.f_55.f_61.f_41[iVar19 /*54*/] = { *uParam0 };
				bVar18 = true;
			}
			else
			{
				iVar19++;
			}
		}
	}
	if (!bVar18)
	{
		return false;
	}
	return true;
}

void func_39(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_106();
	}
	if (bParam0)
	{
		func_107(8);
		func_107(512);
	}
	else
	{
		func_107(8);
		func_107(16);
	}
}

bool func_40(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_108(&Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_109(uParam0, &Global_1904087, &(Global_1904087.f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_110(uParam0, &Global_1904087, &(Global_1904087.f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

struct<8> func_41(var uParam0, bool bParam1)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	char* sVar17;

	Var0 = { uParam0->f_12 };
	if (bParam1)
	{
		if (func_111(uParam0, &Var8))
		{
			Var0 = { Var8 };
		}
	}
	if (MISC::COMPARE_STRINGS(&Var0, func_30(), false, -1) == 0)
	{
		StringCopy(&Var0, MISC::_CREATE_VAR_STRING(2, func_32(uParam0->f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var0) == 0)
	{
		if (uParam0->f_22 != 0)
		{
			StringCopy(&Var0, MISC::_CREATE_VAR_STRING(2, func_112(uParam0->f_22)), 64);
		}
		else
		{
			StringCopy(&Var0, "", 64);
		}
	}
	if (func_113(uParam0->f_4, 0))
	{
		iVar16 = func_114(uParam0->f_4);
		if (STREAMING::IS_MODEL_VALID(iVar16) && STREAMING::IS_MODEL_A_VEHICLE(iVar16))
		{
			sVar17 = MISC::_CREATE_VAR_STRING(0, func_115(uParam0->f_4));
			Var0 = { func_116(sVar17) };
		}
	}
	return Var0;
}

void func_42(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_1, iParam1))
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), iParam1);
}

int func_43(int iParam0)
{
	var uVar0;
	var uVar1;

	if (iParam0 == -1)
	{
		return 0;
	}
	func_101();
	Global_1904087.f_106.f_2 = 116835447;
	Global_1904087.f_106.f_3 = func_102(iParam0);
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, &(Global_1904087.f_106)))
	{
		return joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	uVar1 = uVar0;
	return uVar1;
}

void func_44(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

int func_45(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

void func_46(int iParam0, int iParam1)
{
	func_117(iParam0, iParam1);
}

bool func_47(var uParam0, var uParam1)
{
	if (func_118(uParam0, -2147483648))
	{
		*uParam1 = 4;
	}
	else if (func_118(uParam0, 1073741824 /* Float: 2f */))
	{
		*uParam1 = 3;
	}
	else if (func_118(uParam0, 536870912))
	{
		*uParam1 = 2;
	}
	else if (func_118(uParam0, 268435456))
	{
		*uParam1 = 1;
	}
	else if (func_118(uParam0, 134217728))
	{
		*uParam1 = 0;
	}
	else
	{
		return false;
	}
	return true;
}

int func_48()
{
	int iVar0;

	iVar0 = 0;
	if (Global_17411.f_55.f_61.f_582 & 2 != 0)
	{
		iVar0 = 2;
	}
	if (Global_17411.f_55.f_61.f_582 & 4 != 0)
	{
		iVar0 = 3;
	}
	if (Global_17411.f_55.f_61.f_582 & 8 != 0)
	{
		iVar0 = 4;
	}
	if (Global_17411.f_55.f_61.f_582 & 16 != 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_49(var uParam0)
{
	if (!func_6(uParam0, 24) && !func_6(uParam0, 25))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 24);
		func_119();
	}
}

void func_50(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_18, false);
		}
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (iVar0 == iVar1 && func_6(uParam0, 2))
	{
		if (!func_6(uParam0, 23))
		{
			if (UNLOCK::_UNLOCK_IS_UNLOCKED(1988458112))
			{
				ENTITY::IS_ENTITY_DEAD(iVar1);
				PED::SET_PED_CONFIG_FLAG(iVar1, 561, true);
				func_7(uParam0, 23);
			}
		}
	}
	else if (func_6(uParam0, 23))
	{
		ENTITY::IS_ENTITY_DEAD(iVar1);
		PED::SET_PED_CONFIG_FLAG(iVar1, 561, false);
		func_42(uParam0, 23);
	}
}

void func_51()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = Global_1904087.f_113[iVar1 /*96*/];
		if (!STREAMING::IS_MODEL_VALID(iVar0))
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
		}
		iVar1++;
	}
}

bool func_52()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = Global_1904087.f_113[iVar1 /*96*/];
		if (!STREAMING::IS_MODEL_VALID(iVar0))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_53(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_120(iVar0, uParam0[iVar1 /*96*/], iVar1);
		iVar1++;
	}
}

struct<4> func_54(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	int iVar34;
	struct<4> Var35;

	Var0.f_9 = -1591664384;
	if (!func_121(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_122() };
		if (func_123() && INVENTORY::_0xB881CA836CC4B6D4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var29, &Var0))
		{
			func_124(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_125(PLAYER::PLAYER_ID());
	}
	bVar33 = func_126(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_127(iParam3, 0);
	if (iVar34 != 3)
	{
		if (INVENTORY::_0xB881CA836CC4B6D4(&(Global_17411.f_55.f_61[iVar34 /*4*/])))
		{
			Var0 = { Global_17411.f_55.f_61[iVar34 /*4*/] };
		}
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		if (!bParam1)
		{
			return func_103();
		}
		if (!func_128(&Var0, 0))
		{
			Var35 = { func_129(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

bool func_55(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1291106[iParam1 /*19*/].f_1 && iParam0) != 0;
}

var func_56(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_57(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	iVar2 = PED::_0xF103823FFE72BB49(uParam0->f_18);
	if (iVar2 == iVar1)
	{
		return;
	}
	PED::_0x931B241409216C1F(iVar1, uParam0->f_18, 0);
}

void func_58(var uParam0)
{
	if (!func_6(uParam0, 5) || !func_6(uParam0, 7))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (!func_6(uParam0, 28))
	{
		if (func_130(0))
		{
			if (BUILTIN::VDIST(func_131(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) > 2.7f)
			{
				func_132(512);
				func_7(uParam0, 28);
			}
		}
	}
	else if (!func_130(0))
	{
		if (BUILTIN::VDIST(func_131(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) <= 2.7f)
		{
			func_42(uParam0, 28);
		}
	}
}

void func_59(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (uParam0->f_4)
	{
		case 0:
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
			{
				iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(uParam0->f_18, 13);
				if (iVar0 < 10)
				{
					iVar1 = 0;
				}
				else if (iVar0 < 30)
				{
					iVar1 = 1;
				}
				else if (iVar0 < 70)
				{
					iVar1 = 2;
				}
				else if (iVar0 < 90)
				{
					iVar1 = 3;
				}
				else
				{
					iVar1 = 4;
				}
				if (iVar1 != uParam0->f_34)
				{
					if (func_133(&(uParam1->f_7), uParam0->f_4, iVar1, 0))
					{
						uParam0->f_34 = iVar1;
					}
				}
			}
			break;
	}
}

void func_60(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_5))
	{
		return;
	}
	iVar0 = func_134(&(uParam0->f_5), iParam1);
	iVar0 = iVar0;
	bVar1 = func_135(iParam2);
	bVar2 = func_135(iParam3);
	iVar3 = 0;
	if (bParam4)
	{
		iVar3 = 0;
	}
	else if (AITRANSPORT::_0x159EF5B6EDCE00E8(PLAYER::PLAYER_PED_ID(), iParam1))
	{
		iVar3 = 0;
	}
	else if (bVar1 || bVar2)
	{
		bVar4 = func_136(uParam0);
		if (bVar4)
		{
			iVar3 = func_137(iParam1, 0, &(uParam0->f_14), -1, -1, 1277358601, 1, 1);
		}
		else
		{
			iVar3 = uParam0->f_33;
		}
	}
	uParam0->f_33 = iVar3;
	if (uParam0->f_6 != iVar3)
	{
		HUD::_SET_MP_GAMER_TAG_VISIBILITY(uParam0->f_5, iVar3);
		uParam0->f_6 = iVar3;
	}
}

void func_61(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (((PLAYER::IS_PLAYER_DEAD(uParam0->f_20) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_19)) || ENTITY::IS_ENTITY_DEAD(uParam0->f_19)) || func_6(uParam0, 29));
	bVar1 = func_138(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1), 1, 0);
	if (bVar1 || bVar0)
	{
		if (bVar0)
		{
			if (func_6(uParam0, 29))
			{
				func_42(uParam0, 29);
			}
			if (func_6(uParam0, 2))
			{
				if (func_139(uParam0->f_20, 1, 0))
				{
					func_22(0, 1);
				}
				if (func_27(&(Global_1291734.f_11.f_556)))
				{
					func_28(&(Global_1291734.f_11.f_556));
				}
			}
		}
		else
		{
			if (func_6(uParam0, 2))
			{
				if (!func_27(&(Global_1291734.f_11.f_556)))
				{
					func_79(&(Global_1291734.f_11.f_556));
				}
			}
			if (!func_139(uParam0->f_20, 1, 0))
			{
				if (func_140(uParam0))
				{
					if (func_6(uParam0, 2))
					{
						func_22(1, 1);
					}
				}
			}
			else
			{
				func_140(uParam0);
			}
		}
	}
	else
	{
		if (func_6(uParam0, 2))
		{
			if (func_27(&(Global_1291734.f_11.f_556)))
			{
				func_28(&(Global_1291734.f_11.f_556));
			}
			if (!func_138(PLAYER::PLAYER_ID(), 1, 0))
			{
				func_22(0, 1);
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
		{
			if (ENTITY::_0x808077647856DE62(uParam0->f_18, 34))
			{
				ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, 0);
			}
		}
		if (func_6(uParam0, 30))
		{
			func_141(uParam0);
			func_42(uParam0, 30);
		}
	}
}

void func_62(var uParam0, var uParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	iVar0 = uParam0->f_20;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		return;
	}
	if (func_91(Global_1291106[iVar0 /*19*/].f_4, 4))
	{
		if (!func_6(uParam0, 31))
		{
			POPULATION::_0xF74E134F40192884(uParam0->f_18, 1);
			func_7(uParam0, 31);
		}
	}
	else if (func_6(uParam0, 31))
	{
		POPULATION::_0xF74E134F40192884(uParam0->f_18, 0);
		func_42(uParam0, 31);
	}
}

void func_63(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;

	iVar4 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar4))
	{
		iVar4 = uParam0->f_20;
	}
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar6 = iVar4;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar4))
	{
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1291106[iVar5 /*19*/].f_14), iVar6))
		{
			SCRIPTS::_0xD426E2E3288469D6(&(Global_1291106[iVar5 /*19*/].f_14), iVar6);
		}
	}
	else
	{
		iVar7 = PED::_0x4642182A298187D0(PLAYER::PLAYER_PED_ID(), 5, &uVar0, 4, 2);
		if (iVar7 == 0)
		{
			iVar7 = PED::_0x4642182A298187D0(PLAYER::PLAYER_PED_ID(), 7, &uVar0, 4, 2);
		}
		if (iVar7 != 0)
		{
			if (func_142(uParam0, &uVar0))
			{
				if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1291106[iVar5 /*19*/].f_14), iVar6))
				{
					SCRIPTS::_0x31010318BA9897AC(&(Global_1291106[iVar5 /*19*/].f_14), iVar6);
				}
			}
			else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1291106[iVar5 /*19*/].f_14), iVar6))
			{
				SCRIPTS::_0xD426E2E3288469D6(&(Global_1291106[iVar5 /*19*/].f_14), iVar6);
			}
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1291106[iVar5 /*19*/].f_14), iVar6))
		{
			SCRIPTS::_0xD426E2E3288469D6(&(Global_1291106[iVar5 /*19*/].f_14), iVar6);
		}
	}
	if (func_6(uParam0, 2))
	{
		bVar9 = false;
		iVar8 = 0;
		while (iVar8 < 32)
		{
			if (!bVar9)
			{
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1291106[iVar8 /*19*/].f_14), iVar5))
				{
					bVar9 = true;
				}
			}
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1291106[iVar5 /*19*/].f_14), iVar8))
			{
				if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(PLAYER::INT_TO_PLAYERINDEX(iVar8)))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(Global_1291106[iVar5 /*19*/].f_14), iVar6);
				}
			}
			iVar8++;
		}
		if (bVar9)
		{
			if (!func_91(Global_1291106[iVar5 /*19*/].f_1, 65536))
			{
				func_92(&(Global_1291106[iVar5 /*19*/].f_1), 65536);
			}
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 33, 2, 1);
		}
		else
		{
			if (func_91(Global_1291106[iVar5 /*19*/].f_1, 65536))
			{
				func_93(&(Global_1291106[iVar5 /*19*/].f_1), 65536);
			}
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 33, 2, 0);
		}
	}
}

void func_64(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (func_143(uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
		{
			return;
		}
		PED::_0x11E6B9629C46D6EC(uParam0->f_18, true);
	}
	else
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
		{
			return;
		}
		PED::_0x11E6B9629C46D6EC(uParam0->f_18, false);
	}
}

void func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_18);
	if (iVar2 == iVar1)
	{
		return;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_18, iVar1);
}

void func_66(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_3) || !func_6(uParam0, 4))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_16));
		}
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_16));
		}
		return;
	}
	iVar0 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_16));
			}
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_16))
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_WHISTLE")))
		{
			uParam0->f_13 = Global_1296859.f_21 + 15;
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, -272772079);
			MAP::_BLIP_SET_MODIFIER(uParam0->f_16, -272772079);
		}
		if (Global_1296859.f_21 > uParam0->f_13)
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, -272772079);
		}
		else
		{
			MAP::_BLIP_SET_MODIFIER(uParam0->f_16, -272772079);
		}
		bVar1 = TASK::IS_PED_IN_WRITHE(uParam0->f_18);
		bVar2 = PED::_0xB655DB7582AEC805(uParam0->f_18);
		if (bVar1 || bVar2)
		{
			MAP::_BLIP_SET_MODIFIER(uParam0->f_16, 430539302);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, 430539302);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, 453356795);
			return;
		}
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, 453356795);
			return;
		}
		iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, 453356795);
			return;
		}
		if (func_144(iVar3, 0))
		{
			MAP::_BLIP_SET_MODIFIER(uParam0->f_16, 453356795);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_16, 453356795);
		}
		return;
	}
	if (MAP::_DOES_ENTITY_HAVE_BLIP(uParam0->f_3))
	{
		return;
	}
	uParam0->f_16 = MAP::_BLIP_ADD_FOR_ENTITY(uParam0->f_17, uParam0->f_3);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1291734.f_11.f_515)))
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(uParam0->f_16, &(Global_1291734.f_11.f_515));
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_16, func_145(uParam0->f_4));
	}
	MAP::_BLIP_SET_MODIFIER(uParam0->f_16, 580546400);
}

void func_67(var uParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	bVar0 = !func_55(8192, iParam1);
	if (bVar0)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 197, bVar0);
	}
	if (func_55(2048, iParam1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 306, true);
	}
	if (func_55(512, iParam1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 360, true);
	}
}

void func_68(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		func_42(uParam0, 26);
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	if (func_146(255) == 1)
	{
		bVar0 = ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uParam0->f_18);
		bVar1 = func_6(uParam0, 15);
		if (func_55(8, iParam1))
		{
			if (!bVar1 || bVar0)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_18, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_18, false);
				func_7(uParam0, 15);
			}
		}
		else if (bVar1 || !bVar0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_18, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_18, true);
			func_42(uParam0, 15);
		}
	}
	else
	{
		func_42(uParam0, 15);
	}
	if (func_146(255) == 1)
	{
		if (func_55(16384, iParam1))
		{
			if (!func_6(uParam0, 16))
			{
				NETWORK::_0xE1BC73D6815BA361(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 1, 256);
				func_7(uParam0, 16);
			}
			NETWORK::_0x7182EDDA1EE7DB5A(NETWORK::_0xF260AF6F43953316(uParam0->f_3));
		}
		else if (func_6(uParam0, 16))
		{
			NETWORK::_0xE1BC73D6815BA361(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 0, 256);
			func_42(uParam0, 16);
		}
	}
	else
	{
		func_42(uParam0, 16);
	}
	if (func_55(16, iParam1))
	{
		if (!func_6(uParam0, 17))
		{
			func_7(uParam0, 17);
		}
	}
	else if (func_6(uParam0, 17))
	{
		func_42(uParam0, 17);
	}
	bVar2 = func_55(262144, iParam1);
	if (!func_6(uParam0, 26) || func_6(uParam0, 27) != bVar2)
	{
		iVar3 = NETWORK::PED_TO_NET(uParam0->f_18);
		iVar4 = 0;
		while (iVar4 <= 31)
		{
			iVar5 = iVar4;
			if (iVar5 == uParam0->f_20)
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
			{
			}
			else
			{
				NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iVar3, iVar5, bVar2);
			}
			iVar4++;
		}
		func_7(uParam0, 26);
		if (bVar2)
		{
			func_7(uParam0, 27);
		}
		else
		{
			func_42(uParam0, 27);
		}
	}
	bVar6 = func_55(64, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 388, true) != bVar6)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 388, bVar6);
	}
	bVar7 = !func_55(32, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 319, true) != bVar7)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 319, bVar7);
	}
	bVar8 = func_55(256, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 312, true) != bVar8)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 312, bVar8);
	}
	bVar9 = !func_55(128, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 211, true) != bVar9)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 211, bVar9);
	}
	bVar10 = func_55(1024, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 412, true) != bVar10)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 412, bVar10);
	}
}

void func_69(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (func_23(65))
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 33, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 33, 1, 1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 26, true);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 33, 1))
	{
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 33, 1, 0);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 26, false);
	}
	if (func_23(62))
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 45, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 45, 1, 1);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 45, 1))
	{
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 45, 1, 0);
	}
	if (func_23(63))
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 46, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 46, 1, 1);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 46, 1))
	{
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 46, 1, 0);
	}
	if (func_23(64))
	{
		if (!PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 28, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 28, 1, 1);
		}
	}
	else if (PLAYER::_0xEA8F168A76A0B9BC(iVar0, uParam0->f_18, 28, 1))
	{
		PLAYER::_0xA3DB37EDF9A74635(iVar0, uParam0->f_18, 28, 1, 0);
	}
}

void func_70(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(uParam0->f_3);
	if (bVar0)
	{
		if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
		{
			return;
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, false, false))
	{
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	iVar2 = 0;
	if (func_147(iVar1))
	{
		iVar2 = 1;
	}
	AITRANSPORT::_0xBA8818212633500A(uParam0->f_3, 0, iVar2);
	iVar4 = 0;
	AITRANSPORT::_0xE195C5A82156321D(uParam0->f_3, &uVar3);
	if (Global_1291106[iParam2 /*19*/] & 1 != 0)
	{
		if (!func_148(uVar3, 1))
		{
			iVar4 = 1;
		}
		if (Global_1291106[iParam2 /*19*/] & 32 != 0)
		{
			if (!func_148(uVar3, 32))
			{
				iVar4 |= 32;
			}
		}
	}
	else
	{
		if (Global_1291106[iParam2 /*19*/] & 2 != 0)
		{
			if (!func_148(uVar3, 2))
			{
				iVar4 |= 2;
			}
		}
		if (Global_1291106[iParam2 /*19*/] & 4 != 0)
		{
			if (!func_148(uVar3, 4))
			{
				iVar4 |= 4;
			}
		}
		if (Global_1291106[iParam2 /*19*/] & 8 != 0)
		{
			if (!func_148(uVar3, 8))
			{
				iVar4 |= 8;
			}
		}
		if (Global_1291106[iParam2 /*19*/] & 64 != 0)
		{
			if (!func_148(uVar3, 64))
			{
				iVar4 |= 64;
			}
		}
		if (Global_1291106[iParam2 /*19*/] & 128 != 0)
		{
			if (!func_148(uVar3, 128))
			{
				iVar4 |= 128;
			}
		}
		if (Global_1291106[iParam2 /*19*/] & 256 != 0)
		{
			if (!func_148(uVar3, 256))
			{
				iVar4 |= 256;
			}
		}
		if (Global_1291106[iParam2 /*19*/] & 16 != 0)
		{
			if (!func_148(uVar3, 16))
			{
				iVar4 = 16;
			}
		}
		if (Global_1291106[iParam2 /*19*/] & 512 != 0)
		{
			if (!func_148(uVar3, 512))
			{
				iVar4 |= 512;
			}
		}
		if (func_148(uVar3, 1024))
		{
			if (!func_148(uVar3, 1024))
			{
				iVar4 |= 1024;
			}
		}
	}
	if (iVar4 != 0)
	{
		AITRANSPORT::_0xE2487779957FE897(uParam0->f_3, iVar4);
	}
}

void func_71(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_149(uParam0, uParam1, iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_3))
	{
		if (AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, -1) == PLAYER::PLAYER_PED_ID())
		{
			func_150(uParam0->f_18);
		}
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		if (uParam0->f_15 >= Global_1296859.f_21)
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
		{
			return;
		}
		iVar0 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_18, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			return;
		}
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			return;
		}
		iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
		if (func_147(iVar2))
		{
			func_89(15, 1);
		}
		else if (Global_1291106[iParam2 /*19*/] & 16 != 0 || Global_1291105 & 32 != 0)
		{
			func_89(16, 1);
		}
		else
		{
			func_89(14, 1);
		}
		TASK::TASK_HORSE_ACTION(uParam0->f_18, 10, 0, 0);
		uParam0->f_15 = Global_1296859.f_21 + 3;
	}
}

void func_72(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_20))
	{
		return;
	}
	iVar0 = uParam0->f_20;
	bVar1 = func_6(uParam0, 2);
	if (bVar1)
	{
		if (!Global_1904087.f_111)
		{
			return;
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			iVar3 = PED::_0x0CEEB6F4780B1F2F(uParam0->f_18, iVar2);
			if (iVar3 != Global_1291106[iVar0 /*19*/].f_15[iVar2])
			{
				Global_1291106[iVar0 /*19*/].f_15[iVar2] = iVar3;
			}
			iVar2++;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		return;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar4 = PED::_0x0CEEB6F4780B1F2F(uParam0->f_18, iVar2);
		if (iVar4 == Global_1291106[iVar0 /*19*/].f_15[iVar2])
		{
		}
		else if (Global_1291106[iVar0 /*19*/].f_15[iVar2] == 0)
		{
			PED::_0x627F7F3A0C4C51FF(uParam0->f_18, iVar4);
		}
		else if (iVar4 == 0)
		{
			PED::_0xA73F50E8796150D5(uParam0->f_18, Global_1291106[iVar0 /*19*/].f_15[iVar2]);
		}
		else
		{
			PED::_0xA73F50E8796150D5(uParam0->f_18, Global_1291106[iVar0 /*19*/].f_15[iVar2]);
		}
		iVar2++;
	}
}

void func_73(var uParam0)
{
	float fVar0;
	int iVar1;

	if (func_6(uParam0, 11))
	{
		Global_1904087.f_111 = 0;
		Global_1904087.f_112 = 0;
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 0))
	{
		return;
	}
	switch (func_78(uParam0, 0))
	{
		case 1:
			return;
		case 2:
			func_49(uParam0);
			return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		if (!func_27(&(uParam0->f_7)))
		{
			func_79(&(uParam0->f_7));
		}
		fVar0 = func_80(&(uParam0->f_7));
		if (fVar0 > 4f)
		{
			func_28(&(uParam0->f_7));
			func_7(uParam0, 12);
		}
		return;
	}
	if (func_6(uParam0, 8))
	{
		return;
	}
	else if (func_6(uParam0, 7))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
			if (iVar1 > -1 && iVar1 < 32)
			{
				if (func_55(4, iVar1))
				{
					func_7(uParam0, 8);
					return;
				}
			}
		}
	}
	if (func_6(uParam0, 7))
	{
		if (func_151())
		{
		}
		else
		{
			if (func_23(46))
			{
				return;
			}
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) < 250f)
			{
				return;
			}
		}
	}
	func_152(uParam0);
}

bool func_74(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1291106[iParam1 /*19*/].f_2 && iParam0) != 0;
}

void func_75(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	bool bVar6;
	bool bVar7;

	if (!func_6(uParam0, 19))
	{
		return;
	}
	iVar0 = PLAYER::_0x7C803BDC8343228D(uParam0->f_21);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_42(uParam0, 19);
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PED::IS_PED_ON_VEHICLE(iVar1, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(iVar1, true) == uParam0->f_21)
		{
			func_42(uParam0, 19);
			return;
		}
	}
	PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(func_131(iVar0), &vVar2, &uVar5, 1, 3f, 0);
	bVar6 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3);
	bVar7 = ENTITY::IS_ENTITY_DEAD(uParam0->f_21);
	if (func_153(iVar1, uParam0->f_21, 1, 1) < 12f)
	{
		func_42(uParam0, 19);
	}
	if (!bVar6)
	{
		return;
	}
	if (bVar7)
	{
		return;
	}
	if (TASK::_0x583AE9AF9CEE0958(uParam0->f_21, vVar2))
	{
		return;
	}
	if (!func_6(uParam0, 19))
	{
		TASK::_0x141BC64C8D7C5529(uParam0->f_21);
		return;
	}
	TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_21, vVar2, 6f, 1078722947, 2, 8f, 3f);
}

void func_76(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_6(uParam0, 10))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_23(94))
	{
		return;
	}
	if (func_6(uParam0, 8))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_21))
	{
		return;
	}
	if (func_6(uParam0, 7))
	{
		if (func_23(92))
		{
			return;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_21, true, false) };
		if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 250f)
		{
			return;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = func_154(iVar0);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false)) < 250f)
			{
				return;
			}
			iVar0++;
		}
	}
	func_7(uParam0, 0);
}

void func_77(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_6(uParam0, 10))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 8))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_21))
	{
		return;
	}
	if (func_6(uParam0, 7))
	{
		if (func_23(92))
		{
			return;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_21, true, false) };
		if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 250f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = func_154(iVar0);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false)) < 250f)
			{
				return;
			}
			iVar0++;
		}
	}
	func_7(uParam0, 0);
}

int func_78(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_6(uParam0, 10))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return 2;
	}
	iVar0 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return 2;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_20);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar1 = PLAYER::PLAYER_PED_ID();
	}
	func_155(uParam0->f_18);
	func_156(uParam0, iVar1);
	return 2;
}

void func_79(var uParam0)
{
	func_157(uParam0, 0f);
}

float func_80(var uParam0)
{
	if (!func_27(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_158(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_159() - uParam0->f_1);
}

void func_81(var uParam0, var uParam1, int iParam2)
{
	struct<6> Var0;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam2, &Var0, 6))
	{
		return;
	}
	if (Var0 != 47)
	{
		return;
	}
	if (!func_160(uParam0, uParam1, Var0.f_4, Var0.f_5))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 3:
			if (func_6(uParam0, 11))
			{
				return;
			}
			if (func_6(uParam0, 5))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					return;
				}
			}
			else if (func_6(uParam0, 6))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					return;
				}
			}
			else
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_161(131072);
			}
			func_7(uParam0, 10);
			break;
		case 0:
			if (func_6(uParam0, 11))
			{
				return;
			}
			if (func_6(uParam0, 8))
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_161(131072);
			}
			func_7(uParam0, 10);
			break;
		case 2:
			if (func_6(uParam0, 5))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					return;
				}
			}
			else if (func_6(uParam0, 6))
			{
				if (uParam0->f_20 != Var0.f_1)
				{
					return;
				}
			}
			else
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_161(131072);
			}
			func_42(uParam0, 10);
			func_7(uParam0, 11);
			break;
		case 1:
			if (func_6(uParam0, 8))
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_161(131072);
			}
			func_42(uParam0, 10);
			func_7(uParam0, 11);
			break;
		case 4:
			func_7(uParam0, 8);
			break;
		case 5:
			func_42(uParam0, 8);
			break;
		case 6:
			func_7(uParam0, 19);
			break;
		case 9:
			func_162(uParam0, &Var0, 0);
			break;
		case 10:
			func_162(uParam0, &Var0, 1);
			break;
		case 11:
			func_163(uParam0, &Var0);
			break;
		case 7:
			func_164(uParam0, &Var0);
			break;
		case 8:
			func_165(uParam0, &Var0);
			break;
	}
}

struct<2> func_82()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_83(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_166(Global_1051213) && !func_167(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_168(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_169(iParam3, 255))
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
	if (func_170())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_166(Global_1051213))
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

bool func_84(int iParam0)
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
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

void func_85(int iParam0, bool bParam1, bool bParam2)
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

int func_86(var uParam0, int iParam1, bool bParam2)
{
	func_171(uParam0, 2, bParam2);
	if (!func_172(uParam0))
	{
		return 0;
	}
	func_173(uParam0, iParam1, bParam2);
	return 1;
}

void func_87()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1291734.f_11.f_162[iVar0 /*7*/].f_6 == 2)
		{
			Global_1291734.f_11.f_162[iVar0 /*7*/] = { func_103() };
			Global_1291734.f_11.f_162[iVar0 /*7*/].f_5 = 0;
			Global_1291734.f_11.f_162[iVar0 /*7*/].f_6 = -1;
		}
		iVar0++;
	}
}

int func_88(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_174(bParam2), uParam0, iParam1);
}

void func_89(int iParam0, bool bParam1)
{
	func_175(iParam0, bParam1);
}

int func_90(struct<4> Param0, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;

	if (func_176(&Param0, 0, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var0 = { func_103() };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1291734.f_11.f_162[iVar4 /*7*/]), &Param0) && !INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1291734.f_11.f_162[iVar4 /*7*/]), &Var0))
		{
		}
		else
		{
			Global_1291734.f_11.f_162[iVar4 /*7*/].f_5 = Global_1296859.f_21 + 120;
			Global_1291734.f_11.f_162[iVar4 /*7*/] = { Param0 };
			Global_1291734.f_11.f_162[iVar4 /*7*/].f_6 = iParam5;
			Global_1291734.f_11.f_162[iVar4 /*7*/].f_4 = iParam4;
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_91(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_92(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_93(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_95(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::_0x61914209C36EFDDB(iParam0) != 7)
		{
			return true;
		}
		iVar0 = ENTITY::_0x9A87FF82FD35822F(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::_0x37056BA2A3FEFB31(iVar0, iParam0))
			{
				return true;
			}
			if (PED::_0xB36B0C7152B15278(iVar0, &iVar1))
			{
				if (iParam1 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_96(int iParam0)
{
	struct<11> Var0;
	var uVar96;

	Var0.f_10 = 10;
	MISC::_COPY_MEMORY(&(Global_1904087.f_113[iParam0 /*96*/]), &Var0, 96);
	MISC::_COPY_MEMORY(&(Global_1291734.f_938.f_245[iParam0 /*4*/]), &uVar96, 4);
}

void func_97(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::_0x8D9BFCE3352DE47F(iVar1))
			{
				return;
			}
			if (PED::IS_PED_A_PLAYER(iVar1) || PED::IS_PED_HUMAN(iVar1))
			{
				bVar0 = true;
			}
		}
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		ENTITY::_0x18FF3110CF47115D(iParam0, 2, 0);
		ENTITY::_0x18FF3110CF47115D(iParam0, 27, 1);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
	}
	else if (bVar0)
	{
		PED::_0xED00D72F81CF7278(iParam0, 0, 0);
	}
	else if (bParam2)
	{
		ENTITY::_DELETE_CARRIABLE(&iParam0);
	}
}

bool func_98(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1291734.f_938.f_245[iParam0 /*4*/].f_3))
	{
		return true;
	}
	if (func_113(Global_1904087.f_113[iParam0 /*96*/].f_1, 0))
	{
		return true;
	}
	return false;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_100(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_101()
{
	Global_1904087.f_106 = Global_1071686.f_28448[49 /*4*/].f_3;
	Global_1904087.f_106.f_1 = 0;
	Global_1904087.f_106.f_2 = 0;
	Global_1904087.f_106.f_3 = 0;
	Global_1904087.f_106.f_4 = 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return joaat("NSMT_HORSE");
		case 1:
			return joaat("NSMT_DONKEY");
		case 2:
			return joaat("NSMT_VEHICLE");
		case 3:
			return joaat("NSMT_CANOE");
		case 4:
			return joaat("NSMT_TRAIN");
		case 5:
			return joaat("NSMT_CANNON");
		default:
			break;
	}
	return 0;
}

struct<4> func_103()
{
	struct<4> Var0;

	return Var0;
}

void func_104(var uParam0)
{
	int iVar0;

	*uParam0 = { func_103() };
	iVar0 = 0;
	while (iVar0 < 24)
	{
		uParam0->f_4[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_29[iVar0 /*4*/] = 100;
		uParam0->f_29[iVar0 /*4*/].f_1 = 0f;
		uParam0->f_29[iVar0 /*4*/].f_2 = 0f;
		uParam0->f_29[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				uParam0->f_38[iVar0 /*4*/] = 100;
				break;
			case 1:
				uParam0->f_38[iVar0 /*4*/] = 0;
				break;
			case 2:
				uParam0->f_38[iVar0 /*4*/] = 50;
				break;
		}
		uParam0->f_38[iVar0 /*4*/].f_1 = 0f;
		uParam0->f_38[iVar0 /*4*/].f_2 = 0f;
		uParam0->f_38[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	uParam0->f_51 = { 0f, 0f, 0f };
}

bool func_105(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_177(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_106()
{
	Global_1952637.f_1057 = 0;
}

void func_107(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_108(var uParam0)
{
	func_178(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_103() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_109(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_179(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_180(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_110(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_181(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_182(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_111(var uParam0, var uParam1)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1291734.f_938[iVar0 /*24*/]), uParam0))
		{
		}
		else
		{
			if (Global_1291734.f_938[iVar0 /*24*/].f_23 < Global_1296859.f_21)
			{
				*uParam1 = { Global_1291734.f_938[iVar0 /*24*/].f_7 };
				return true;
			}
			*uParam1 = { Global_1291734.f_938[iVar0 /*24*/].f_15 };
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_112(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_183(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_184(&cVar0);
}

bool func_113(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_114(var uParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(uParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_115(int iParam0)
{
	int iVar0;

	if (!func_113(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

struct<8> func_116(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_117(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

bool func_118(var uParam0, int iParam1)
{
	return func_186(&(uParam0->f_20), iParam1);
}

void func_119()
{
	if (func_55(2, 255))
	{
		return;
	}
	func_187(2);
}

void func_120(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
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
	var uVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;

	Global_1291734.f_938.f_241[iParam2] = 0;
	if (!STREAMING::IS_MODEL_VALID(*uParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			vVar0 = { 0f, -1f, 0f };
			break;
		case 1:
			vVar0 = { -1f, 0f, 0f };
			break;
		case 2:
			vVar0 = { 1f, 0f, 0f };
			break;
	}
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar0) };
	if (STREAMING::_0x274EE1B90CFA669E(*uParam1))
	{
		iVar6 = OBJECT::CREATE_OBJECT(*uParam1, vVar3, true, false, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return;
		}
		iVar7 = func_188(iParam2);
		TASK::TASK_CARRIABLE(iVar6, uParam1->f_3, iParam0, iVar7, 256);
		ENTITY::_0x399657ED871B3A6C(iVar6, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar6, uParam1->f_93);
		iVar8 = func_189(iParam0, iVar6);
	}
	else if (STREAMING::IS_MODEL_A_PED(*uParam1))
	{
		iVar9 = func_190(*uParam1, vVar3, 0, 1, 0, 0, 1, 1, 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			return;
		}
		if (uParam1->f_8 != 0)
		{
			PED::_SET_PED_BODY_COMPONENT(iVar9, uParam1->f_8);
			if (uParam1->f_92)
			{
				iVar10 = joaat("META_OUTFIT_FIELD_DRESSING_001");
				if (PED::_0x4FF3C2B4E6A196C1(uParam1->f_8, iVar10, *uParam1))
				{
					PED::_0x66FF395445A88A6E(iVar9, iVar10, 0);
				}
			}
		}
		iVar19 = 0;
		while (iVar19 < uParam1->f_9)
		{
			uVar11 = uParam1->f_10[iVar19 /*8*/];
			uVar12 = uParam1->f_10[iVar19 /*8*/].f_1;
			uVar13 = uParam1->f_10[iVar19 /*8*/].f_2;
			uVar14 = uParam1->f_10[iVar19 /*8*/].f_3;
			uVar15 = uParam1->f_10[iVar19 /*8*/].f_4;
			uVar16 = uParam1->f_10[iVar19 /*8*/].f_5;
			uVar17 = uParam1->f_10[iVar19 /*8*/].f_6;
			uVar18 = uParam1->f_10[iVar19 /*8*/].f_7;
			PED::_0xBC6DF00D7A4A6819(iVar9, uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17, uVar18);
			iVar19++;
		}
		PED::_UPDATE_PED_VARIATION(iVar9, false, true, true, true, false);
		if (uParam1->f_2 == 2)
		{
			ENTITY::_SET_ENTITY_HEALTH(iVar9, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar9, 517, true);
			PERSISTENCE::_0xF5622FA6ACFCA7DB(iVar9, uParam1->f_91);
		}
		if (ENTITY::_0x9A100F1CF4546629(iVar9))
		{
			PED::_SET_PED_QUALITY(iVar9, uParam1->f_4);
			FLOCK::_0x8B6F0F59B1B99801(iVar9, uParam1->f_5);
			PED::_SET_PED_DAMAGE(iVar9, uParam1->f_6);
			PED::_SET_PED_DAMAGED(iVar9, uParam1->f_7);
		}
		if (uParam1->f_92 || uParam1->f_95)
		{
			PED::_0x6569F31A01B4C097(iVar9, 0, 0);
			ENTITY::_0x6BCF5F3D8FFE988D(iVar9, 1);
		}
		iVar20 = func_188(iParam2);
		TASK::TASK_CARRIABLE(iVar9, uParam1->f_3, iParam0, iVar20, 256);
		ENTITY::_0x399657ED871B3A6C(iVar9, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar9, uParam1->f_93);
		if (uParam1->f_94)
		{
			ENTITY::SET_ENTITY_RENDER_SCORCHED(iVar9, true);
			FIRE::START_ENTITY_FIRE(iVar9, 0, -1, 8);
		}
		iVar21 = func_191(iVar9);
		iVar22 = func_192(iVar21);
		if (func_113(iVar22, 0))
		{
			if (iVar22 != uParam1->f_1)
			{
				uParam1->f_1 = iVar22;
			}
		}
		iVar23 = func_189(iParam0, iVar9);
	}
}

bool func_121(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_193(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_194(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_195(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_179(&Var45, &Var0, 0))
				{
					if (func_186(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_196(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_196(iVar43);
	}
	return false;
}

struct<4> func_122()
{
	return Global_1291734.f_11.f_310;
}

bool func_123()
{
	return Global_1291734.f_11.f_318 > Global_1296859.f_21;
}

void func_124(var uParam0, bool bParam1)
{
	Global_1291734.f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734.f_11.f_318 = Global_1296859.f_21 + 10;
	}
}

int func_125(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_197(iParam0);
	bVar1 = func_83(func_82(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_126(int iParam0)
{
	return func_198(&(Global_3145858.f_6), iParam0);
}

int func_127(int iParam0, int iParam1)
{
	if (iParam1 == 0)
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
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

bool func_128(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_193(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_194(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_195(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_179(&Var45, &Var0, 0))
				{
					if (func_186(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_196(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_196(iVar43);
	}
	return false;
}

struct<4> func_129(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -1591664384;
	if (!func_199("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_195(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_196(iVar0);
	return Var2;
}

bool func_130(bool bParam0)
{
	if (func_200() && (bParam0 || !func_201(0)))
	{
		if (func_202(-283002878))
		{
			if (func_203(-283002878))
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_131(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_132(int iParam0)
{
	Global_1940311.f_10866 = (Global_1940311.f_10866 || iParam0);
}

bool func_133(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_40(uParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_204(&Global_1904087))
	{
		return false;
	}
	func_205(&Global_1904087, 536870912);
	func_205(&Global_1904087, 268435456);
	func_205(&Global_1904087, -2147483648);
	func_205(&Global_1904087, 1073741824 /* Float: 2f */);
	func_205(&Global_1904087, 134217728);
	switch (iParam2)
	{
		case 0:
			func_206(&Global_1904087, 134217728);
			break;
		case 1:
			func_206(&Global_1904087, 268435456);
			break;
		case 2:
			func_206(&Global_1904087, 536870912);
			break;
		case 3:
			func_206(&Global_1904087, 1073741824 /* Float: 2f */);
			break;
		case 4:
			func_206(&Global_1904087, -2147483648);
			break;
	}
	if (!func_172(&Global_1904087))
	{
		return false;
	}
	if (bParam3)
	{
		func_207();
	}
	return true;
}

int func_134(var uParam0, int iParam1)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam0))
	{
		return 0;
	}
	if (HUD::_IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY(*uParam0, iParam1))
	{
		return 0;
	}
	*uParam0 = uVar0;
	return 1;
}

bool func_135(int iParam0)
{
	return (Global_17411.f_55.f_61.f_582 && iParam0) != 0;
}

int func_136(var uParam0)
{
	int iVar0;

	iVar0 = uParam0->f_20;
	if (iVar0 == 255)
	{
		return 0;
	}
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (!Global_1291734.f_1429.f_1)
	{
		return 0;
	}
	return 1;
}

int func_137(int iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	bVar0 = iParam4 != -1;
	if (HUD::_0x7EC0D68233E391AC(21) == 2)
	{
		func_208(uParam2);
		return 0;
	}
	if (func_209(Global_1296859, 32768))
	{
		return 0;
	}
	fVar6 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	if (!PLAYER::IS_PLAYER_DEAD(Global_1296859.f_10) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (Global_1071686.f_21952.f_580 <= 0f || fVar6 <= Global_1071686.f_21952.f_580)
		{
			PLAYER::GET_PLAYER_TARGET_ENTITY(Global_1296859.f_10, &iVar8);
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (((iVar8 == iParam0 || PED::_0x0C31C51168E80365(Global_1296859.f_8) == iVar9) || PED::GET_MELEE_TARGET_FOR_PED(Global_1296859.f_8) == iVar9) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(Global_1296859.f_10, iVar9))
			{
				bVar3 = true;
			}
		}
	}
	if (bVar0)
	{
		iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar10, false) || PED::IS_PED_ON_MOUNT(iVar10))
		{
			bVar1 = true;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21416.f_258), iParam4) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21416.f_259), iParam4))
		{
			bVar2 = true;
		}
		if (HUD::_0x7EC0D68233E391AC(54) == 2)
		{
			func_208(uParam2);
			return 0;
		}
		if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(Global_1296859.f_154[Global_1296859], Global_1296859.f_154[iParam4]))
		{
			return 0;
		}
		if (func_210(iParam4))
		{
			return 0;
		}
		if (func_210(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1957964.f_2), iParam4))
			{
				return 3;
			}
		}
		if (Global_1071686.f_21952[iParam4 /*18*/].f_3 != 0)
		{
			func_208(uParam2);
			return Global_1071686.f_21952[iParam4 /*18*/].f_3;
		}
		if (func_211(iParam4))
		{
			func_208(uParam2);
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21952.f_583), iParam4) && !bVar2)
		{
			if (!bVar3 || !func_209(Global_1296859, 131072))
			{
				return 0;
			}
		}
		if (func_212(iParam4))
		{
			return 0;
		}
		if (iParam3 != 255 && iParam3 == iParam4)
		{
			return 3;
		}
		if (func_209(iParam4, 16384))
		{
			return 0;
		}
	}
	else if (bParam7)
	{
		if (HUD::_0x7EC0D68233E391AC(55) == 2)
		{
			func_208(uParam2);
			return 0;
		}
	}
	if (bParam6 || (Global_263042[Global_1296859 /*70*/].f_1.f_21.f_2 == -504335712 && func_213(Global_524288.f_40400)))
	{
		bVar7 = true;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		fVar5 = Global_1901947.f_99.f_11;
	}
	else if (bVar7)
	{
		if (bVar1)
		{
			fVar5 = Global_1901947.f_99.f_10;
		}
		else
		{
			fVar5 = Global_1901947.f_99.f_9;
		}
	}
	else
	{
		if (Global_1071686.f_21952.f_578 > 0f)
		{
			fVar4 = Global_1071686.f_21952.f_578;
		}
		else
		{
			fVar4 = func_214(bParam1, Global_1901947.f_99.f_7, Global_1901947.f_99.f_6);
		}
		if (Global_1071686.f_21952.f_579 > 0f)
		{
			fVar5 = Global_1071686.f_21952.f_579;
		}
		else
		{
			fVar5 = func_214(bParam1, Global_1901947.f_99.f_8, Global_1901947.f_99.f_5);
		}
	}
	if (!func_215(iParam4, iParam0, fVar6, fVar5, bVar0))
	{
		func_208(uParam2);
		return 0;
	}
	bVar11 = HUD::_0x7EC0D68233E391AC(21) == true;
	if (bVar7)
	{
		if (bVar3)
		{
			if (bVar0)
			{
				return 3;
			}
			else
			{
				return 2;
			}
		}
		else if (fVar6 <= fVar5)
		{
			if (bVar11)
			{
				if (bVar0)
				{
					return 3;
				}
				else
				{
					return 2;
				}
			}
			else if (func_209(Global_1296859, 65536))
			{
				if (bVar0 && VOICE::_0xEF6F2A35FAAF2ED7(PLAYER::INT_TO_PLAYERINDEX(iParam4)))
				{
					return 2;
				}
			}
			else if (((func_216(uParam2) || func_217(iParam5)) || (bVar0 && VOICE::_0xEF6F2A35FAAF2ED7(PLAYER::INT_TO_PLAYERINDEX(iParam4)))) || bVar2)
			{
				return 2;
			}
		}
		else
		{
			func_208(uParam2);
			return 0;
		}
	}
	else if (bVar3)
	{
		if (bVar0)
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	else if (fVar6 <= fVar4)
	{
		if (bVar11 && bVar0)
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	else if (fVar6 <= fVar5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_138(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_MOUNT_OF_PLAYER(iParam0)))
	{
		return iParam2;
	}
	return func_91(Global_1291106[iParam0 /*19*/].f_4, 1);
}

bool func_139(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_MOUNT_OF_PLAYER(iParam0)))
	{
		return iParam2;
	}
	return func_91(Global_1291106[iParam0 /*19*/].f_4, 2);
}

bool func_140(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	bool bVar6;
	bool bVar7;
	int iVar8;

	bVar6 = false;
	bVar7 = true;
	if (func_6(uParam0, 2))
	{
		bVar6 = true;
	}
	iVar8 = uParam0->f_19;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
	{
		return false;
	}
	func_7(uParam0, 30);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		if (!ENTITY::_0x808077647856DE62(uParam0->f_18, 34))
		{
			ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, 1);
		}
	}
	else if (bVar6)
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_18);
	}
	if (!ENTITY::_0x188736456D1DEDE6(uParam0->f_18, iVar8))
	{
		bVar7 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_94(iVar0);
		if (PED::_0x608BC6A6AACD5036(&Var2, uParam0->f_18, iVar1, 0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var2.f_3))
			{
				if (bVar6)
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Var2.f_3);
				}
			}
			if (!ENTITY::_0x188736456D1DEDE6(Var2.f_3, iVar8))
			{
				bVar7 = false;
			}
		}
		iVar0++;
	}
	if (func_218())
	{
		bVar7 = false;
	}
	if (!bVar7)
	{
		if (func_219(&(Global_1291734.f_11.f_556), 5f))
		{
			return true;
		}
	}
	return bVar7;
}

void func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;

	iVar6 = uParam0->f_19;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		if (ENTITY::_0x808077647856DE62(uParam0->f_18, 34))
		{
			ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, 0);
		}
	}
	ENTITY::_0xC6A1A3D63F122DE7(uParam0->f_18, iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_94(iVar0);
		if (PED::_0x608BC6A6AACD5036(&Var2, uParam0->f_18, iVar1, 0))
		{
			ENTITY::_0xC6A1A3D63F122DE7(Var2.f_3, iVar6);
		}
		iVar0++;
	}
}

bool func_142(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && ENTITY::IS_ENTITY_A_PED(uParam1->f_1))
	{
		if (uParam0->f_18 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1))
		{
			return true;
		}
	}
	return false;
}

bool func_143(var uParam0)
{
	float fVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_20))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(uParam0->f_20)))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0->f_20), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false));
	if (fVar0 < 248f)
	{
		return false;
	}
	return true;
}

bool func_144(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == Global_1296859.f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1296859.f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28347), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1296859.f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_0x81FB74C83C2ED69F(iParam0))
	{
		return true;
	}
	return false;
}

var func_145(int iParam0)
{
	struct<8> Var0;

	if (iParam0 == -1)
	{
		return "";
	}
	func_101();
	Global_1904087.f_106.f_2 = 1292413058;
	Global_1904087.f_106.f_3 = func_102(iParam0);
	if (!DATAFILE::_DATAFILE_GET_STRING(&Var0, &(Global_1904087.f_106)))
	{
		return "";
	}
	return func_220(Var0);
}

int func_146(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1296859.f_22[iParam0])
	{
		return Global_1100469[iParam0 /*53*/];
	}
	return 26;
}

bool func_147(int iParam0)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return Global_1108365.f_34[iVar0 /*11*/].f_6;
}

bool func_148(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_149(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_18))
	{
		iVar1 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_18, false);
	}
	else
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_21, -1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		return true;
	}
	if (iVar2 == iVar0)
	{
		return false;
	}
	if (func_147(iVar0))
	{
		return true;
	}
	iVar3 = func_221(iParam2);
	if (func_222(iParam2))
	{
		iVar4 = func_223(iVar3);
		if (iVar4 == 15 || iVar4 == 10)
		{
			if (func_224(iVar3, uParam0->f_18))
			{
				return true;
			}
		}
	}
	if (Global_1291106[iParam2 /*19*/] & 16 != 0 || Global_1291105 & 32 != 0)
	{
		return false;
	}
	if (Global_1291106[iParam2 /*19*/] & 2 != 0 || Global_1291105 & 4 != 0)
	{
		if (GANG::_0x901E0DC25080C8B9(iVar2) == GANG::_0x901E0DC25080C8B9(iVar0))
		{
			return false;
		}
	}
	Var5 = { func_225(iVar2) };
	if (Global_1291106[iParam2 /*19*/] & 4 != 0 || Global_1291105 & 8 != 0)
	{
		if (func_226(Var5, *uParam1))
		{
			return false;
		}
	}
	if (Global_1291106[iParam2 /*19*/] & 8 != 0 || Global_1291105 & 16 != 0)
	{
		if (NETWORK::NETWORK_IS_FRIEND(uParam1))
		{
			return false;
		}
	}
	return true;
}

void func_150(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar0)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return;
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false, false))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iVar1))
	{
		return;
	}
	if (bVar0)
	{
		if (PED::GET_MOUNT(iVar1) != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))
		{
			return;
		}
	}
	else if (AITRANSPORT::_0xFFEC4B0A1A3ED515(iParam0, -1) == iVar1)
	{
		return;
	}
	if (AITRANSPORT::_0x660639BC60157048(iVar1, iParam0))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar1;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

bool func_151()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

void func_152(var uParam0)
{
	if (!func_6(uParam0, 25) && !func_6(uParam0, 24))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 25);
		func_227();
	}
}

float func_153(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_154(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return Global_1102219.f_3675[iParam0];
}

void func_155(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, true);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	ENTITY::_0x18FF3110CF47115D(iParam0, 34, 1);
	PED::_0x6569F31A01B4C097(iParam0, 4, 0);
	PED::_0x6569F31A01B4C097(iParam0, 0, 0);
	PED::_0x6569F31A01B4C097(iParam0, 1, 0);
}

void func_156(var uParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_18, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 288, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_228(uParam0))
	{
		TASK::TASK_HORSE_ACTION(0, 2, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		TASK::TASK_SMART_FLEE_PED(0, iParam1, 1000f, -1, 540928, 3f, 0);
	}
	else
	{
		TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false), 1000f, -1, 540928, 3f);
	}
	TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	func_229(uParam0->f_18, &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(uParam0->f_18, true);
}

void func_157(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_159() - fParam1);
	func_230(uParam0, 1);
	func_231(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_158(var uParam0)
{
	return func_100(*uParam0, 2);
}

float func_159()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_160(var uParam0, var uParam1, int iParam2, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return func_6(uParam0, 5);
			}
			return (func_6(uParam0, 5) && !func_6(uParam0, 7));
		case 1:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return func_6(uParam0, 6);
			}
			return (func_6(uParam0, 6) && !func_6(uParam0, 7));
		case 2:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return func_6(uParam0, 5);
			}
			return (func_6(uParam0, 5) && func_6(uParam0, 7));
		case 3:
			if (((iParam2 == 1 || iParam2 == 2) || iParam2 == 3) || iParam2 == 6)
			{
				return func_6(uParam0, 6);
			}
			return (func_6(uParam0, 6) && func_6(uParam0, 7));
		case 4:
			return func_6(uParam0, 5);
		case 5:
			return func_6(uParam0, 6);
		case 6:
			return true;
		default:
			break;
	}
	return uParam1->f_11 == iParam3;
}

void func_161(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1291106[iVar0 /*19*/].f_1 = (Global_1291106[iVar0 /*19*/].f_1 || iParam0);
}

void func_162(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_18 != PLAYER::_GET_MOUNT_OF_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		return;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_18, true);
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::GET_PLAYER_PED(uParam1->f_1);
	if (PED::GET_MOUNT(iVar2) == uParam0->f_18)
	{
		if (iVar1 != iVar2 && PED::GET_MOUNT(iVar1) == uParam0->f_18)
		{
			TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
			func_89(16, 1);
		}
		if (bParam2 && iVar1 == iVar2)
		{
			TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	TASK::TASK_HORSE_ACTION(uParam0->f_18, 10, 0, 0);
	if (iVar0 == iVar1)
	{
		func_89(16, 1);
	}
}

void func_163(var uParam0, var uParam1)
{
	if (PLAYER::GET_PLAYER_PED(uParam1->f_1) == PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	if (uParam0->f_18 != PLAYER::_GET_MOUNT_OF_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, -2) == func_232())
	{
		return;
	}
	func_150(uParam0->f_18);
}

void func_164(var uParam0, var uParam1)
{
	if (uParam0->f_18 != PLAYER::_GET_MOUNT_OF_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (!func_233(uParam1, uParam0->f_18))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(uParam0->f_18, true, false);
	FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_18, 0);
	TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_18, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam1->f_1), true, false), 6, 4718592, -1082130432 /* Float: -1f */, -1, 0);
}

void func_165(var uParam0, var uParam1)
{
	if (uParam0->f_18 != PLAYER::_GET_MOUNT_OF_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (!func_233(uParam1, uParam0->f_18))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_18, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(uParam0->f_18)))
		{
			FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_18, 0);
		}
		TASK::TASK_STAND_STILL(uParam0->f_18, -1);
	}
}

bool func_166(struct<2> Param0)
{
	if (!func_234(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_235(Param0))
	{
		return false;
	}
	return true;
}

bool func_167(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_168(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_169(int iParam0, int iParam1)
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

bool func_170()
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
	if (!func_166(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_171(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_206(uParam0, iParam1);
	}
	else
	{
		func_205(uParam0, iParam1);
	}
}

bool func_172(var uParam0)
{
	if (!func_204(uParam0))
	{
		return false;
	}
	switch (uParam0->f_10)
	{
		case 0:
		case 1:
			if (!func_236(uParam0))
			{
				return false;
			}
			break;
		case 2:
			if (!func_237(uParam0))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_173(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1291734.f_938[iVar0 /*24*/]), uParam0))
			{
			}
			else
			{
				Global_1291734.f_938[iVar0 /*24*/].f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1291734.f_938.f_271[iVar0 /*24*/]), uParam0))
			{
			}
			else
			{
				Global_1291734.f_938.f_271[iVar0 /*24*/].f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

int func_174(bool bParam0)
{
	if (func_238() == -1)
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

void func_175(int iParam0, bool bParam1)
{
	if (func_239(iParam0) && !bParam1)
	{
		return;
	}
	Global_1291734.f_11.f_523[iParam0] = func_241(func_240(iParam0), 10000, 0, 0, 0, 1);
}

bool func_176(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_242(uParam0, iParam1))
		{
			return true;
		}
		return false;
	}
	func_40(uParam0, iParam1, 0);
	if (func_118(&Global_1904087, 2))
	{
		return true;
	}
	return false;
}

int func_177(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_174(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_178(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_179(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	iVar0 = func_174(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_180(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_31(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_23 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_181(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	iVar0 = func_174(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_182(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "BREED_BRETON_REDROAN";
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "BREED_BRETON_GRULLODUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "BREED_BRETON_SEALBROWN";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "BREED_BRETON_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "BREED_CRIOLLO_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "BREED_CRIOLLO_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "BREED_CRIOLLO_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "BREED_CRIOLLO_MARBLESABINO";
		case joaat("BREED_GYPSYCOB_PIEBALD"):
			return "BREED_GYPSYCOB_PIEBALD";
		case joaat("BREED_GYPSYCOB_WHITEBLAGDON"):
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case joaat("BREED_GYPSYCOB_PALOMINOBLAGDON"):
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case joaat("BREED_GYPSYCOB_SKEWBALD"):
			return "BREED_GYPSYCOB_SKEWBALD";
		case joaat("BREED_GYPSYCOB_SPLASHEDBAY"):
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case joaat("BREED_GYPSYCOB_SPLASHEDPIEBALD"):
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "BREED_KLADRUBER_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "BREED_KLADRUBER_CREMELLO";
		case joaat("BREED_KLADRUBER_GREY"):
			return "BREED_KLADRUBER_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "BREED_KLADRUBER_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "BREED_NORFOLKROADSTER_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

char[] func_184(char[4] cParam0)
{
	return cParam0;
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

bool func_186(var uParam0, int iParam1)
{
	return func_148(*uParam0, iParam1);
}

void func_187(int iParam0)
{
	func_243(2, iParam0);
}

int func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	return 0;
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	iVar1 = func_192(iParam1);
	iVar2 = func_244(iVar0, iVar1, 1);
	return iVar2;
}

int func_190(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_245(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_191(int iParam0)
{
	return iParam0;
}

int func_192(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_246(&iParam0);
		if (!func_113(iVar0, 0))
		{
			iVar0 = func_247(iParam0);
		}
	}
	else
	{
		iVar0 = func_247(iParam0);
	}
	return iVar0;
}

struct<14> func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_194(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_174(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_195(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_196(int iParam0)
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

int func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Global_1048577)
	{
		return 3;
	}
	iVar0 = Global_263042[iParam0 /*70*/].f_1.f_21.f_2;
	iVar1 = func_248(iVar0);
	iVar2 = func_249(iVar0, iVar1);
	return iVar2;
}

bool func_198(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_199(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_174(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_200()
{
	return (Global_1940311.f_1 || Global_1940311 == 1);
}

bool func_201(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

bool func_202(int iParam0)
{
	if (iParam0 == Global_1940311.f_37)
	{
		return true;
	}
	return false;
}

bool func_203(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_1940311.f_10869[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_204(var uParam0)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (uParam0->f_10 == -1)
	{
		return false;
	}
	return true;
}

void func_205(var uParam0, int iParam1)
{
	func_250(&(uParam0->f_20), iParam1);
}

void func_206(var uParam0, int iParam1)
{
	func_251(&(uParam0->f_20), iParam1);
}

void func_207()
{
	func_252(&(Global_1291734.f_938));
	func_253(0);
	func_253(2);
}

void func_208(var uParam0)
{
	if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

bool func_209(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_148(Global_1071686.f_21416.f_1[iParam0 /*8*/].f_7, iParam1);
}

bool func_210(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_254(36, iParam0);
}

bool func_211(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_3 & 32 != 0;
	}
	return func_255(32, iParam0);
}

bool func_212(int iParam0)
{
	return func_254(1, iParam0);
}

bool func_213(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

float func_214(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

bool func_215(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	var uVar2;

	if (fParam2 > fParam3)
	{
		return false;
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return false;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(iParam1);
	if (bVar0)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	}
	if (bParam4)
	{
		if (Global_1071686.f_21952[iParam0 /*18*/].f_9 == 0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 1f);
			}
			if (PED::_0xB655DB7582AEC805(iVar1) && TASK::_0x6C50B9DCCCA70023(iVar1))
			{
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), 1f);
			}
			else if (PED::IS_PED_IN_COVER(iVar1, true, false))
			{
				uVar2 = Global_1901947.f_99.f_13;
			}
			else
			{
				uVar2 = Global_1901947.f_99.f_12;
			}
			return ((func_256(Global_1296859, iParam0) && PED::_0x5102307CE88798EB(iVar1)) && PED::_0x164CECC59E70DF86(iVar1, uVar2));
		}
		else if (!PED::_0x5102307CE88798EB(iVar1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
		}
		else
		{
			return PED::IS_TRACKED_PED_VISIBLE(iVar1);
		}
	}
	else if (bVar0)
	{
		if (!PED::_0x5102307CE88798EB(iVar1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
		}
		else
		{
			return PED::IS_TRACKED_PED_VISIBLE(iVar1);
		}
	}
	else
	{
		return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), 1f);
	}
	return false;
}

int func_216(var uParam0)
{
	if (*uParam0 == 0)
	{
		*uParam0 = Global_1296859.f_21;
	}
	else if ((Global_1296859.f_21 - *uParam0) < 5)
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 1277358601:
		case joaat("POSSE_LEADER"):
			return 0;
		default:
			break;
	}
	return 1;
}

bool func_218()
{
	int iVar0;

	iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_55(65536, 255))
		{
			func_20(65536);
		}
		return false;
	}
	if (func_55(65536, 255))
	{
		return true;
	}
	return false;
}

bool func_219(var uParam0, float fParam1)
{
	if (!func_27(uParam0))
	{
		return false;
	}
	if (func_80(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

var func_220(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_221(int iParam0)
{
	return Global_1285193[iParam0 /*2*/];
}

bool func_222(int iParam0)
{
	return Global_1285193[iParam0 /*2*/].f_1;
}

int func_223(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

bool func_224(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	iVar0 = func_223(iParam0);
	if (!func_257(iVar0))
	{
		return false;
	}
	vVar1 = { Global_1051439.f_72[iVar0 /*75*/].f_3 };
	if (iParam0 == 154)
	{
		vVar1 = { func_131(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_26(vVar1))
	{
		return false;
	}
	fVar4 = func_258(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_259(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_259(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

struct<7> func_225(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_226(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar22;

	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam0))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar0, 22, &uParam0);
	}
	else
	{
		return false;
	}
	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam7))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar22, 22, &uParam7);
	}
	else
	{
		return false;
	}
	if (iVar0 != iVar22)
	{
		return false;
	}
	return true;
}

void func_227()
{
	if (func_55(2, 255))
	{
		return;
	}
	func_260(2);
}

bool func_228(var uParam0)
{
	struct<4> Var0;

	if ((!PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, -1) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, 0)) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, -2))
	{
		return true;
	}
	if (!PED::_0x608BC6A6AACD5036(&Var0, uParam0->f_18, 4, 2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_3))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3)))
	{
		return false;
	}
	return true;
}

void func_229(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_231(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_232()
{
	return -1;
}

bool func_233(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam1))
	{
		return false;
	}
	if (func_153(iVar0, iParam1, 1, 1) > 40f)
	{
		return false;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iParam1, true);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	return true;
}

bool func_234(int iParam0)
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

int func_235(int iParam0)
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

bool func_236(var uParam0)
{
	func_261(&(Global_1904087.f_24));
	if (!func_105(*uParam0, &(Global_1904087.f_24), 1, 0, -1))
	{
		return false;
	}
	Global_1904087.f_24.f_14 = uParam0->f_11;
	Global_1904087.f_24.f_15 = uParam0->f_22;
	Global_1904087.f_24.f_16 = { uParam0->f_12 };
	Global_1904087.f_24.f_25 = uParam0->f_23;
	Global_1904087.f_24.f_24 = uParam0->f_20;
	func_262(uParam0, &(Global_1904087.f_24.f_24));
	if (!func_263(&(Global_1904087.f_24), 0, 1))
	{
		return false;
	}
	return true;
}

bool func_237(var uParam0)
{
	struct<24> Var0;

	Var0.f_9 = -1591664384;
	if (!func_105(*uParam0, &Var0, 0, 0, -1))
	{
		return false;
	}
	Var0.f_14 = uParam0->f_11;
	Var0.f_15 = { uParam0->f_12 };
	func_262(uParam0, &(Var0.f_23));
	return func_264(&Var0, 0, 0);
}

int func_238()
{
	return Global_1572887.f_13;
}

bool func_239(int iParam0)
{
	return func_265(Global_1291734.f_11.f_523[iParam0]);
}

char* func_240(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 1:
			return "NSHM_HORSE_MOUNT_RESPAWNING";
		case 3:
			return "NSHM_HORSE_MOUNT_SWAPPED_RECENTLY";
		case 2:
			return "NSHM_HORSE_MOUNT_DISMISSED_RECENTLY";
		case 4:
			return "NSHM_HORSE_NO_HORSES_AVAILABLE";
		case 5:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 6:
			return "NSHM_HORSE_CALL_HORSE_DISABLED";
		case 7:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD";
		case 8:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_ALT";
		case 9:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_VET_FEES";
		case 10:
			return "NSHM_HORSE_PLAYER_VEHICLE_NOT_DISMISSED";
		case 11:
			return "NSHM_HORSE_CALL_HORSE_VEHICLE";
		case 13:
			return "NSHM_VEHICLE_CANNOT_CONTACT_STABLE";
		case 28:
			return "NSHM_HORSE_CANT_MOUNT_PLAYER_HORSE";
		case 15:
			return "NSHM_HORSE_PARLEYED_WITH_OWNER";
		case 14:
			return "NSHM_HORSE_YOU_DO_NOT_OWN_HORSE";
		case 16:
			return "NSHM_HORSE_OWNER_KICKED_YOU";
		case 17:
			return "NSHM_HORSE_DIED";
		case 18:
			return "NSHM_HORSE_DIED_INSURANCE";
		case 19:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION_INSURANCE";
		case 20:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION";
		case 22:
			return "NSHM_HORSE_PENALTY_COOLDOWN";
		case 23:
			return "NSHM_HORSE_PENALTY_COOLDOWN_INSURANCE";
		case 24:
			return "NSHM_HORSE_PENALTY_COOLDOWN_COMPLETE";
		case 21:
			return "NSHM_HORSE_REVIVE_COOLDOWN_COMPLETE";
		case 25:
			return "NSHM_HORSE_INSURANCE_EXPIRED";
		case 26:
			return "NSHM_HORSE_CANNOT_DISMISS_CARRYING_OBJECT";
		case 27:
			return "NSHM_HORSE_MOUNTED_POSSE_MEMBER";
		case 29:
			return "NSHM_HORSE_BAD_SPORT_KILLED_ENEMY_HORSE";
		case 31:
			return "NSHM_VEHICLE_BAD_SPORT_DESTROYED_ENEMY_VEHICLE";
		case 30:
			return "NSHM_VEHICLE_MOUNTED_POSSE_MEMBER";
		default:
			break;
	}
	return "";
}

var func_241(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_242(var uParam0, int iParam1)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1291734.f_938[iVar0 /*24*/]), uParam0))
			{
			}
			else
			{
				return Global_1291734.f_938[iVar0 /*24*/].f_6;
			}
			iVar0++;
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(&(Global_1291734.f_938.f_271[iVar0 /*24*/]), uParam0))
			{
			}
			else
			{
				return Global_1291734.f_938.f_271[iVar0 /*24*/].f_6;
			}
			iVar0++;
		}
	}
	return false;
}

void func_243(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_0x31010318BA9897AC(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
}

int func_244(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_113(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_266(iParam0) };
	Var5 = { func_267(iParam0, iParam1, Var0, Var0.f_4) };
	if (INVENTORY::_0xCB5D11F9508A928D(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		return 1;
	}
	return 0;
}

void func_245(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_268(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_269(iParam0, 0);
			bVar0 = true;
		}
		func_270(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_246(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_271(iVar0);
}

int func_247(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = func_271(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_248(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288.f_40400;
}

int func_249(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_213(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

void func_250(var uParam0, int iParam1)
{
	if (!func_186(uParam0, iParam1))
	{
		return;
	}
	func_272(uParam0, iParam1);
}

void func_251(var uParam0, int iParam1)
{
	if (func_186(uParam0, iParam1))
	{
		return;
	}
	func_273(uParam0, iParam1);
}

void func_252(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_274(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_274(&(uParam0->f_271[iVar0 /*24*/]));
		iVar0++;
	}
}

void func_253(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<17> Var16;
	struct<16> Var45;
	struct<4> Var69;
	struct<24> Var83;
	int iVar107;
	int iVar108;

	if (iParam0 == 0)
	{
		if (!func_199("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
		{
			return;
		}
	}
	else if (iParam0 == 2)
	{
		Var2 = { func_193(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("COACH")) };
		if (!func_194(&Var2, &iVar0, &iVar1, 0))
		{
			return;
		}
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var16.f_9 = -1591664384;
	Var45.f_9 = -1591664384;
	Var69.f_9 = -1591664384;
	iVar107 = 0;
	while (iVar107 < iVar1)
	{
		if (!INVENTORY::_0x82FA24C3D3FCD9B7(iVar0, iVar107, &Var69))
		{
		}
		else if (!func_40(&Var69, iParam0, 0))
		{
		}
		else
		{
			iVar108 = Global_1904087.f_10;
			switch (iVar108)
			{
				case 0:
				case 1:
					if (MISC::_IS_STRING_SPACE(&(Global_1904087.f_12)))
					{
						if (func_179(&Var69, &Var16, 1))
						{
							if (func_263(&Var16, 0, 1))
							{
								Global_1904087.f_12 = { Var16.f_16 };
							}
						}
					}
					break;
				case 2:
					if (MISC::_IS_STRING_SPACE(&(Global_1904087.f_12)))
					{
						if (func_181(&Var69, &Var45, 1))
						{
							if (func_264(&Var45, 0, 1))
							{
								Global_1904087.f_12 = { Var45.f_15 };
							}
						}
					}
					break;
			}
			Var83 = { Var69 };
			Var83.f_4 = Global_1904087.f_11;
			Var83.f_6 = func_118(&Global_1904087, 2);
			Var83.f_7 = { Global_1904087.f_12 };
			if (iVar108 == 0 || iVar108 == 1)
			{
				Var83.f_15 = { Global_1291734.f_938[iVar107 /*24*/].f_15 };
				Var83.f_23 = Global_1291734.f_938[iVar107 /*24*/].f_23;
				Global_1291734.f_938[iVar107 /*24*/] = { Var83 };
			}
			else if (iVar108 == 2)
			{
				Var83.f_15 = { Global_1291734.f_938.f_271[iVar107 /*24*/].f_15 };
				Var83.f_23 = Global_1291734.f_938.f_271[iVar107 /*24*/].f_23;
				Global_1291734.f_938.f_271[iVar107 /*24*/] = { Var83 };
			}
		}
		iVar107++;
	}
	func_196(iVar0);
}

bool func_254(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_275(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_276())
	{
		return func_275(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_275(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_255(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_256(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (!Global_1296859.f_22[iParam0])
	{
		return false;
	}
	if (!Global_1296859.f_22[iParam1])
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iParam0]))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iParam1]))
	{
		return false;
	}
	return func_277(Global_1296859.f_154[iParam0], Global_1296859.f_154[iParam1]);
}

bool func_257(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

float func_258(int iParam0)
{
	int iVar0;

	iVar0 = func_223(iParam0);
	switch (iVar0)
	{
		case 10:
			return 10f;
		case 29:
			return 70f;
		case 2:
			return 75f;
		case 15:
			if (iParam0 == 63)
			{
				return 40f;
			}
			else
			{
				return 25f;
			}
			break;
	}
	return 10f;
}

float func_259(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_260(int iParam0)
{
	func_243(3, iParam0);
}

void func_261(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -1591664384;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

void func_262(var uParam0, var uParam1)
{
	if (func_118(uParam0, 4))
	{
		func_251(uParam1, 4);
	}
	if (func_118(uParam0, 2))
	{
		func_251(uParam1, 2);
	}
}

bool func_263(var uParam0, bool bParam1, bool bParam2)
{
	struct<28> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (MISC::_IS_STRING_SPACE(&(uParam0->f_16)))
	{
		StringCopy(&(uParam0->f_16), func_30(), 64);
	}
	if (func_278(bParam2))
	{
		if (!INVENTORY::_0xD80A8854DB5CFBA5(func_174(bParam2), uParam0, uParam0, 29))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_279(uParam0, 0) };
		Var0.f_16 = { uParam0->f_16 };
		Var0.f_25 = uParam0->f_27;
		Var0.f_26 = uParam0->f_28;
		Var0.f_24 = uParam0->f_25;
		Var0.f_27 = uParam0->f_24;
		if (func_280(joaat("UPDATE"), &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

bool func_264(var uParam0, bool bParam1, bool bParam2)
{
	struct<25> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (func_278(bParam2))
	{
		if (!INVENTORY::_0xD80A8854DB5CFBA5(func_174(bParam2), uParam0, uParam0, 24))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_279(uParam0, 0) };
		Var0.f_16 = { uParam0->f_15 };
		Var0.f_24 = uParam0->f_23;
		if (func_281(joaat("UPDATE"), &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

bool func_265(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return UIFEED::_0x59FA676177DBE4C9(iParam0) == 4;
}

struct<5> func_266(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_267(iParam0, joaat("CHARACTER"), func_103(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_267(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_113(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

void func_268(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::_0xDF631E4BCE1B1FC4(iParam0, joaat("HATS"), 0, 1);
	}
	else
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("HATS"), 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_269(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_270(int iParam0, int iParam1)
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

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = PED::_GET_PED_DAMAGE(iVar0);
	iVar2 = func_282(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!PED::_0x9E7738B291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iVar0, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar0))
		{
			iVar6 = func_283(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

void func_272(var uParam0, int iParam1)
{
	func_284(uParam0, iParam1);
}

void func_273(var uParam0, int iParam1)
{
	func_285(uParam0, iParam1);
}

void func_274(var uParam0)
{
	*uParam0 = { func_103() };
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
}

bool func_275(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_276()
{
	return Global_1102219.f_3672;
}

int func_277(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return 0;
		}
		if (!PED::_0x5102307CE88798EB(iVar0))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
			return 0;
		}
	}
	return NETWORK::_0xE525878A35B9EEBD(iParam0, iParam1);
}

bool func_278(bool bParam0)
{
	if (func_238() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_174(bParam0));
}

struct<16> func_279(var uParam0, bool bParam1)
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
		Var0.f_15 = func_286(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_103() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_280(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_287(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_289(func_288(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_290(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

int func_281(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_289(func_291(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_290(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

int func_282(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_GET_PED_QUALITY(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_283(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_03");
		default:
			break;
	}
	return 0;
}

void func_284(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_286(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(uParam0, iParam1);
}

bool func_287(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_292(uParam1->f_8, iParam0, uVar0, 2048) || func_292(uParam1->f_8, iParam0, uVar0, 32768)) || func_292(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_292(uParam1->f_8, iParam0, uVar0, 4) || func_292(uParam1->f_8, iParam0, uVar0, 256)) || func_292(uParam1->f_8, iParam0, uVar0, 65536)) || func_292(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_292(uParam1->f_8, iParam0, uVar0, 1) || func_292(uParam1->f_8, iParam0, uVar0, 8)) || func_292(uParam1->f_8, iParam0, uVar0, 65536)) || func_292(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_292(uParam1->f_8, iParam0, uVar0, 1) || func_292(uParam1->f_8, iParam0, uVar0, 16)) || func_292(uParam1->f_8, iParam0, uVar0, 2)) || func_292(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_292(uParam1->f_8, iParam0, uVar0, 8) || func_292(uParam1->f_8, iParam0, uVar0, 4096)) || func_292(uParam1->f_8, iParam0, uVar0, 256)) || func_292(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_288(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

int func_289(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_293(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_293(iParam1, 2, 0, 0);
	return -1;
}

int func_290(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_293(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_291(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

int func_292(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_148(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_293(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_294(iParam0, iParam1, iParam2, iParam3);
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_295(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

void func_295(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_296(&(uParam0->f_4));
}

void func_296(var uParam0)
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

