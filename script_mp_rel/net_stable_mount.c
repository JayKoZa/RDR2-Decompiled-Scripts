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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	struct<4> Local_21 = { 0, 0, 0, 0 } ;
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
	var uLocal_40 = 255;
	var uLocal_41 = 0;
	var uLocal_42 = 4;
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
	var uLocal_53 = 0;
	var uLocal_54 = 2;
	int iScriptParam_0 = 0;
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
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	Local_21.f_3 = BRAIN::_0x6818D1A194E29983();
	if (!ENTITY::DOES_ENTITY_EXIST(Local_21.f_3))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	func_1();
	while (!func_2(1, 1) && (ENTITY::DOES_ENTITY_EXIST(Local_21.f_3) && BRAIN::_0x6818D1A194E29983() == Local_21.f_3))
	{
		if (!func_3(&Local_21, &iScriptParam_0))
		{
			func_4(&Local_21, &iScriptParam_0);
			if (func_3(&Local_21, &iScriptParam_0))
			{
			}
			else
			{
				Jump @119; //curOff = 113
				Jump @127; //curOff = 116
				BUILTIN::WAIT(0);
			}
			func_5(&Local_21, &iScriptParam_0);
		}
	}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	BRAIN::_0xA6AC35DB4A7957A8(250);
}

int func_2(bool bParam0, bool bParam1)
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

int func_3(var uParam0, int* iParam1)
{
	if (func_2(1, 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return 1;
	}
	if (func_6(uParam0, 12))
	{
		return 1;
	}
	if (func_6(uParam0, 0))
	{
		return 1;
	}
	if (!func_6(uParam0, 2))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam1) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam1))
		{
			func_7(uParam0, 11);
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0, int* iParam1)
{
	uParam0->f_3 = BRAIN::_0x6818D1A194E29983();
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	else
	{
		uParam0->f_20 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	uParam0->f_19 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	switch (*uParam0)
	{
		case 0:
			func_8(uParam0, iParam1);
			break;
		case 1:
			func_9(uParam0, iParam1);
			break;
		case 2:
			func_10(uParam0, iParam1);
			break;
		case 3:
			func_11(uParam0, iParam1);
			break;
		case 4:
			func_12(uParam0, iParam1);
			break;
	}
	func_13(uParam0, iParam1);
	uParam0->f_2++;
	if (uParam0->f_2 > 5)
	{
		uParam0->f_2 = 0;
	}
}

void func_5(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
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
	bVar2 = true;
	if ((!&Global_1048579 || !Global_390004->f_3) || Global_390004->f_18.f_1)
	{
		bVar2 = false;
	}
	bVar3 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3);
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
		if (TASK::_0xEFC4303DDC6E60D3(iVar1) && TASK::_0xED1F514AF4732258(iVar1) == uParam0->f_18)
		{
			TASK::_0xED27560703F37258(iVar1);
		}
		if (PED::_0x5102307CE88798EB(uParam0->f_18))
		{
			PED::_0x3088634CF8C819CF(uParam0->f_18);
		}
		if (bVar3)
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 211, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 297, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 400, false);
		}
		if (PED::GET_MOUNT(iVar1) == uParam0->f_18 || func_14(iVar1, uParam0->f_18, 0))
		{
			bVar4 = false;
			if (!PLAYER::IS_PLAYER_DEAD(iVar0))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(iVar0) || PED::GET_PED_RESET_FLAG(iVar1, 311))
				{
					bVar4 = true;
				}
			}
			if ((bVar4 || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_18)) || PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 0, 1);
				PED::_REMOVE_PED_FROM_MOUNT(iVar1, true, false);
			}
			else
			{
				TASK::TASK_DISMOUNT_ANIMAL(iVar1, 1, 0, 0, 0, 0);
			}
		}
		if (NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			iVar5 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar5))
			{
				iVar5 = uParam0->f_19;
			}
			if (NETWORK::_0x255A5EF65EDA9167(iVar5) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar5))
			{
				iVar6 = iVar0;
				iVar7 = iVar5;
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1269869)[iVar6 /*20*/])->f_14), iVar7))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1269869)[iVar6 /*20*/])->f_14), iVar7);
				}
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1269869)[iVar6 /*20*/])->f_15), iVar7))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1269869)[iVar6 /*20*/])->f_15), iVar7);
				}
			}
		}
		if (!bVar3)
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
		bVar8 = ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_3);
		if (bVar8)
		{
			if (NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				iVar9 = PLAYER::_0x7C803BDC8343228D(uParam0->f_20);
				if (!NETWORK::_0x255A5EF65EDA9167(iVar9))
				{
					iVar9 = uParam0->f_19;
				}
				if (NETWORK::_0x255A5EF65EDA9167(iVar9) && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar9))
				{
					iVar10 = iVar0;
					iVar11 = iVar9;
					if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1269869)[iVar10 /*20*/])->f_14), iVar11))
					{
						SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1269869)[iVar10 /*20*/])->f_14), iVar11);
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
		if (PLAYER::_0xF49F14462F0AE27C(iVar0) == uParam0->f_18)
		{
			func_16();
			func_17(uParam0->f_18, &(iParam1->f_7));
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
		}
		if (iParam1->f_11 == Global_1270530->f_609.f_46)
		{
			if (PLAYER::_0xB9050A97594C8832(iVar0) == uParam0->f_20)
			{
				if (!&Global_1903929->f_485[95])
				{
					PLAYER::_0xD0E02AA618020D17(iVar0, 0);
				}
				func_22(1);
			}
		}
	}
	if (Global_1903929->f_485[95] && PLAYER::_0xB9050A97594C8832(iVar0) == uParam0->f_20)
	{
		if (bVar3)
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (func_6(uParam0, 6))
	{
		iVar12 = 0;
		while (iVar12 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_21[iVar12])))
			{
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(uParam0->f_21[iVar12])))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(&(uParam0->f_21[iVar12])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(uParam0->f_21[iVar12]), true, true);
				}
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(uParam0->f_21[iVar12])))
				{
				}
				else if (func_6(uParam0, 11))
				{
					PED::DELETE_PED(uParam0->f_21[iVar12]);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_21[iVar12]);
				}
			}
			iVar12++;
		}
	}
	if (!bVar3)
	{
		func_23(uParam0, func_6(uParam0, 11));
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, false);
	}
	if (!bVar3)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	if (func_6(uParam0, 5))
	{
		if (func_6(uParam0, 2))
		{
			Global_1903929->f_129 = 0;
			Global_1903929->f_130 = 0;
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, false);
		}
		func_23(uParam0, func_6(uParam0, 11));
		ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, 1);
		if (func_6(uParam0, 11) || func_6(uParam0, 17))
		{
			iVar13 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, 0);
			iVar14 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar13))
			{
				if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
				{
					PED::DELETE_PED(&(uParam0->f_18));
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar14))
			{
				if (iVar14 == PLAYER::GET_PLAYER_PED(iVar0))
				{
					PED::_REMOVE_PED_FROM_MOUNT(iVar14, true, false);
					if (!PED::_0x8D9BFCE3352DE47F(uParam0->f_18))
					{
						if (bVar2)
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
				if (bVar2)
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
			bVar15 = PED::IS_PED_DEAD_OR_DYING(uParam0->f_18, true);
			bVar16 = TASK::IS_PED_IN_WRITHE(uParam0->f_18);
			PED::SET_PED_RESET_FLAG(uParam0->f_18, 105, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_18, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 288, true);
			if (!bVar15 && !bVar16)
			{
				iVar17 = PLAYER::GET_PLAYER_PED(PLAYER::_0xAD03B03737CE6810(uParam0->f_18));
				if ((!ENTITY::DOES_ENTITY_EXIST(iVar17) || ENTITY::IS_ENTITY_DEAD(iVar17)) || func_24(ENTITY::GET_ENTITY_COORDS(iVar17, true, false)))
				{
					iVar17 = uParam0->f_18;
				}
				TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_18, ENTITY::GET_ENTITY_COORDS(iVar17, true, false), 4, 5767424, -1082130432, -1, 0);
				AITRANSPORT::_0xDD0660C997DE94FD(uParam0->f_3, 0);
			}
			if (bVar16)
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
		VEHICLE::_0xC399CC89FBA05DA0(uParam0->f_20, 1);
		if (func_6(uParam0, 11))
		{
			VEHICLE::_0x35DC1877312FBA0F(&(uParam0->f_20));
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_20));
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

void func_8(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;

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
	if (func_25(&(uParam0->f_28)))
	{
		func_26(&(uParam0->f_28));
	}
	iVar1 = func_27(iVar0);
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
	iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	uParam0->f_19 = iVar3;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(iParam1->f_7)))
	{
		func_7(uParam0, 1);
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	else
	{
		uParam0->f_20 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	}
	if ((!NETWORK::_0x255A5EF65EDA9167(iVar3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar3)) || iVar3 != PLAYER::PLAYER_ID())
	{
		switch (uParam0->f_4)
		{
			case 0:
			case 1:
				func_7(uParam0, 5);
				if (MISC::COMPARE_STRINGS(&(iParam1->f_12), func_28(), false, -1) == 0)
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_30(func_29(iVar0))));
				}
				else if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(iParam1->f_12)) > 0 && NETWORK::_0xF23A6D6C11D8EC15(iParam1))
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(iParam1->f_12));
				}
				else if (iVar0 == func_31())
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_30(func_32())));
				}
				func_7(uParam0, 21);
				break;
			case 2:
				func_7(uParam0, 6);
				func_33(uParam0, iVar2, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1));
				break;
			case 3:
				func_7(uParam0, 6);
				func_7(uParam0, 21);
				break;
			default:
				func_7(uParam0, 21);
				break;
		}
		func_34(uParam0, 4);
		return;
	}
	if (!func_35(&(iParam1->f_7), &uVar4))
	{
		if (func_36(&(iParam1->f_7)))
		{
			func_37(0, 1);
		}
	}
	if (!func_6(uParam0, 1))
	{
		if (iVar1 == 0 || iVar1 == 1)
		{
			if (!func_38(&(iParam1->f_7), uParam0->f_4, 1, 1))
			{
				func_7(uParam0, 0);
				return;
			}
		}
		iParam1->f_7 = { *Global_1903929 };
		uParam0->f_4 = Global_1903929->f_10;
		Global_1270530->f_11.f_553 = { func_39(Global_1903929, 1) };
	}
	if (uParam0->f_4 == -1)
	{
		func_7(uParam0, 0);
		return;
	}
	func_7(uParam0, 2);
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1988458112))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, false);
		func_40(uParam0, 23);
	}
	uParam0->f_17 = func_41(uParam0->f_4);
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
					iVar6 = 1;
				}
				else
				{
					func_42(uParam0->f_18, Global_1903929->f_27);
					iVar6 = func_43(uParam0->f_18);
				}
				PED::_0xA69899995997A63B(uParam0->f_18, iVar6);
			}
			uParam0->f_18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			func_44(uParam0->f_3, 0);
			func_7(uParam0, 5);
			func_34(uParam0, 1);
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1270530->f_11.f_553)) > 0)
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, &(Global_1270530->f_11.f_553), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(Global_1270530->f_11.f_553));
			}
			else if (iVar0 == func_31())
			{
				uParam0->f_5 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_30(func_32())), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, MISC::_CREATE_VAR_STRING(2, func_30(func_32())));
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
				HUD::_SET_MP_GAMER_TAG_TOP_ICON(uParam0->f_5, 130495496);
			}
			HUD::_SET_MP_GAMER_TAG_COLOUR(uParam0->f_5, 830499243);
			HUD::_SET_MP_GAMER_TAG_VISIBILITY(uParam0->f_5, uParam0->f_6);
			if (func_38(&(iParam1->f_7), uParam0->f_4, 0, 0))
			{
				if (!func_45(Global_1903929, &(uParam0->f_33)))
				{
				}
			}
			iVar5 = NETWORK::PED_TO_NET(uParam0->f_18);
			func_46();
			break;
		case 2:
			func_33(uParam0, iVar2, PLAYER::PLAYER_ID());
			func_7(uParam0, 6);
			func_34(uParam0, 2);
			iVar5 = NETWORK::_0xF260AF6F43953316(uParam0->f_3);
			break;
		case 3:
			func_7(uParam0, 21);
			func_7(uParam0, 6);
			func_34(uParam0, 3);
			iVar5 = NETWORK::_0xF260AF6F43953316(uParam0->f_3);
			break;
		default:
			func_7(uParam0, 0);
			break;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar5))
	{
	}
	else
	{
		NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iVar5, PLAYER::PLAYER_ID(), true);
	}
}

void func_9(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		func_47(uParam0);
		return;
	}
	func_48(uParam0);
	if (PLAYER::_0xF49F14462F0AE27C(iVar0) == uParam0->f_18)
	{
		func_7(uParam0, 7);
		if (!func_6(uParam0, 22))
		{
			func_49();
			if (!func_50())
			{
			}
			else
			{
				func_51(&(Global_1903929->f_131));
				Global_1903929->f_129 = 1;
				Global_1903929->f_130 = 0;
				func_7(uParam0, 22);
			}
		}
		if (&Global_1903929->f_485[43])
		{
			func_40(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_52(2, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_40(uParam0, 8);
		}
		((*Global_1269869)[iVar1 /*20*/])->f_1 |= 1;
		if (func_6(uParam0, 20))
		{
			func_38(&(iParam1->f_7), 0, 0, 0);
			sVar2 = func_53(func_39(Global_1903929, 1));
			if (MISC::COMPARE_STRINGS(sVar2, &(Global_1270530->f_11.f_553), true, -1) > 0)
			{
				HUD::SET_MP_GAMER_TAG_NAME(uParam0->f_5, &(Global_1903929->f_12));
				PED::_SET_PED_PROMPT_NAME(uParam0->f_18, &(Global_1903929->f_12));
				Global_1270530->f_11.f_553 = { Global_1903929->f_12 };
				func_40(uParam0, 20);
			}
		}
		if (func_52(4096, 255))
		{
			func_20(4096);
			func_7(uParam0, 20);
		}
		func_54(uParam0);
		func_55(uParam0);
		func_56(uParam0, iParam1);
		func_58(uParam0, uParam0->f_18, 8192, 16384, func_57(92));
	}
	else
	{
		func_40(uParam0, 7);
		func_40(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_40(uParam0, 4);
		}
	}
	func_59(uParam0, iParam1);
	func_60(uParam0);
	func_61(uParam0);
	func_62(uParam0);
	func_63(uParam0);
	func_64(uParam0, iVar1);
	func_65(uParam0, iVar1);
	func_66(uParam0, iVar1);
	func_67(uParam0, iParam1, iVar1);
	func_68(uParam0, iParam1, iVar1);
	func_69(uParam0, iVar1);
	func_70(uParam0);
}

void func_10(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iParam1->f_11 == Global_1270530->f_609.f_46)
	{
		PLAYER::_0xD0E02AA618020D17(PLAYER::PLAYER_ID(), uParam0->f_20);
		if (&Global_1903929->f_485[95])
		{
			BRAIN::_0xA6AC35DB4A7957A8(9999);
		}
		else
		{
			BRAIN::_0xA6AC35DB4A7957A8(250);
		}
		func_7(uParam0, 7);
		if (&Global_1903929->f_485[91])
		{
			func_40(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_71(8, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_40(uParam0, 8);
		}
		((*Global_1269869)[iVar1 /*20*/])->f_2 |= 1;
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20) && VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_20))
		{
			VEHICLE::_0x226C6A4E3346D288(uParam0->f_20, &(Global_1903929->f_485[97]));
			VEHICLE::_0x6090A031C69F384E(uParam0->f_20, &(Global_1903929->f_485[97]));
		}
		func_58(uParam0, uParam0->f_20, 32768, 65536, func_57(92));
	}
	else
	{
		func_40(uParam0, 7);
		func_40(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_40(uParam0, 4);
		}
	}
	func_72(uParam0);
	func_33(uParam0, iVar0, PLAYER::PLAYER_ID());
	func_63(uParam0);
	func_67(uParam0, iParam1, iVar1);
	func_68(uParam0, iParam1, iVar1);
	func_73(uParam0);
}

void func_11(var uParam0, int* iParam1)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iParam1->f_11 == Global_1270530->f_609.f_46)
	{
		PLAYER::_0xD0E02AA618020D17(PLAYER::PLAYER_ID(), uParam0->f_20);
		func_7(uParam0, 7);
		if (&Global_1903929->f_485[91])
		{
			func_40(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_71(8, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_40(uParam0, 8);
		}
		((*Global_1269869)[iVar0 /*20*/])->f_2 |= 1;
		func_58(uParam0, uParam0->f_20, 32768, 65536, func_57(92));
	}
	else
	{
		func_40(uParam0, 7);
		func_40(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_40(uParam0, 4);
		}
	}
	func_63(uParam0);
	func_67(uParam0, iParam1, iVar0);
	func_68(uParam0, iParam1, iVar0);
	func_74(uParam0);
}

void func_12(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	iVar1 = iVar0;
	if (iVar0 != uParam0->f_19)
	{
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam1))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	switch (func_75(uParam0, 1))
	{
		case 1:
			return;
		case 2:
			func_7(uParam0, 0);
			return;
		default:
			break;
	}
	if (!Global_1070356->f_5)
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
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
		func_33(uParam0, PLAYER::PLAYER_PED_ID(), iVar0);
	}
	func_64(uParam0, iVar1);
	if (uParam0->f_2 != 0)
	{
		return;
	}
	func_65(uParam0, iVar1);
	func_67(uParam0, iParam1, iVar1);
	func_68(uParam0, iParam1, iVar1);
	func_69(uParam0, iVar1);
	if (!func_6(uParam0, 18))
	{
		if (uParam0->f_18 != PLAYER::_0xF49F14462F0AE27C(iVar0))
		{
			if (!func_25(&(uParam0->f_10)))
			{
				func_76(&(uParam0->f_10));
			}
			fVar2 = func_77(&(uParam0->f_10));
			if (fVar2 > 5f)
			{
				func_7(uParam0, 18);
			}
		}
		else if (func_25(&(uParam0->f_10)))
		{
			func_26(&(uParam0->f_10));
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
			if (uParam0->f_18 == PLAYER::_0xF49F14462F0AE27C(iVar0))
			{
				func_61(uParam0);
				func_59(uParam0, iParam1);
				func_60(uParam0);
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
			{
				uParam0->f_20 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (func_71(1, iVar1) && ((*Global_1269869)[iVar1 /*20*/])->f_5 == iParam1->f_11)
			{
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			func_72(uParam0);
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
			{
				uParam0->f_20 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
			}
			if (func_71(1, iVar1) && ((*Global_1269869)[iVar1 /*20*/])->f_5 == iParam1->f_11)
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

void func_13(var uParam0, int* iParam1)
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
				func_78(uParam0, iParam1, iVar0);
				break;
		}
		iVar0++;
	}
}

int func_14(int iParam0, int iParam1, bool bParam2)
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
	return 0;
}

int func_15(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_1270530->f_11.f_358, iVar1))
		{
			(Global_1270530->f_11.f_360[iVar1 /*6*/])->f_1 = iParam0;
			(Global_1270530->f_11.f_360[iVar1 /*6*/])->f_2 = uParam1;
			Global_1270530->f_11.f_360[iVar1 /*6*/] = bParam2;
			func_76(&((Global_1270530->f_11.f_360[iVar1 /*6*/])->f_3));
			MISC::SET_BIT(&(Global_1270530->f_11.f_358), iVar1);
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_16()
{
	if (Global_1270530->f_1467.f_4 == 1)
	{
		return;
	}
	Global_1270530->f_1467.f_4 = 1;
}

void func_17(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_80(func_79(), 0, 0))
	{
		return;
	}
	if (!func_81(iParam0))
	{
		return;
	}
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::_0xAD03B03737CE6810(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (iVar0 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (&Global_1903929->f_485[8])
	{
		return;
	}
	func_82(iParam0, 0, 0);
	if (!func_38(uParam1, 0, 0, 0))
	{
		return;
	}
	func_83(Global_1903929, 0, 1);
	func_84();
	iVar1 = func_85(uParam1, -1585141069, 0);
	bVar2 = iVar1 > 0;
	if (bVar2)
	{
		func_86(18, 0);
		func_87(*uParam1, 0, 0);
	}
	else
	{
		func_86(17, 0);
	}
}

void func_18()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_0xF49F14462F0AE27C(iVar0)))
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
	if (ENTITY::DOES_ENTITY_EXIST(Global_1270530->f_11.f_195))
	{
		Global_1270530->f_11.f_196 = Global_1270530->f_11.f_195;
	}
	Global_1270530->f_11.f_195 = iParam0;
	Global_1270530->f_11.f_197 = Global_1275573->f_21 + 35;
}

void func_20(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_1269869)[iVar0 /*20*/])->f_1 = (((*Global_1269869)[iVar0 /*20*/])->f_1 - (((*Global_1269869)[iVar0 /*20*/])->f_1 && iParam0));
}

void func_21(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (((*Global_1269869)[iVar1 /*20*/])->f_6 != bParam0)
	{
		((*Global_1269869)[iVar1 /*20*/])->f_6 = bParam0;
		((*Global_1269869)[iVar1 /*20*/])->f_7 = 0;
		if (bParam0)
		{
			func_76(&(Global_1270530->f_11.f_594));
		}
		else
		{
			func_26(&(Global_1270530->f_11.f_594));
		}
	}
}

void func_22(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_1269869)[iVar0 /*20*/])->f_2 = (((*Global_1269869)[iVar0 /*20*/])->f_2 - (((*Global_1269869)[iVar0 /*20*/])->f_2 && iParam0));
}

void func_23(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_88(iVar0);
		if (PED::_0x608BC6A6AACD5036(&Var2, uParam0->f_18, iVar1, 0))
		{
			if (func_6(uParam0, 2))
			{
				if (func_89(Var2.f_3))
				{
					func_90(iVar0);
				}
			}
			func_91(Var2.f_3, iVar0, bParam1);
		}
		else if (func_6(uParam0, 2))
		{
			if (func_92(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST((Global_1270530->f_1002.f_245[iVar0 /*4*/])->f_3))
				{
					func_91((Global_1270530->f_1002.f_245[iVar0 /*4*/])->f_3, iVar0, bParam1);
				}
				func_90(iVar0);
			}
		}
		iVar0++;
	}
}

int func_24(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_25(var uParam0)
{
	return func_93(*uParam0, 1);
}

void func_26(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;

	func_94();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		Global_1903929->f_124.f_1 = 0;
		Global_1903929->f_124.f_2 = -571823039;
		Global_1903929->f_124.f_3 = func_95(iVar1);
		Global_1903929->f_124.f_4 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Global_1903929->f_124.f_1), &(Global_1903929->f_124)))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

char* func_28()
{
	return "UNNAMED_HORSE";
}

int func_29(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277 /* GXTEntry: "Scrawny Nag" */;
	}
	switch (iParam0)
	{
		case joaat("a_c_horse_americanpaint_overo"):
			return -974145463 /* GXTEntry: "American Paint - Overo Coat" */;
		case joaat("a_c_horse_americanpaint_tobiano"):
			return 1432602132 /* GXTEntry: "American Paint - Tobiano Coat" */;
		case 1792770814:
			return 92296905 /* GXTEntry: "American Paint - Splashed White Coat" */;
		case -1963397600:
			return -842044823 /* GXTEntry: "American Paint - Grey Overo Coat" */;
		case -1250098797:
			return 1371398552 /* GXTEntry: "American Standardbred - Black Coat" */;
		case -318278790:
			return -745453539 /* GXTEntry: "American Standardbred - Buckskin Coat" */;
		case 55096099:
			return 1583029039 /* GXTEntry: "American Standardbred - Palomino Dapple Coat" */;
		case -458397856:
			return -783061276 /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */;
		case -444610976:
			return -1322521536 /* GXTEntry: "Andalusian - Dark Bay Coat" */;
		case 746627200:
			return 728055838 /* GXTEntry: "Andalusian - Rose Grey Coat" */;
		case 705691988:
			return 1100711204 /* GXTEntry: "Andalusian - Perlino Coat" */;
		case joaat("a_c_horse_appaloosa_blanket"):
			return -1782334639 /* GXTEntry: "Appaloosa - Blanket Coat" */;
		case -1554827654:
			return -1181052732 /* GXTEntry: "Appaloosa - Leopard Blanket Coat" */;
		case -1029277326:
			return -179102320 /* GXTEntry: "Appaloosa - Brown Leopard Coat" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1266863668 /* GXTEntry: "Appaloosa - Leopard Coat" */;
		case joaat("a_c_horse_arabian_black"):
			return -2078767648 /* GXTEntry: "Arabian - Black Coat" */;
		case -403470324:
			return -852553462 /* GXTEntry: "Arabian - Rose Grey Bay Coat" */;
		case joaat("a_c_horse_arabian_white"):
			return -80004868 /* GXTEntry: "Arabian - White Coat" */;
		case joaat("a_c_horse_ardennes_bayroan"):
			return 1813208211 /* GXTEntry: "Ardennes - Bay Roan Coat" */;
		case -635239558:
			return 836323303 /* GXTEntry: "Ardennes - Strawberry Roan Coat" */;
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return 153881023 /* GXTEntry: "Ardennes - Iron Grey Roan Coat" */;
		case joaat("a_c_horse_belgian_blondchestnut"):
			return -1256798240 /* GXTEntry: "Belgian Draft - Blond Chestnut Coat" */;
		case joaat("a_c_horse_belgian_mealychestnut"):
			return 2118089359;
		case 1593035738:
			return -1537586382 /* GXTEntry: "Dutch Warmblood - Sooty Buckskin Coat" */;
		case 861505058:
			return 1440692746 /* GXTEntry: "Dutch Warmblood - Seal Brown Coat" */;
		case 687445866:
			return 697143532 /* GXTEntry: "Dutch Warmblood - Chocolate Roan Coat" */;
		case 1705182311:
			return 281128160 /* GXTEntry: "Hungarian Halfbred - Flaxen Chestnut Coat" */;
		case -78273782:
			return 1854519167 /* GXTEntry: "Hungarian Halfbred - Piebald Tobiano Coat" */;
		case -819697512:
			return -1376299681 /* GXTEntry: "Hungarian Halfbred - Dark Dapple Grey Coat" */;
		case -247265944:
			return -1955947684;
		case -1265030920:
			return 1361788230 /* GXTEntry: "Kentucky Saddler - Chestnut Pinto Coat" */;
		case 2024948086:
			return 1974379573 /* GXTEntry: "Kentucky Saddler - Grey Coat" */;
		case 1696286663:
			return 545109431 /* GXTEntry: "Kentucky Saddler - Silver Bay Coat" */;
		case -1342159303:
			return 1275638003 /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */;
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return 2083573823 /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */;
		case 2030804811:
			return 1235275977 /* GXTEntry: "Morgan - Bay Coat" */;
		case 1230359523:
			return 892601357 /* GXTEntry: "Morgan - Bay Roan Coat" */;
		case -1038436471:
			return 1224695367 /* GXTEntry: "Morgan - Flaxen Chestnut Coat" */;
		case 96930969:
			return 648301150 /* GXTEntry: "Morgan - Palomino Coat" */;
		case -1180427609:
			return -1597490733 /* GXTEntry: "Mustang - Grullo Dun Coat" */;
		case joaat("a_c_horse_mustang_wildbay"):
			return 2000205872 /* GXTEntry: "Mustang - Wild Bay Coat" */;
		case 43825738:
			return -1428527735 /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */;
		case joaat("a_c_horse_nokota_blueroan"):
			return 170010697 /* GXTEntry: "Nokota - Blue Roan Coat" */;
		case -1261814606:
			return -742726637 /* GXTEntry: "Nokota - White Roan Coat" */;
		case 107013696:
			return -1714171692 /* GXTEntry: "Nokota - Reverse Dapple Roan Coat" */;
		case 1066034872:
			return -103101636 /* GXTEntry: "Shire - Dark Bay Coat" */;
		case 36009259:
			return -1999094324 /* GXTEntry: "Shire - Light Grey Coat" */;
		case -1599683008:
			return 1724200240 /* GXTEntry: "Suffolk Punch - Sorrel Coat" */;
		case -1693870200:
			return 237935328 /* GXTEntry: "Suffolk Punch - Red Chestnut Coat" */;
		case 1072019803:
			return 120848852 /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */;
		case 1074477367:
			return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
		case -85890205:
			return -887362763 /* GXTEntry: "Tennessee Walker - Dapple Bay Coat" */;
		case -727455979:
			return -847714194 /* GXTEntry: "Tennessee Walker - Red Roan Coat" */;
		case -1667789645:
			return 1756765331 /* GXTEntry: "Tennessee Walker - Flaxen Roan Coat" */;
		case -1924405794:
			return -813071670 /* GXTEntry: "Thoroughbred - Blood Bay Coat" */;
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return -1900569233 /* GXTEntry: "Thoroughbred - Dapple Grey Coat" */;
		case -526169133:
			return 1688250187 /* GXTEntry: "Thoroughbred - Brindle Coat" */;
		case 2120708491:
			return -1262715164 /* GXTEntry: "Thoroughbred - Black Chestnut Coat" */;
		case 900144280:
			return 2010625508 /* GXTEntry: "Thoroughbred - Reverse Dapple Black Coat" */;
		case 1133837220:
			return -136225010 /* GXTEntry: "Turkoman - Dark Bay Coat" */;
		case joaat("a_c_horse_turkoman_gold"):
			return -225011104 /* GXTEntry: "Turkoman - Gold Coat" */;
		case -1604180548:
			return -1882436593 /* GXTEntry: "Turkoman - Silver Coat" */;
		case -683592019:
			return -757978903 /* GXTEntry: "Breton - Red Roan Coat" */;
		case 337109765:
			return 1909854428 /* GXTEntry: "Breton - Sorrel Coat" */;
		case -619132373:
			return 1592694494 /* GXTEntry: "Breton - Grullo Dun Coat" */;
		case 1544366970:
			return 981469777 /* GXTEntry: "Breton - Seal Brown Coat" */;
		case -1441144351:
			return 1064693514 /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */;
		case -1717674545:
			return -1365665739 /* GXTEntry: "Breton - Steel Grey Coat" */;
		case 1825358734:
			return 1577022605 /* GXTEntry: "Criollo - Blue Roan Overo Coat" */;
		case 1138427579:
			return 381495209 /* GXTEntry: "Criollo - Dun Coat" */;
		case -1720251851:
			return 3032834 /* GXTEntry: "Criollo - Bay Brindle Coat" */;
		case 506887890:
			return -1722101672 /* GXTEntry: "Criollo - Sorrel Overo Coat" */;
		case 766293155:
			return -189605757 /* GXTEntry: "Criollo - Bay Frame Overo Coat" */;
		case 2147082926:
			return 863391233 /* GXTEntry: "Criollo - Marble Sabino Coat" */;
		case -1616287563:
			return 885568364 /* GXTEntry: "Kladruber - Black Coat" */;
		case -127412252:
			return -1540355548 /* GXTEntry: "Kladruber - White Coat" */;
		case -1881155818:
			return -601560591 /* GXTEntry: "Kladruber - Cremello Coat" */;
		case -955237712:
			return -370362766 /* GXTEntry: "Kladruber - Grey Coat" */;
		case -647020346:
			return -1698261864 /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */;
		case -1846319726:
			return -670301166 /* GXTEntry: "Kladruber - Silver Coat" */;
		case 1007570567:
			return -302057902;
		case 1029339151:
			return 1257620801;
		case -1424767799:
			return 821735821;
		case -217135948:
			return -769035812;
		case -156439156:
			return -1824684932;
		case 1344011125:
			return 1589592948;
		case joaat("a_c_donkey_01"):
			return -1331210307 /* GXTEntry: "Donkey" */;
		case joaat("a_c_horsemule_01"):
			return 122449722 /* GXTEntry: "Mule" */;
		case joaat("a_c_horsemulepainted_01"):
			return -1784502482 /* GXTEntry: "Mule - Painted" */;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104 /* GXTEntry: "Appaloosa - Black Snowflake" */;
		case 84224102:
			return -1427377767 /* GXTEntry: "Arabian - Grey Coat" */;
		case 1496579364:
			return -2055655009 /* GXTEntry: "Arabian - Red Chestnut Coat" */;
		case -1896838685:
			return -1293672675 /* GXTEntry: "Hungarian Halfbred - Liver Chestnut Coat" */;
		case -420599285:
			return -1179079660 /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */;
		case 478986344:
			return 805526368 /* GXTEntry: "Mustang - Golden Dun Coat" */;
		case 446670976:
			return 1342496140 /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */;
		case joaat("a_c_horse_shire_ravenblack"):
			return -126555855 /* GXTEntry: "Shire - Raven Black Coat" */;
		case 549900435:
			return 294243421 /* GXTEntry: "Dutch Warmblood - Cremello Gold Coat" */;
		case -2063289686:
			return -997197050 /* GXTEntry: "Thoroughbred - Seal Brown Coat" */;
		case 917402668:
			return -235714362 /* GXTEntry: "Appaloosa - Blanket Coat" */;
		case -914712122:
			return -1678164 /* GXTEntry: "Nokota - Blue Roan Coat" */;
		case -598917269:
			return -977833913 /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */;
		case joaat("a_c_horse_winter02_01"):
			return 1589164943 /* GXTEntry: "Thoroughbred - Silver Bay Coat" */;
		default:
			break;
	}
	return 0;
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case -974145463: /* GXTEntry: "American Paint - Overo Coat" */
		case -842044823: /* GXTEntry: "American Paint - Grey Overo Coat" */
		case 92296905: /* GXTEntry: "American Paint - Splashed White Coat" */
		case 1432602132: /* GXTEntry: "American Paint - Tobiano Coat" */
			return "BREED_AMERICANPAINT";
		case -1943445834:
		case -783061276: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
		case -745453539: /* GXTEntry: "American Standardbred - Buckskin Coat" */
		case 1371398552: /* GXTEntry: "American Standardbred - Black Coat" */
		case 1583029039: /* GXTEntry: "American Standardbred - Palomino Dapple Coat" */
			return "BREED_AMERICANSTANDARDBRED";
		case -1322521536: /* GXTEntry: "Andalusian - Dark Bay Coat" */
		case 728055838: /* GXTEntry: "Andalusian - Rose Grey Coat" */
		case 1100711204: /* GXTEntry: "Andalusian - Perlino Coat" */
			return "BREED_ANDALUSIAN";
		case -1782334639: /* GXTEntry: "Appaloosa - Blanket Coat" */
		case -1266863668: /* GXTEntry: "Appaloosa - Leopard Coat" */
		case -1181052732: /* GXTEntry: "Appaloosa - Leopard Blanket Coat" */
		case -635244104: /* GXTEntry: "Appaloosa - Black Snowflake" */
		case -179102320: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "BREED_APPALOOSA";
		case -2078767648: /* GXTEntry: "Arabian - Black Coat" */
		case -2055655009: /* GXTEntry: "Arabian - Red Chestnut Coat" */
		case -1427377767: /* GXTEntry: "Arabian - Grey Coat" */
		case -852553462: /* GXTEntry: "Arabian - Rose Grey Bay Coat" */
		case -80004868: /* GXTEntry: "Arabian - White Coat" */
			return "BREED_ARABIAN";
		case 153881023: /* GXTEntry: "Ardennes - Iron Grey Roan Coat" */
		case 836323303: /* GXTEntry: "Ardennes - Strawberry Roan Coat" */
		case 1813208211: /* GXTEntry: "Ardennes - Bay Roan Coat" */
			return "BREED_ARDENNES";
		case -1256798240: /* GXTEntry: "Belgian Draft - Blond Chestnut Coat" */
		case 2118089359:
			return "BREED_BELGIAN";
		case -1537586382: /* GXTEntry: "Dutch Warmblood - Sooty Buckskin Coat" */
		case 697143532: /* GXTEntry: "Dutch Warmblood - Chocolate Roan Coat" */
		case 1440692746: /* GXTEntry: "Dutch Warmblood - Seal Brown Coat" */
			return "BREED_DUTCHWARMBLOOD";
		case -1376299681: /* GXTEntry: "Hungarian Halfbred - Dark Dapple Grey Coat" */
		case -1293672675: /* GXTEntry: "Hungarian Halfbred - Liver Chestnut Coat" */
		case 281128160: /* GXTEntry: "Hungarian Halfbred - Flaxen Chestnut Coat" */
		case 1854519167: /* GXTEntry: "Hungarian Halfbred - Piebald Tobiano Coat" */
			return "BREED_HUNGARIANHALFBRED";
		case -1955947684:
		case 545109431: /* GXTEntry: "Kentucky Saddler - Silver Bay Coat" */
		case 1361788230: /* GXTEntry: "Kentucky Saddler - Chestnut Pinto Coat" */
		case 1974379573: /* GXTEntry: "Kentucky Saddler - Grey Coat" */
			return "BREED_KENTUCKYSADDLE";
		case -1179079660: /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */
		case 1275638003: /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */
		case 2083573823: /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */
			return "BREED_MISSOURIFOXTROTTER";
		case 648301150: /* GXTEntry: "Morgan - Palomino Coat" */
		case 892601357: /* GXTEntry: "Morgan - Bay Roan Coat" */
		case 1224695367: /* GXTEntry: "Morgan - Flaxen Chestnut Coat" */
		case 1235275977: /* GXTEntry: "Morgan - Bay Coat" */
			return "BREED_MORGAN";
		case -1597490733: /* GXTEntry: "Mustang - Grullo Dun Coat" */
		case -1428527735: /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */
		case 805526368: /* GXTEntry: "Mustang - Golden Dun Coat" */
		case 2000205872: /* GXTEntry: "Mustang - Wild Bay Coat" */
			return "BREED_MUSTANG";
		case -1714171692: /* GXTEntry: "Nokota - Reverse Dapple Roan Coat" */
		case -742726637: /* GXTEntry: "Nokota - White Roan Coat" */
		case 170010697: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return "BREED_NOKOTA";
		case -1999094324: /* GXTEntry: "Shire - Light Grey Coat" */
		case -126555855: /* GXTEntry: "Shire - Raven Black Coat" */
		case -103101636: /* GXTEntry: "Shire - Dark Bay Coat" */
			return "BREED_SHIRE";
		case 237935328: /* GXTEntry: "Suffolk Punch - Red Chestnut Coat" */
		case 1724200240: /* GXTEntry: "Suffolk Punch - Sorrel Coat" */
			return "BREED_SUFFOLKPUNCH";
		case -887362763: /* GXTEntry: "Tennessee Walker - Dapple Bay Coat" */
		case -868094182: /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		case -847714194: /* GXTEntry: "Tennessee Walker - Red Roan Coat" */
		case 120848852: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
		case 1342496140: /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */
		case 1756765331: /* GXTEntry: "Tennessee Walker - Flaxen Roan Coat" */
			return "BREED_TENNESSEEWALKER";
		case -1900569233: /* GXTEntry: "Thoroughbred - Dapple Grey Coat" */
		case -1262715164: /* GXTEntry: "Thoroughbred - Black Chestnut Coat" */
		case -813071670: /* GXTEntry: "Thoroughbred - Blood Bay Coat" */
		case 1688250187: /* GXTEntry: "Thoroughbred - Brindle Coat" */
		case 2010625508: /* GXTEntry: "Thoroughbred - Reverse Dapple Black Coat" */
			return "BREED_THOROUGHBRED";
		case -1882436593: /* GXTEntry: "Turkoman - Silver Coat" */
		case -225011104: /* GXTEntry: "Turkoman - Gold Coat" */
		case -136225010: /* GXTEntry: "Turkoman - Dark Bay Coat" */
			return "BREED_TURKOMAN";
		case -1365665739: /* GXTEntry: "Breton - Steel Grey Coat" */
		case -757978903: /* GXTEntry: "Breton - Red Roan Coat" */
		case 981469777: /* GXTEntry: "Breton - Seal Brown Coat" */
		case 1064693514: /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */
		case 1592694494: /* GXTEntry: "Breton - Grullo Dun Coat" */
		case 1909854428: /* GXTEntry: "Breton - Sorrel Coat" */
			return "BREED_BRETON";
		case -1722101672: /* GXTEntry: "Criollo - Sorrel Overo Coat" */
		case -189605757: /* GXTEntry: "Criollo - Bay Frame Overo Coat" */
		case 3032834: /* GXTEntry: "Criollo - Bay Brindle Coat" */
		case 381495209: /* GXTEntry: "Criollo - Dun Coat" */
		case 863391233: /* GXTEntry: "Criollo - Marble Sabino Coat" */
		case 1577022605: /* GXTEntry: "Criollo - Blue Roan Overo Coat" */
			return "BREED_CRIOLLO";
		case -1698261864: /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */
		case -1540355548: /* GXTEntry: "Kladruber - White Coat" */
		case -670301166: /* GXTEntry: "Kladruber - Silver Coat" */
		case -601560591: /* GXTEntry: "Kladruber - Cremello Coat" */
		case -370362766: /* GXTEntry: "Kladruber - Grey Coat" */
		case 885568364: /* GXTEntry: "Kladruber - Black Coat" */
			return "BREED_KLADRUBER";
		case -1824684932:
		case -769035812:
		case -302057902:
		case 821735821:
		case 1257620801:
		case 1589592948:
			return "BREED_NORFOLKROADSTER";
		case -1331210307: /* GXTEntry: "Donkey" */
			return "BREED_DONKEY";
		case -1784502482: /* GXTEntry: "Mule - Painted" */
		case 122449722: /* GXTEntry: "Mule" */
			return "BREED_MULE";
		case 294243421: /* GXTEntry: "Dutch Warmblood - Cremello Gold Coat" */
			return "BREED_DUTCHWARMBLOOD";
		case -997197050: /* GXTEntry: "Thoroughbred - Seal Brown Coat" */
			return "BREED_THOROUGHBRED";
		case -235714362: /* GXTEntry: "Appaloosa - Blanket Coat" */
			return "BREED_TENNESSEEWALKER";
		case -1678164: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return "BREED_NOKOTA";
		case -977833913: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
			return "BREED_APPALOOSA";
		case 1589164943: /* GXTEntry: "Thoroughbred - Silver Bay Coat" */
			return "BREED_THOROUGHBRED";
		case -1087523615: /* GXTEntry: "American Paint - Splashed White Coat" */
			return "BREED_AMERICANPAINT";
		case -496814209: /* GXTEntry: "Ardennes - Chestnut Coat" */
			return "BREED_ARDENNES";
		case 2109055751: /* GXTEntry: "Appaloosa - Grey Snowcap Spotted Coat" */
			return "BREED_APPALOOSA";
		case -776673611: /* GXTEntry: "Nokota - Grey Roan Sabino Coat" */
			return "BREED_NOKOTA";
		case 1764402253: /* GXTEntry: "Arabian - White Albino Coat" */
			return "BREED_ARABIAN";
		case -1417310078: /* GXTEntry: "Turkoman - Silver Coat" */
			return "BREED_TURKOMAN";
		case 1096273915: /* GXTEntry: "American Paint - Grey Overo Coat" */
			return "BREED_AMERICANPAINT";
		case 772751081: /* GXTEntry: "Hungarian Halfbred - Silver Dark Bay Coat" */
			return "BREED_HUNGARIANHALFBRED";
		case -1140435723: /* GXTEntry: "Nokota - Smoky Black Coat" */
			return "BREED_NOKOTA";
		case 2002524329: /* GXTEntry: "Tennessee Walker - Flaxen Roan" */
			return "BREED_TENNESSEEWALKER";
		case 1151530184: /* GXTEntry: "Mustang - Light Palomino Coat" */
			return "BREED_MUSTANG";
		case -1266525037: /* GXTEntry: "Missouri Fox Trotter - Black Coat" */
			return "BREED_MISSOURIFOXTROTTER";
		case -2018137175: /* GXTEntry: "Turkoman - Gold Dapple Coat" */
			return "BREED_TURKOMAN";
		case -574151692: /* GXTEntry: "Mustang - Dark Bay Roan Coat" */
			return "BREED_MUSTANG";
		case 649786380: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
			return "BREED_AMERICANSTANDARDBRED";
		case -1921328920: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "BREED_APPALOOSA";
		case -837607790: /* GXTEntry: "Kentucky Saddler - Sabino Coat" */
			return "BREED_KENTUCKYSADDLE";
		case 370424594: /* GXTEntry: "Appaloosa - Few Spot Buckskin Coat" */
			return "BREED_APPALOOSA";
		case -364764277: /* GXTEntry: "Scrawny Nag" */
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

int func_31()
{
	return 808655744;
}

int func_32()
{
	return -364764277 /* GXTEntry: "Scrawny Nag" */;
}

void func_33(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_21[iVar0])))
		{
		}
		else
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uParam0->f_21[iVar0]), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		iVar0++;
	}
	if (func_6(uParam0, 21))
	{
		return;
	}
	uParam0->f_20 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	if (!VEHICLE::_IS_DRAFT_VEHICLE(uParam0->f_20))
	{
		uParam0->f_31++;
		return;
	}
	VEHICLE::_0xA19447D83294E29F(uParam0->f_20, &iVar4, &iVar3);
	if (iVar4 == 0)
	{
		if (iVar3 == 0)
		{
			uParam0->f_31++;
			if (uParam0->f_31 > 90)
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
			iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_20, iVar1);
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
					uParam0->f_21[iVar2] = iVar5;
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(&(uParam0->f_21[iVar2])) || !ENTITY::_0x88AD6CC10D8D35B2(&(uParam0->f_21[iVar2])))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(uParam0->f_21[iVar2]), true, true);
					}
					PED::_0x931B241409216C1F(PLAYER::GET_PLAYER_PED(iParam2), &(uParam0->f_21[iVar2]), 0);
					PED::SET_PED_CONFIG_FLAG(&(uParam0->f_21[iVar2]), 208, true);
					PED::SET_PED_CONFIG_FLAG(&(uParam0->f_21[iVar2]), 209, true);
					PED::SET_PED_CONFIG_FLAG(&(uParam0->f_21[iVar2]), 277, true);
					PED::SET_PED_CONFIG_FLAG(&(uParam0->f_21[iVar2]), 467, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uParam0->f_21[iVar2]), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
					iVar2++;
					iVar1++;
				}
				Jump @424; //curOff = 392
				uParam0->f_31++;
				if (uParam0->f_31 > 90)
				{
					func_7(uParam0, 0);
				}
				return;
				uParam0->f_26 = iVar2;
				func_7(uParam0, 21);
			}
		}
	}

void func_34(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_35(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[*uParam1 /*54*/], uParam0))
		{
		}
		else
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_36(var uParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	Var0 = { func_96() };
	if (INVENTORY::_0x4C543D5DFCD2DAFD(uParam0, &Var0))
	{
		return 0;
	}
	Var4.f_9 = -1591664384;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar19 /*54*/], uParam0))
		{
			bVar18 = true;
		}
		else if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_17172.f_54.f_61.f_41[iVar19 /*54*/], &Var0))
		{
			func_97(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]);
			*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]) = { *uParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_98(*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]), &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_97(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]);
				*(Global_17172.f_54.f_61.f_41[iVar19 /*54*/]) = { *uParam0 };
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
		return 0;
	}
	return 1;
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_99();
	}
	if (bParam0)
	{
		func_100(8);
		func_100(512);
	}
	else
	{
		func_100(8);
		func_100(16);
	}
}

int func_38(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_101(Global_1903929);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_102(uParam0, Global_1903929, &(Global_1903929->f_71), bParam3))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_103(uParam0, Global_1903929, &(Global_1903929->f_100), bParam3))
			{
				return 0;
			}
			break;
	}
	if (bParam2)
	{
		func_104(Global_1903929);
	}
	return 1;
}

struct<8> func_39(var uParam0, bool bParam1)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	char* sVar17;

	Var0 = { uParam0->f_12 };
	if (bParam1)
	{
		if (func_105(uParam0, &Var8))
		{
			Var0 = { Var8 };
		}
	}
	if (MISC::COMPARE_STRINGS(&Var0, func_28(), false, -1) == 0)
	{
		StringCopy(&Var0, MISC::_CREATE_VAR_STRING(2, func_30(uParam0->f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var0) == 0)
	{
		if (uParam0->f_22 != 0)
		{
			StringCopy(&Var0, MISC::_CREATE_VAR_STRING(2, func_106(uParam0->f_22)), 64);
		}
		else
		{
			StringCopy(&Var0, "", 64);
		}
	}
	if (func_107(uParam0->f_4, 0))
	{
		iVar16 = func_108(uParam0->f_4);
		if (STREAMING::IS_MODEL_VALID(iVar16) && STREAMING::IS_MODEL_A_VEHICLE(iVar16))
		{
			sVar17 = MISC::_CREATE_VAR_STRING(0, func_109(uParam0->f_4));
			Var0 = { func_110(sVar17) };
		}
	}
	return Var0;
}

void func_40(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_1, iParam1))
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), iParam1);
}

int func_41(int iParam0)
{
	var uVar0;
	var uVar1;

	if (iParam0 == -1)
	{
		return 0;
	}
	func_94();
	Global_1903929->f_124.f_2 = 116835447;
	Global_1903929->f_124.f_3 = func_95(iParam0);
	if (!DATAFILE::_DATAFILE_GET_HASH(&uVar0, &(Global_1903929->f_124)))
	{
		return -1925605092;
	}
	uVar1 = uVar0;
	return uVar1;
}

void func_42(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam0, 7, uParam1);
}

int func_43(int iParam0)
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

void func_44(int iParam0, int iParam1)
{
	func_111(iParam0, iParam1);
}

int func_45(var uParam0, var uParam1)
{
	if (func_112(uParam0, -2147483648))
	{
		*uParam1 = 4;
	}
	else if (func_112(uParam0, 1073741824 /* Float: 2f */))
	{
		*uParam1 = 3;
	}
	else if (func_112(uParam0, 536870912))
	{
		*uParam1 = 2;
	}
	else if (func_112(uParam0, 268435456))
	{
		*uParam1 = 1;
	}
	else if (func_112(uParam0, 134217728))
	{
		*uParam1 = 0;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_46()
{
	int iVar0;

	iVar0 = 0;
	if (Global_17172.f_54.f_61.f_582 & 2 != 0)
	{
		iVar0 = 2;
	}
	if (Global_17172.f_54.f_61.f_582 & 4 != 0)
	{
		iVar0 = 3;
	}
	if (Global_17172.f_54.f_61.f_582 & 8 != 0)
	{
		iVar0 = 4;
	}
	if (Global_17172.f_54.f_61.f_582 & 16 != 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_47(var uParam0)
{
	if (!func_6(uParam0, 24) && !func_6(uParam0, 25))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 24);
		func_113();
	}
}

void func_48(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 0);
	if (iVar0 == PLAYER::PLAYER_PED_ID() && func_6(uParam0, 2))
	{
		if (!func_6(uParam0, 23))
		{
			if (UNLOCK::_UNLOCK_IS_UNLOCKED(1988458112))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, true);
				func_7(uParam0, 23);
			}
		}
	}
	else if (func_6(uParam0, 23))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, false);
		func_40(uParam0, 23);
	}
}

void func_49()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &Global_1903929->f_131[iVar1 /*95*/];
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

int func_50()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &Global_1903929->f_131[iVar1 /*95*/];
		if (!STREAMING::IS_MODEL_VALID(iVar0))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
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
		func_114(iVar0, (*uParam0)[iVar1 /*95*/], iVar1);
		iVar1++;
	}
}

bool func_52(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (((*Global_1269869)[iParam1 /*20*/])->f_1 && iParam0) != 0;
}

var func_53(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_54(var uParam0)
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
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
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

void func_55(var uParam0)
{
	if (!func_6(uParam0, 5))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (!func_6(uParam0, 28))
	{
		if (func_115())
		{
			if (BUILTIN::VDIST(func_116(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) > 2.7f)
			{
				func_117(512);
				func_7(uParam0, 28);
			}
		}
	}
	else if (!func_115())
	{
		if (BUILTIN::VDIST(func_116(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) <= 2.7f)
		{
			func_40(uParam0, 28);
		}
	}
}

void func_56(var uParam0, int* iParam1)
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
				if (iVar1 != uParam0->f_33)
				{
					if (func_118(&(iParam1->f_7), uParam0->f_4, iVar1, 0))
					{
						uParam0->f_33 = iVar1;
					}
				}
			}
			break;
	}
}

int func_57(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 118)
	{
		return 0;
	}
	return &(Global_1903929->f_485[iParam0]);
}

void func_58(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	bool bVar4;

	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_5))
	{
		return;
	}
	uVar0 = func_119(&(uParam0->f_5), iParam1);
	uVar0 = uVar0;
	uVar1 = func_120(iParam2);
	uVar2 = func_120(iParam3);
	iVar3 = 0;
	if (bParam4)
	{
		iVar3 = 0;
	}
	else if (AITRANSPORT::_0x159EF5B6EDCE00E8(PLAYER::PLAYER_PED_ID(), iParam1))
	{
		iVar3 = 0;
	}
	else if (uVar1 || uVar2)
	{
		bVar4 = func_121(uParam0);
		if (bVar4)
		{
			iVar3 = func_122(iParam1, 0, &(uParam0->f_14), -1, -1, 1277358601, 1, 1);
		}
		else
		{
			iVar3 = uParam0->f_32;
		}
	}
	uParam0->f_32 = iVar3;
	if (uParam0->f_6 != iVar3)
	{
		HUD::_SET_MP_GAMER_TAG_VISIBILITY(uParam0->f_5, iVar3);
		uParam0->f_6 = iVar3;
	}
}

void func_59(var uParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = PLAYER::IS_PLAYER_DEAD(uParam0->f_19);
	bVar1 = func_123(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1), 1, 0);
	if (func_6(uParam0, 2))
	{
		if (bVar1 || bVar0)
		{
			if (!func_25(&(Global_1270530->f_11.f_594)))
			{
				func_76(&(Global_1270530->f_11.f_594));
			}
			if (!func_124(PLAYER::PLAYER_ID(), 1, 0))
			{
				if (func_125(uParam0))
				{
					func_126(1, 1);
				}
			}
			else
			{
				func_125(uParam0);
			}
		}
		else
		{
			if (func_25(&(Global_1270530->f_11.f_594)))
			{
				func_26(&(Global_1270530->f_11.f_594));
			}
			if (!func_123(PLAYER::PLAYER_ID(), 1, 0))
			{
				func_126(0, 1);
			}
			if (ENTITY::_0x808077647856DE62(uParam0->f_18, 34))
			{
				ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, 0);
			}
		}
	}
	else if (bVar1 || bVar0)
	{
		if (!ENTITY::_0x808077647856DE62(uParam0->f_18, 34))
		{
			ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, 1);
		}
	}
	else if (ENTITY::_0x808077647856DE62(uParam0->f_18, 34))
	{
		ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, 0);
	}
}

void func_60(var uParam0)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;

	iVar4 = PLAYER::_0xAD03B03737CE6810(uParam0->f_18);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar4))
	{
		iVar4 = uParam0->f_19;
	}
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar6 = iVar4;
	if (!NETWORK::_0x255A5EF65EDA9167(iVar4))
	{
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1269869)[iVar5 /*20*/])->f_15), iVar6))
		{
			SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1269869)[iVar5 /*20*/])->f_15), iVar6);
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
			if (func_127(uParam0, &uVar0))
			{
				if (!SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1269869)[iVar5 /*20*/])->f_15), iVar6))
				{
					SCRIPTS::_0x31010318BA9897AC(&(((*Global_1269869)[iVar5 /*20*/])->f_15), iVar6);
				}
			}
			else if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1269869)[iVar5 /*20*/])->f_15), iVar6))
			{
				SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1269869)[iVar5 /*20*/])->f_15), iVar6);
			}
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1269869)[iVar5 /*20*/])->f_15), iVar6))
		{
			SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1269869)[iVar5 /*20*/])->f_15), iVar6);
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
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1269869)[iVar8 /*20*/])->f_15), iVar5))
				{
					bVar9 = true;
				}
			}
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1269869)[iVar5 /*20*/])->f_15), iVar8))
			{
				if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(PLAYER::INT_TO_PLAYERINDEX(iVar8)))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(((*Global_1269869)[iVar5 /*20*/])->f_15), iVar6);
				}
			}
			iVar8++;
		}
		if (bVar9)
		{
			if (!func_128(((*Global_1269869)[iVar5 /*20*/])->f_1, 65536))
			{
				func_129(&(((*Global_1269869)[iVar5 /*20*/])->f_1), 65536);
			}
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 33, 2, 1);
		}
		else
		{
			if (func_128(((*Global_1269869)[iVar5 /*20*/])->f_1, 65536))
			{
				func_130(&(((*Global_1269869)[iVar5 /*20*/])->f_1), 65536);
			}
			PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 33, 2, 0);
		}
	}
}

void func_61(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		return;
	}
	if (func_131(uParam0))
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

void func_62(var uParam0)
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

void func_63(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::_0x083D497D57B7400F(uParam0->f_3) || !func_6(uParam0, 4))
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
			uParam0->f_13 = Global_1275573->f_21 + 15;
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_16, -272772079);
			MAP::_0x662D364ABF16DE2F(uParam0->f_16, -272772079);
		}
		if (Global_1275573->f_21 > uParam0->f_13)
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_16, -272772079);
		}
		else
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_16, -272772079);
		}
		if (TASK::IS_PED_IN_WRITHE(uParam0->f_18))
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_16, 430539302);
		}
		else
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_16, 430539302);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_16, 453356795);
			return;
		}
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_16, 453356795);
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_16, 453356795);
			return;
		}
		if (func_132(iVar1, 0))
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_16, 453356795);
		}
		else
		{
			MAP::_SET_BLIP_FLASH_STYLE(uParam0->f_16, 453356795);
		}
		return;
	}
	if (MAP::_0x9FA00E2FC134A9D0(uParam0->f_3))
	{
		return;
	}
	uParam0->f_16 = MAP::_BLIP_ADD_FOR_ENTITY(uParam0->f_17, uParam0->f_3);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1270530->f_11.f_553)))
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(uParam0->f_16, &(Global_1270530->f_11.f_553));
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_16, func_133(uParam0->f_4));
	}
	MAP::_0x662D364ABF16DE2F(uParam0->f_16, 580546400);
}

void func_64(var uParam0, int iParam1)
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
	bVar0 = !func_52(8192, iParam1);
	if (bVar0)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 197, bVar0);
	}
	if (func_52(2048, iParam1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 306, true);
	}
	if (func_52(512, iParam1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_18, 360, true);
	}
}

void func_65(var uParam0, int iParam1)
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
		func_40(uParam0, 26);
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
	if (func_134(255) == 1)
	{
		bVar0 = ENTITY::_0x75DF9E73F2F005FD(uParam0->f_18);
		bVar1 = func_6(uParam0, 15);
		if (func_52(8, iParam1))
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
			func_40(uParam0, 15);
		}
	}
	else
	{
		func_40(uParam0, 15);
	}
	if (func_134(255) == 1)
	{
		if (func_52(16384, iParam1))
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
			func_40(uParam0, 16);
		}
	}
	else
	{
		func_40(uParam0, 16);
	}
	if (func_52(16, iParam1))
	{
		if (!func_6(uParam0, 17))
		{
			func_7(uParam0, 17);
		}
	}
	else if (func_6(uParam0, 17))
	{
		func_40(uParam0, 17);
	}
	bVar2 = func_52(262144, iParam1);
	if (!func_6(uParam0, 26) || func_6(uParam0, 27) != bVar2)
	{
		iVar3 = NETWORK::PED_TO_NET(uParam0->f_18);
		iVar4 = 0;
		while (iVar4 <= 31)
		{
			iVar5 = iVar4;
			if (iVar5 == uParam0->f_19)
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
			func_40(uParam0, 27);
		}
	}
	bVar6 = func_52(64, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 388, true) != bVar6)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 388, bVar6);
	}
	bVar7 = !func_52(32, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 319, true) != bVar7)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 319, bVar7);
	}
	bVar8 = func_52(256, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 312, true) != bVar8)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 312, bVar8);
	}
	bVar9 = !func_52(128, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 211, true) != bVar9)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 211, bVar9);
	}
	bVar10 = func_52(1024, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_18, 412, true) != bVar10)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 412, bVar10);
	}
}

void func_66(var uParam0, int iParam1)
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
	if (&Global_1903929->f_485[64])
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
	if (&Global_1903929->f_485[61])
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
	if (&Global_1903929->f_485[62])
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
	if (&Global_1903929->f_485[63])
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

void func_67(var uParam0, int* iParam1, int iParam2)
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
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_20, 0, 0))
	{
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	iVar2 = 0;
	if (func_135(iVar1))
	{
		iVar2 = 1;
	}
	AITRANSPORT::_0xBA8818212633500A(uParam0->f_3, 0, iVar2);
	iVar4 = 0;
	AITRANSPORT::_0xE195C5A82156321D(uParam0->f_3, &uVar3);
	if (Global_1269869[iParam2 /*20*/] & 1 != 0)
	{
		if (!func_136(uVar3, 1))
		{
			iVar4 = 1;
		}
		if (Global_1269869[iParam2 /*20*/] & 32 != 0)
		{
			if (!func_136(uVar3, 32))
			{
				iVar4 |= 32;
			}
		}
	}
	else
	{
		if (Global_1269869[iParam2 /*20*/] & 2 != 0)
		{
			if (!func_136(uVar3, 2))
			{
				iVar4 |= 2;
			}
		}
		if (Global_1269869[iParam2 /*20*/] & 4 != 0)
		{
			if (!func_136(uVar3, 4))
			{
				iVar4 |= 4;
			}
		}
		if (Global_1269869[iParam2 /*20*/] & 8 != 0)
		{
			if (!func_136(uVar3, 8))
			{
				iVar4 |= 8;
			}
		}
		if (Global_1269869[iParam2 /*20*/] & 64 != 0)
		{
			if (!func_136(uVar3, 64))
			{
				iVar4 |= 64;
			}
		}
		if (Global_1269869[iParam2 /*20*/] & 128 != 0)
		{
			if (!func_136(uVar3, 128))
			{
				iVar4 |= 128;
			}
		}
		if (Global_1269869[iParam2 /*20*/] & 256 != 0)
		{
			if (!func_136(uVar3, 256))
			{
				iVar4 |= 256;
			}
		}
		if (Global_1269869[iParam2 /*20*/] & 16 != 0)
		{
			if (!func_136(uVar3, 16))
			{
				iVar4 = 16;
			}
		}
		if (Global_1269869[iParam2 /*20*/] & 512 != 0)
		{
			if (!func_136(uVar3, 512))
			{
				iVar4 |= 512;
			}
		}
		if (func_136(uVar3, 1024))
		{
			if (!func_136(uVar3, 1024))
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

void func_68(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_137(uParam0, iParam1, iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_3))
	{
		if (AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, -1) == PLAYER::PLAYER_PED_ID())
		{
			func_138(uParam0->f_18);
		}
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3))
	{
		if (uParam0->f_15 >= Global_1275573->f_21)
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
		{
			return;
		}
		iVar0 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
			return;
		}
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			return;
		}
		iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
		if (func_135(iVar2))
		{
			func_86(15, 1);
		}
		else if (Global_1269869[iParam2 /*20*/] & 16 != 0 || Global_1269868 & 32 != 0)
		{
			func_86(16, 1);
		}
		else
		{
			func_86(14, 1);
		}
		TASK::TASK_HORSE_ACTION(uParam0->f_18, 10, 0, 0);
		uParam0->f_15 = Global_1275573->f_21 + 3;
	}
}

void func_69(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

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
	if (!Global_1903929->f_129)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = PED::_0x0CEEB6F4780B1F2F(uParam0->f_18, iVar0);
		if (iParam1 == PLAYER::PLAYER_ID())
		{
			if (&((*Global_1269869)[iParam1 /*20*/])->f_16[iVar0] != iVar1)
			{
				((*Global_1269869)[iParam1 /*20*/])->f_16[iVar0] = iVar1;
			}
		}
		else if (&((*Global_1269869)[iParam1 /*20*/])->f_16[iVar0] != iVar1)
		{
			if (&((*Global_1269869)[iParam1 /*20*/])->f_16[iVar0] == 0)
			{
				PED::_0x627F7F3A0C4C51FF(uParam0->f_18, iVar1);
			}
			else if (iVar1 == 0)
			{
				PED::_0xA73F50E8796150D5(uParam0->f_18, &(((*Global_1269869)[iParam1 /*20*/])->f_16[iVar0]));
			}
			else
			{
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					PED::_0xA73F50E8796150D5(uParam0->f_18, &(((*Global_1269869)[iParam1 /*20*/])->f_16[iVar2]));
					iVar2++;
				}
			}
			else
			{
				iVar0++;
			}
		}
	}

void func_70(var uParam0)
{
	float fVar0;

	if (func_6(uParam0, 11))
	{
		Global_1903929->f_129 = 0;
		Global_1903929->f_130 = 0;
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 0))
	{
		return;
	}
	switch (func_75(uParam0, 0))
	{
		case 1:
			return;
		case 2:
			func_47(uParam0);
			return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_18))
	{
		if (!func_25(&(uParam0->f_7)))
		{
			func_76(&(uParam0->f_7));
		}
		fVar0 = func_77(&(uParam0->f_7));
		if (fVar0 > 4f)
		{
			func_26(&(uParam0->f_7));
			func_7(uParam0, 12);
		}
		return;
	}
	if (func_6(uParam0, 8))
	{
		return;
	}
	if (func_6(uParam0, 7))
	{
		if (&Global_1903929->f_485[45])
		{
			return;
		}
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false)) < 250f)
		{
			return;
		}
	}
	func_139(uParam0);
}

bool func_71(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (((*Global_1269869)[iParam1 /*20*/])->f_2 && iParam0) != 0;
}

void func_72(var uParam0)
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
	iVar0 = PLAYER::_0x7C803BDC8343228D(uParam0->f_20);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		func_40(uParam0, 19);
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PED::IS_PED_ON_VEHICLE(iVar1, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(iVar1, true) == uParam0->f_20)
		{
			func_40(uParam0, 19);
			return;
		}
	}
	PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(func_116(iVar0), &vVar2, &uVar5, 1, 3f, 0);
	bVar6 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3);
	bVar7 = ENTITY::IS_ENTITY_DEAD(uParam0->f_20);
	if (func_140(iVar1, uParam0->f_20, 1, 1) < 12f)
	{
		func_40(uParam0, 19);
	}
	if (!bVar6)
	{
		return;
	}
	if (bVar7)
	{
		return;
	}
	if (TASK::_0x583AE9AF9CEE0958(uParam0->f_20, vVar2))
	{
		return;
	}
	if (!func_6(uParam0, 19))
	{
		TASK::_0x141BC64C8D7C5529(uParam0->f_20);
		return;
	}
	TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_20, vVar2, 6f, 1078722947, 2, 8f, 3f);
}

void func_73(var uParam0)
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
	if (&Global_1903929->f_485[95])
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
	if (ENTITY::_0x083D497D57B7400F(uParam0->f_20))
	{
		return;
	}
	if (func_6(uParam0, 7))
	{
		if (&Global_1903929->f_485[93])
		{
			return;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_20, true, false) };
		if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 250f)
		{
			return;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = func_141(iVar0);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
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

void func_74(var uParam0)
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
	if (ENTITY::_0x083D497D57B7400F(uParam0->f_20))
	{
		return;
	}
	if (func_6(uParam0, 7))
	{
		if (&Global_1903929->f_485[93])
		{
			return;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_20, true, false) };
		if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 250f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = func_141(iVar0);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
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

int func_75(var uParam0, int iParam1)
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
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return 2;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar1 = PLAYER::PLAYER_PED_ID();
	}
	func_142(uParam0);
	func_143(uParam0, iVar1);
	return 2;
}

void func_76(var uParam0)
{
	func_144(uParam0, 0f);
}

float func_77(var uParam0)
{
	if (!func_25(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_145(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_146() - uParam0->f_1);
}

void func_78(var uParam0, int* iParam1, int iParam2)
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
	if (!func_147(uParam0, iParam1, Var0.f_4, Var0.f_5))
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
				if (uParam0->f_19 != Var0.f_1)
				{
					return;
				}
			}
			else if (func_6(uParam0, 6))
			{
				if (uParam0->f_19 != Var0.f_1)
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
				func_148(131072);
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
				func_148(131072);
			}
			func_7(uParam0, 10);
			break;
		case 2:
			if (func_6(uParam0, 5))
			{
				if (uParam0->f_19 != Var0.f_1)
				{
					return;
				}
			}
			else if (func_6(uParam0, 6))
			{
				if (uParam0->f_19 != Var0.f_1)
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
				func_148(131072);
			}
			func_40(uParam0, 10);
			func_7(uParam0, 11);
			break;
		case 1:
			if (func_6(uParam0, 8))
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_148(131072);
			}
			func_40(uParam0, 10);
			func_7(uParam0, 11);
			break;
		case 4:
			func_7(uParam0, 8);
			break;
		case 5:
			func_40(uParam0, 8);
			break;
		case 6:
			func_7(uParam0, 19);
			break;
		case 9:
			func_149(uParam0, &Var0, 0);
			break;
		case 10:
			func_149(uParam0, &Var0, 1);
			break;
		case 11:
			func_150(uParam0, &Var0);
			break;
		case 7:
			func_151(uParam0, &Var0);
			break;
		case 8:
			func_152(uParam0, &Var0);
			break;
	}
}

struct<2> func_79()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_80(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_153(*Global_1051163) && !func_154(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_155(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_156(iParam3, 255))
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
	if (func_157())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_153(*Global_1051163))
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

bool func_81(int iParam0)
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

void func_82(int iParam0, bool bParam1, bool bParam2)
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

int func_83(var uParam0, int iParam1, bool bParam2)
{
	func_158(uParam0, 2, bParam2);
	if (!func_159(uParam0))
	{
		return 0;
	}
	func_160(uParam0, iParam1, bParam2);
	return 1;
}

void func_84()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Global_1270530->f_11.f_200[iVar0 /*7*/])->f_6 == 2)
		{
			*(Global_1270530->f_11.f_200[iVar0 /*7*/]) = { func_96() };
			(Global_1270530->f_11.f_200[iVar0 /*7*/])->f_5 = 0;
			(Global_1270530->f_11.f_200[iVar0 /*7*/])->f_6 = -1;
		}
		iVar0++;
	}
}

int func_85(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_161(bParam2), uParam0, iParam1);
}

void func_86(int iParam0, bool bParam1)
{
	func_162(iParam0, bParam1);
}

int func_87(struct<4> Param0, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;

	if (func_163(&Param0, 0, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var0 = { func_96() };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1270530->f_11.f_200[iVar4 /*7*/], &Param0) && !INVENTORY::_0x4C543D5DFCD2DAFD(Global_1270530->f_11.f_200[iVar4 /*7*/], &Var0))
		{
		}
		else
		{
			(Global_1270530->f_11.f_200[iVar4 /*7*/])->f_5 = Global_1275573->f_21 + 120;
			*(Global_1270530->f_11.f_200[iVar4 /*7*/]) = { Param0 };
			(Global_1270530->f_11.f_200[iVar4 /*7*/])->f_6 = iParam5;
			(Global_1270530->f_11.f_200[iVar4 /*7*/])->f_4 = iParam4;
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_88(int iParam0)
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

int func_89(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::_0x61914209C36EFDDB(iParam0) != 7)
		{
			return 1;
		}
		iVar0 = ENTITY::_0x9A87FF82FD35822F(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::_0x37056BA2A3FEFB31(iVar0, iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_90(int iParam0)
{
	struct<11> Var0;
	var uVar95;

	Var0.f_10 = 10;
	MISC::_COPY_MEMORY(Global_1903929->f_131[iParam0 /*95*/], &Var0, 95);
	MISC::_COPY_MEMORY(Global_1270530->f_1002.f_245[iParam0 /*4*/], &uVar95, 4);
}

void func_91(int iParam0, int iParam1, bool bParam2)
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
		ENTITY::_0x0D0DB2B6AF19A987(&iParam0);
	}
}

int func_92(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST((Global_1270530->f_1002.f_245[iParam0 /*4*/])->f_3))
	{
		return 1;
	}
	if (func_107((Global_1903929->f_131[iParam0 /*95*/])->f_1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_93(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_94()
{
	Global_1903929->f_124 = (Global_1070356->f_26934[48 /*4*/])->f_3;
	Global_1903929->f_124.f_1 = 0;
	Global_1903929->f_124.f_2 = 0;
	Global_1903929->f_124.f_3 = 0;
	Global_1903929->f_124.f_4 = 0;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return 1653124001;
		case 1:
			return -430733995;
		case 2:
			return 1501387297;
		case 3:
			return -1143491563;
		case 4:
			return -1460176899;
		case 5:
			return 1003181529;
		default:
			break;
	}
	return 0;
}

struct<4> func_96()
{
	struct<4> Var0;

	return Var0;
}

void func_97(var uParam0)
{
	int iVar0;

	*uParam0 = { func_96() };
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
		(uParam0->f_29[iVar0 /*4*/])->f_1 = 0f;
		(uParam0->f_29[iVar0 /*4*/])->f_2 = 0f;
		(uParam0->f_29[iVar0 /*4*/])->f_3 = 0;
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
		(uParam0->f_38[iVar0 /*4*/])->f_1 = 0f;
		(uParam0->f_38[iVar0 /*4*/])->f_2 = 0f;
		(uParam0->f_38[iVar0 /*4*/])->f_3 = 0;
		iVar0++;
	}
	uParam0->f_51 = { 0f, 0f, 0f };
}

bool func_98(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_164(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_99()
{
	Global_1951141->f_1054 = 0;
}

void func_100(int iParam0)
{
	Global_1951141 = (Global_1951141 || iParam0);
}

void func_101(var uParam0)
{
	int iVar0;

	func_165(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_96() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_23[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_27 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		uParam0->f_28[iVar0] = 0;
		iVar0++;
	}
}

int func_102(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_166(uParam0, uParam2, bParam3))
	{
		return 0;
	}
	if (!func_167(uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

int func_103(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_168(uParam0, uParam2, bParam3))
	{
		return 0;
	}
	if (!func_169(uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_104(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;

	if (!func_170(uParam0->f_10))
	{
		return;
	}
	func_171(uParam0, 8);
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return;
	}
	iVar0 = func_161(0);
	iVar3 = 0;
	while (iVar3 < 13)
	{
		uVar1 = func_172(iVar3, 1);
		if (!INVENTORY::_0x6862E4D93F64CF01(iVar0, uParam0, uVar1, &uVar2))
		{
		}
		else
		{
			uParam0->f_28[iVar3] = uVar2;
		}
		iVar3++;
	}
}

int func_105(var uParam0, var uParam1)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1270530->f_1002[iVar0 /*24*/], uParam0))
		{
		}
		else
		{
			if ((Global_1270530->f_1002[iVar0 /*24*/])->f_23 < Global_1275573->f_21)
			{
				*uParam1 = { (Global_1270530->f_1002[iVar0 /*24*/])->f_7 };
				return 1;
			}
			*uParam1 = { (Global_1270530->f_1002[iVar0 /*24*/])->f_15 };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_106(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_173(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_174(&cVar0);
}

int func_107(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_108(var uParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(uParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

int func_109(int iParam0)
{
	int iVar0;

	if (!func_107(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_175(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

struct<8> func_110(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_111(int iParam0, int iParam1)
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

bool func_112(var uParam0, int iParam1)
{
	return func_176(&(uParam0->f_20), iParam1);
}

void func_113()
{
	if (func_52(2, 255))
	{
		return;
	}
	func_177(2);
}

void func_114(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	var uVar22;

	Global_1270530->f_1002.f_241[iParam2] = 0;
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
		uVar7 = func_178(iParam2);
		TASK::TASK_CARRIABLE(iVar6, uParam1->f_3, iParam0, uVar7, 256);
		ENTITY::_0x399657ED871B3A6C(iVar6, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar6, uParam1->f_93);
		uVar8 = func_179(iParam0, iVar6);
	}
	else if (STREAMING::IS_MODEL_A_PED(*uParam1))
	{
		iVar9 = func_180(*uParam1, vVar3, 0, 1, 0, 0, 1, 1, 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			return;
		}
		if (uParam1->f_8 != 0)
		{
			PED::_SET_PED_BODY_COMPONENT(iVar9, uParam1->f_8);
		}
		iVar18 = 0;
		while (iVar18 < uParam1->f_9)
		{
			uVar10 = &uParam1->f_10[iVar18 /*8*/];
			uVar11 = (uParam1->f_10[iVar18 /*8*/])->f_1;
			uVar12 = (uParam1->f_10[iVar18 /*8*/])->f_2;
			uVar13 = (uParam1->f_10[iVar18 /*8*/])->f_3;
			uVar14 = (uParam1->f_10[iVar18 /*8*/])->f_4;
			uVar15 = (uParam1->f_10[iVar18 /*8*/])->f_5;
			uVar16 = (uParam1->f_10[iVar18 /*8*/])->f_6;
			uVar17 = (uParam1->f_10[iVar18 /*8*/])->f_7;
			PED::_0xBC6DF00D7A4A6819(iVar9, uVar10, uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17);
			iVar18++;
		}
		PED::_UPDATE_PED_VARIATION(iVar9, 0, 1, 1, 1, 0);
		if (uParam1->f_2 == 2)
		{
			ENTITY::_SET_ENTITY_HEALTH(iVar9, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar9, 517, true);
			_NAMESPACE49::_0xF5622FA6ACFCA7DB(iVar9, uParam1->f_91);
		}
		if (ENTITY::_0x9A100F1CF4546629(iVar9))
		{
			PED::_SET_PED_QUALITY(iVar9, uParam1->f_4);
			FLOCK::_0x8B6F0F59B1B99801(iVar9, uParam1->f_5);
			PED::_SET_PED_DAMAGE(iVar9, uParam1->f_6);
			PED::_SET_PED_DAMAGED(iVar9, uParam1->f_7);
		}
		if (uParam1->f_92)
		{
			PED::_0x6569F31A01B4C097(iVar9, 0, 0);
			ENTITY::_0x6BCF5F3D8FFE988D(iVar9, 1);
		}
		uVar19 = func_178(iParam2);
		TASK::TASK_CARRIABLE(iVar9, uParam1->f_3, iParam0, uVar19, 256);
		ENTITY::_0x399657ED871B3A6C(iVar9, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar9, uParam1->f_93);
		if (uParam1->f_94)
		{
			ENTITY::SET_ENTITY_RENDER_SCORCHED(iVar9, true);
			FIRE::START_ENTITY_FIRE(iVar9, 0, -1, 8);
		}
		iVar20 = func_181(iVar9);
		iVar21 = func_182(iVar20);
		if (func_107(iVar21, 0))
		{
			if (iVar21 != uParam1->f_1)
			{
				uParam1->f_1 = iVar21;
			}
		}
		uVar22 = func_179(iParam0, iVar9);
	}
}

int func_115()
{
	if (func_183() && !func_184(0))
	{
		if (func_185(-283002878))
		{
			if (func_186(-283002878))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_116(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_117(int iParam0)
{
	Global_1939231->f_10451 = (Global_1939231->f_10451 || iParam0);
}

int func_118(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_38(uParam0, iParam1, 1, 1))
	{
		return 0;
	}
	if (!func_187(Global_1903929))
	{
		return 0;
	}
	func_188(Global_1903929, 536870912);
	func_188(Global_1903929, 268435456);
	func_188(Global_1903929, -2147483648);
	func_188(Global_1903929, 1073741824 /* Float: 2f */);
	func_188(Global_1903929, 134217728);
	switch (iParam2)
	{
		case 0:
			func_171(Global_1903929, 134217728);
			break;
		case 1:
			func_171(Global_1903929, 268435456);
			break;
		case 2:
			func_171(Global_1903929, 536870912);
			break;
		case 3:
			func_171(Global_1903929, 1073741824 /* Float: 2f */);
			break;
		case 4:
			func_171(Global_1903929, -2147483648);
			break;
	}
	if (!func_159(Global_1903929))
	{
		return 0;
	}
	if (bParam3)
	{
		func_189();
	}
	return 1;
}

int func_119(var uParam0, int iParam1)
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

bool func_120(int iParam0)
{
	return (Global_17172.f_54.f_61.f_582 && iParam0) != 0;
}

int func_121(var uParam0)
{
	int iVar0;

	iVar0 = uParam0->f_19;
	if (iVar0 == 255)
	{
		return 0;
	}
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (!Global_1270530->f_1496.f_1)
	{
		return 0;
	}
	return 1;
}

int func_122(int iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_190(uParam2);
		return 0;
	}
	if (func_191(&Global_1275573, 32768))
	{
		return 0;
	}
	fVar6 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	if (!PLAYER::IS_PLAYER_DEAD(Global_1275573->f_10) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (Global_1070356->f_20209.f_580 <= 0f || fVar6 <= Global_1070356->f_20209.f_580)
		{
			PLAYER::GET_PLAYER_TARGET_ENTITY(Global_1275573->f_10, &iVar8);
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (((iVar8 == iParam0 || PED::_0x0C31C51168E80365(Global_1275573->f_8) == iVar9) || PED::GET_MELEE_TARGET_FOR_PED(Global_1275573->f_8) == iVar9) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(Global_1275573->f_10, iVar9))
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
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19683.f_258), iParam4) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19683.f_259), iParam4))
		{
			bVar2 = true;
		}
		if (HUD::_0x7EC0D68233E391AC(54) == 2)
		{
			func_190(uParam2);
			return 0;
		}
		if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(&(Global_1275573->f_154[&Global_1275573]), &(Global_1275573->f_154[iParam4])))
		{
			return 0;
		}
		if (func_192(iParam4))
		{
			return 0;
		}
		if (func_192(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1956136->f_2), iParam4))
			{
				return 3;
			}
		}
		if ((Global_1070356->f_20209[iParam4 /*18*/])->f_3 != 0)
		{
			func_190(uParam2);
			return (Global_1070356->f_20209[iParam4 /*18*/])->f_3;
		}
		if (func_193(iParam4))
		{
			func_190(uParam2);
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_20209.f_583), iParam4) && !bVar2)
		{
			if (!bVar3 || !func_191(&Global_1275573, 131072))
			{
				return 0;
			}
		}
		if (func_194(iParam4))
		{
			return 0;
		}
		if (iParam3 != 255 && iParam3 == iParam4)
		{
			return 3;
		}
		if (func_191(iParam4, 16384))
		{
			return 0;
		}
	}
	else if (bParam7)
	{
		if (HUD::_0x7EC0D68233E391AC(55) == 2)
		{
			func_190(uParam2);
			return 0;
		}
	}
	if (bParam6 || (((*Global_262996)[&Global_1275573 /*70*/])->f_1.f_21.f_2 == -504335712 && func_195(Global_524288->f_39792)))
	{
		bVar7 = true;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		fVar5 = Global_1901929->f_93.f_11;
	}
	else if (bVar7)
	{
		if (bVar1)
		{
			fVar5 = Global_1901929->f_93.f_10;
		}
		else
		{
			fVar5 = Global_1901929->f_93.f_9;
		}
	}
	else
	{
		if (Global_1070356->f_20209.f_578 > 0f)
		{
			fVar4 = Global_1070356->f_20209.f_578;
		}
		else
		{
			fVar4 = func_196(bParam1, Global_1901929->f_93.f_7, Global_1901929->f_93.f_6);
		}
		if (Global_1070356->f_20209.f_579 > 0f)
		{
			fVar5 = Global_1070356->f_20209.f_579;
		}
		else
		{
			fVar5 = func_196(bParam1, Global_1901929->f_93.f_8, Global_1901929->f_93.f_5);
		}
	}
	if (!func_197(iParam4, iParam0, fVar6, fVar5, bVar0))
	{
		func_190(uParam2);
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
			else if (func_191(&Global_1275573, 65536))
			{
				if (bVar0 && _NAMESPACE79::_0xEF6F2A35FAAF2ED7(PLAYER::INT_TO_PLAYERINDEX(iParam4)))
				{
					return 2;
				}
			}
			else if (((func_198(uParam2) || func_199(iParam5)) || (bVar0 && _NAMESPACE79::_0xEF6F2A35FAAF2ED7(PLAYER::INT_TO_PLAYERINDEX(iParam4)))) || bVar2)
			{
				return 2;
			}
		}
		else
		{
			func_190(uParam2);
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

int func_123(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_0xF49F14462F0AE27C(iParam0)))
	{
		return iParam2;
	}
	return ((*Global_1269869)[iParam0 /*20*/])->f_6;
}

int func_124(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_0xF49F14462F0AE27C(iParam0)))
	{
		return iParam2;
	}
	return ((*Global_1269869)[iParam0 /*20*/])->f_7;
}

bool func_125(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	bool bVar6;

	bVar6 = true;
	if (!ENTITY::_0x808077647856DE62(uParam0->f_18, 34))
	{
		ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, 1);
	}
	if (!ENTITY::_0x188736456D1DEDE6(uParam0->f_18, PLAYER::PLAYER_PED_ID()))
	{
		bVar6 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_88(iVar0);
		if (PED::_0x608BC6A6AACD5036(&Var2, uParam0->f_18, iVar1, 0))
		{
			if (!ENTITY::_0x188736456D1DEDE6(Var2.f_3, PLAYER::PLAYER_PED_ID()))
			{
				bVar6 = false;
			}
		}
		iVar0++;
	}
	if (func_200())
	{
		bVar6 = false;
	}
	if (!bVar6)
	{
		if (func_201(&(Global_1270530->f_11.f_594), 5f))
		{
			return true;
		}
	}
	return bVar6;
}

void func_126(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (((*Global_1269869)[iVar1 /*20*/])->f_6 == 1 && ((*Global_1269869)[iVar1 /*20*/])->f_7 != iParam0)
	{
		((*Global_1269869)[iVar1 /*20*/])->f_7 = iParam0;
	}
}

int func_127(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && ENTITY::IS_ENTITY_A_PED(uParam1->f_1))
	{
		if (uParam0->f_18 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_129(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_130(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_131(var uParam0)
{
	float fVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_19))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(uParam0->f_19)))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0->f_19), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_18, true, false));
	if (fVar0 < 248f)
	{
		return 0;
	}
	return 1;
}

int func_132(int iParam0, bool bParam1)
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

char* func_133(int iParam0)
{
	struct<8> Var0;

	if (iParam0 == -1)
	{
		return "";
	}
	func_94();
	Global_1903929->f_124.f_2 = 1292413058;
	Global_1903929->f_124.f_3 = func_95(iParam0);
	if (!DATAFILE::_DATAFILE_GET_STRING(&Var0, &(Global_1903929->f_124)))
	{
		return "";
	}
	return func_202(Var0);
}

int func_134(int iParam0)
{
	if (iParam0 == 255)
	{
		return &Global_1099294;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return Global_1097610[iParam0 /*51*/];
	}
	return 26;
}

int func_135(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	return (Global_1102099->f_34[iVar0 /*11*/])->f_6;
}

bool func_136(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_137(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_18))
	{
		iVar1 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 0);
	}
	else
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_20, -1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar2))
	{
		return 1;
	}
	if (iVar2 == iVar0)
	{
		return 0;
	}
	if (func_135(iVar0))
	{
		return 1;
	}
	iVar3 = func_203(iParam2);
	iVar4 = func_204(iVar3, 10);
	if (iVar4 != -1)
	{
		if (func_205(iParam2, iVar4, 2) && func_206(iVar4, uParam0->f_18))
		{
			return 1;
		}
	}
	if (Global_1269869[iParam2 /*20*/] & 16 != 0 || Global_1269868 & 32 != 0)
	{
		return 0;
	}
	if (Global_1269869[iParam2 /*20*/] & 2 != 0 || Global_1269868 & 4 != 0)
	{
		if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar2) == _NAMESPACE26::_0x901E0DC25080C8B9(iVar0))
		{
			return 0;
		}
	}
	Var5 = { func_207(iVar2) };
	if (Global_1269869[iParam2 /*20*/] & 4 != 0 || Global_1269868 & 8 != 0)
	{
		if (func_208(Var5, *iParam1))
		{
			return 0;
		}
	}
	if (Global_1269869[iParam2 /*20*/] & 8 != 0 || Global_1269868 & 16 != 0)
	{
		if (NETWORK::NETWORK_IS_FRIEND(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

void func_138(int iParam0)
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
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 0))
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

void func_139(var uParam0)
{
	if (!func_6(uParam0, 25) && !func_6(uParam0, 24))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 25);
		func_209();
	}
}

float func_140(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_141(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return &(Global_1099294->f_342[iParam0]);
}

void func_142(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 136, true);
	PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_18, false);
	ENTITY::_0x18FF3110CF47115D(uParam0->f_18, 34, 1);
	PED::_0x6569F31A01B4C097(uParam0->f_18, 4, 0);
	PED::_0x6569F31A01B4C097(uParam0->f_18, 0, 0);
	PED::_0x6569F31A01B4C097(uParam0->f_18, 1, 0);
}

void func_143(var uParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_18))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_18, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_18, 288, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_210(uParam0))
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
	func_211(uParam0->f_18, &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(uParam0->f_18, true);
}

void func_144(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_146() - fParam1);
	func_212(uParam0, 1);
	func_213(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_145(var uParam0)
{
	return func_93(*uParam0, 2);
}

float func_146()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_147(var uParam0, int* iParam1, int iParam2, int iParam3)
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
	return iParam1->f_11 == iParam3;
}

void func_148(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	((*Global_1269869)[iVar0 /*20*/])->f_1 = (((*Global_1269869)[iVar0 /*20*/])->f_1 || iParam0);
}

void func_149(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_18 != PLAYER::_0xF49F14462F0AE27C(uParam1->f_1))
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
	iVar0 = PED::_0xB676EFDA03DADA52(uParam0->f_18, 1);
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::GET_PLAYER_PED(uParam1->f_1);
	if (PED::GET_MOUNT(iVar2) == uParam0->f_18)
	{
		if (iVar1 != iVar2 && PED::GET_MOUNT(iVar1) == uParam0->f_18)
		{
			TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
			func_86(16, 1);
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
		func_86(16, 1);
	}
}

void func_150(var uParam0, var uParam1)
{
	if (PLAYER::GET_PLAYER_PED(uParam1->f_1) == PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	if (uParam0->f_18 != PLAYER::_0xF49F14462F0AE27C(uParam1->f_1))
	{
		return;
	}
	if (AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_18, -2) == func_214())
	{
		return;
	}
	func_138(uParam0->f_18);
}

void func_151(var uParam0, var uParam1)
{
	if (uParam0->f_18 != PLAYER::_0xF49F14462F0AE27C(uParam1->f_1))
	{
		return;
	}
	if (!func_215(uParam1, uParam0->f_18))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(uParam0->f_18, 1, 0);
	FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_18, 0);
	TASK::_TASK_SMART_FLEE_STYLE_COORD(uParam0->f_18, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam1->f_1), true, false), 6, 4718592, -1082130432, -1, 0);
}

void func_152(var uParam0, var uParam1)
{
	if (uParam0->f_18 != PLAYER::_0xF49F14462F0AE27C(uParam1->f_1))
	{
		return;
	}
	if (!func_215(uParam1, uParam0->f_18))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_18, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(uParam0->f_18)))
		{
			FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_18, 0);
		}
		TASK::TASK_STAND_STILL(uParam0->f_18, -1);
	}
}

int func_153(struct<2> Param0)
{
	if (!func_216(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_217(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_154(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_155(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_156(int iParam0, int iParam1)
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

int func_157()
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
	if (!func_153(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_158(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_171(uParam0, iParam1);
	}
	else
	{
		func_188(uParam0, iParam1);
	}
}

int func_159(var uParam0)
{
	if (!func_187(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_10)
	{
		case 0:
		case 1:
			if (!func_218(uParam0))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_219(uParam0))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_160(var uParam0, int iParam1, bool bParam2)
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
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1270530->f_1002[iVar0 /*24*/], uParam0))
			{
			}
			else
			{
				(Global_1270530->f_1002[iVar0 /*24*/])->f_6 = bParam2;
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
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1270530->f_1002.f_271[iVar0 /*24*/], uParam0))
			{
			}
			else
			{
				(Global_1270530->f_1002.f_271[iVar0 /*24*/])->f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

int func_161(bool bParam0)
{
	if (func_220() == -1)
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

void func_162(int iParam0, bool bParam1)
{
	if (func_221(iParam0) && !bParam1)
	{
		return;
	}
	Global_1270530->f_11.f_561[iParam0] = func_223(func_222(iParam0), 10000, 0, 0, 0, 1);
}

int func_163(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_224(uParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	func_38(uParam0, iParam1, 0, 0);
	if (func_112(Global_1903929, 2))
	{
		return 1;
	}
	return 0;
}

int func_164(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_161(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_165(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_166(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_161(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_167(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return 0;
	}
	uParam0->f_22 = func_29(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_27 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return 1;
}

int func_168(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_161(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 24, 1))
	{
		return 0;
	}
	return 1;
}

int func_169(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return 0;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return 1;
}

int func_170(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	func_94();
	Global_1903929->f_124.f_2 = 834733495;
	Global_1903929->f_124.f_3 = func_95(iParam0);
	if (!DATAFILE::_DATAFILE_GET_BOOL(&uVar0, &(Global_1903929->f_124)))
	{
		return 0;
	}
	return uVar0;
}

void func_171(var uParam0, int iParam1)
{
	func_225(&(uParam0->f_20), iParam1);
}

int func_172(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -742846258;
		case 2:
			return 131724934;
		case 3:
			return 325433051;
		case 4:
			return -1943296527;
		case 5:
			return 1586684911;
		case 6:
			return -1171161482;
		case 7:
			return 1038672528;
		case 8:
			return -1073329868;
		case 9:
			return 1263489075;
		case 10:
			return 966390205;
		case 11:
			return -2046198715;
		case 12:
			return 13;
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

char* func_173(int iParam0)
{
	switch (iParam0)
	{
		case -974145463: /* GXTEntry: "American Paint - Overo Coat" */
			return "BREED_AMERICANPAINT_OVERO";
		case 1432602132: /* GXTEntry: "American Paint - Tobiano Coat" */
			return "BREED_AMERICANPAINT_TOBIANO";
		case 92296905: /* GXTEntry: "American Paint - Splashed White Coat" */
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case -842044823: /* GXTEntry: "American Paint - Grey Overo Coat" */
			return "BREED_AMERICANPAINT_GREYOVERO";
		case 1371398552: /* GXTEntry: "American Standardbred - Black Coat" */
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case -745453539: /* GXTEntry: "American Standardbred - Buckskin Coat" */
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case 1583029039: /* GXTEntry: "American Standardbred - Palomino Dapple Coat" */
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case -783061276: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case -1322521536: /* GXTEntry: "Andalusian - Dark Bay Coat" */
			return "BREED_ANDALUSIAN_DARKBAY";
		case 1100711204: /* GXTEntry: "Andalusian - Perlino Coat" */
			return "BREED_ANDALUSIAN_PERLINO";
		case 728055838: /* GXTEntry: "Andalusian - Rose Grey Coat" */
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case -1782334639: /* GXTEntry: "Appaloosa - Blanket Coat" */
			return "BREED_APPALOOSA_BLANKET";
		case -1181052732: /* GXTEntry: "Appaloosa - Leopard Blanket Coat" */
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case -179102320: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case -1266863668: /* GXTEntry: "Appaloosa - Leopard Coat" */
			return "BREED_APPALOOSA_LEOPARD";
		case -2078767648: /* GXTEntry: "Arabian - Black Coat" */
			return "BREED_ARABIAN_BLACK";
		case -852553462: /* GXTEntry: "Arabian - Rose Grey Bay Coat" */
			return "BREED_ARABIAN_ROSEGREYBAY";
		case -80004868: /* GXTEntry: "Arabian - White Coat" */
			return "BREED_ARABIAN_WHITE";
		case 1813208211: /* GXTEntry: "Ardennes - Bay Roan Coat" */
			return "BREED_ARDENNES_BAYROAN";
		case 836323303: /* GXTEntry: "Ardennes - Strawberry Roan Coat" */
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case 153881023: /* GXTEntry: "Ardennes - Iron Grey Roan Coat" */
			return "BREED_ARDENNES_IRONGREYROAN";
		case -1256798240: /* GXTEntry: "Belgian Draft - Blond Chestnut Coat" */
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case 2118089359:
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case -1537586382: /* GXTEntry: "Dutch Warmblood - Sooty Buckskin Coat" */
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case 1440692746: /* GXTEntry: "Dutch Warmblood - Seal Brown Coat" */
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case 697143532: /* GXTEntry: "Dutch Warmblood - Chocolate Roan Coat" */
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case 281128160: /* GXTEntry: "Hungarian Halfbred - Flaxen Chestnut Coat" */
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case 1854519167: /* GXTEntry: "Hungarian Halfbred - Piebald Tobiano Coat" */
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case -1376299681: /* GXTEntry: "Hungarian Halfbred - Dark Dapple Grey Coat" */
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case 1361788230: /* GXTEntry: "Kentucky Saddler - Chestnut Pinto Coat" */
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case 1974379573: /* GXTEntry: "Kentucky Saddler - Grey Coat" */
			return "BREED_KENTUCKYSADDLE_GREY";
		case 545109431: /* GXTEntry: "Kentucky Saddler - Silver Bay Coat" */
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 1275638003: /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 2083573823: /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case 1235275977: /* GXTEntry: "Morgan - Bay Coat" */
			return "BREED_MORGAN_BAY";
		case 892601357: /* GXTEntry: "Morgan - Bay Roan Coat" */
			return "BREED_MORGAN_BAYROAN";
		case 1224695367: /* GXTEntry: "Morgan - Flaxen Chestnut Coat" */
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case 648301150: /* GXTEntry: "Morgan - Palomino Coat" */
			return "BREED_MORGAN_PALOMINO";
		case -1597490733: /* GXTEntry: "Mustang - Grullo Dun Coat" */
			return "BREED_MUSTANG_GRULLODUN";
		case 2000205872: /* GXTEntry: "Mustang - Wild Bay Coat" */
			return "BREED_MUSTANG_WILDBAY";
		case -1428527735: /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case 170010697: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return "BREED_NOKOTA_BLUEROAN";
		case -742726637: /* GXTEntry: "Nokota - White Roan Coat" */
			return "BREED_NOKOTA_WHITEROAN";
		case -1714171692: /* GXTEntry: "Nokota - Reverse Dapple Roan Coat" */
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -103101636: /* GXTEntry: "Shire - Dark Bay Coat" */
			return "BREED_SHIRE_DARKBAY";
		case -1999094324: /* GXTEntry: "Shire - Light Grey Coat" */
			return "BREED_SHIRE_LIGHTGREY";
		case 1724200240: /* GXTEntry: "Suffolk Punch - Sorrel Coat" */
			return "BREED_SUFFOLKPUNCH_SORREL";
		case 237935328: /* GXTEntry: "Suffolk Punch - Red Chestnut Coat" */
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case 120848852: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case -868094182: /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case -887362763: /* GXTEntry: "Tennessee Walker - Dapple Bay Coat" */
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case -847714194: /* GXTEntry: "Tennessee Walker - Red Roan Coat" */
			return "BREED_TENNESSEEWALKER_REDROAN";
		case 1756765331: /* GXTEntry: "Tennessee Walker - Flaxen Roan Coat" */
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case -813071670: /* GXTEntry: "Thoroughbred - Blood Bay Coat" */
			return "BREED_THOROUGHBRED_BLOODBAY";
		case -1900569233: /* GXTEntry: "Thoroughbred - Dapple Grey Coat" */
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case 1688250187: /* GXTEntry: "Thoroughbred - Brindle Coat" */
			return "BREED_THOROUGHBRED_BRINDLE";
		case -1262715164: /* GXTEntry: "Thoroughbred - Black Chestnut Coat" */
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case 2010625508: /* GXTEntry: "Thoroughbred - Reverse Dapple Black Coat" */
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case -136225010: /* GXTEntry: "Turkoman - Dark Bay Coat" */
			return "BREED_TURKOMAN_DARKBAY";
		case -225011104: /* GXTEntry: "Turkoman - Gold Coat" */
			return "BREED_TURKOMAN_GOLD";
		case -1882436593: /* GXTEntry: "Turkoman - Silver Coat" */
			return "BREED_TURKOMAN_SILVER";
		case -757978903: /* GXTEntry: "Breton - Red Roan Coat" */
			return "BREED_BRETON_REDROAN";
		case 1909854428: /* GXTEntry: "Breton - Sorrel Coat" */
			return "BREED_BRETON_SORREL";
		case 1592694494: /* GXTEntry: "Breton - Grullo Dun Coat" */
			return "BREED_BRETON_GRULLODUN";
		case 981469777: /* GXTEntry: "Breton - Seal Brown Coat" */
			return "BREED_BRETON_SEALBROWN";
		case 1064693514: /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case -1365665739: /* GXTEntry: "Breton - Steel Grey Coat" */
			return "BREED_BRETON_STEELGREY";
		case 1577022605: /* GXTEntry: "Criollo - Blue Roan Overo Coat" */
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case 381495209: /* GXTEntry: "Criollo - Dun Coat" */
			return "BREED_CRIOLLO_DUN";
		case 3032834: /* GXTEntry: "Criollo - Bay Brindle Coat" */
			return "BREED_CRIOLLO_BAYBRINDLE";
		case -1722101672: /* GXTEntry: "Criollo - Sorrel Overo Coat" */
			return "BREED_CRIOLLO_SORRELOVERO";
		case -189605757: /* GXTEntry: "Criollo - Bay Frame Overo Coat" */
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case 863391233: /* GXTEntry: "Criollo - Marble Sabino Coat" */
			return "BREED_CRIOLLO_MARBLESABINO";
		case 885568364: /* GXTEntry: "Kladruber - Black Coat" */
			return "BREED_KLADRUBER_BLACK";
		case -1540355548: /* GXTEntry: "Kladruber - White Coat" */
			return "BREED_KLADRUBER_WHITE";
		case -601560591: /* GXTEntry: "Kladruber - Cremello Coat" */
			return "BREED_KLADRUBER_CREMELLO";
		case -370362766: /* GXTEntry: "Kladruber - Grey Coat" */
			return "BREED_KLADRUBER_GREY";
		case -1698261864: /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case -670301166: /* GXTEntry: "Kladruber - Silver Coat" */
			return "BREED_KLADRUBER_SILVER";
		case -302057902:
			return "BREED_NORFOLKROADSTER_BLACK";
		case 1257620801:
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case 821735821:
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case -769035812:
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case -1824684932:
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case 1589592948:
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case -1331210307: /* GXTEntry: "Donkey" */
			return "BREED_DONKEY";
		case 122449722: /* GXTEntry: "Mule" */
			return "BREED_MULE";
		case -1784502482: /* GXTEntry: "Mule - Painted" */
			return "BREED_MULE_PAINTED";
		case -1943445834:
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case -635244104: /* GXTEntry: "Appaloosa - Black Snowflake" */
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case -1427377767: /* GXTEntry: "Arabian - Grey Coat" */
			return "BREED_ARABIAN_GREY";
		case -2055655009: /* GXTEntry: "Arabian - Red Chestnut Coat" */
			return "BREED_ARABIAN_REDCHESTNUT";
		case -1293672675: /* GXTEntry: "Hungarian Halfbred - Liver Chestnut Coat" */
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case -1179079660: /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case 805526368: /* GXTEntry: "Mustang - Golden Dun Coat" */
			return "BREED_MUSTANG_GOLDENDUN";
		case 1342496140: /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case -126555855: /* GXTEntry: "Shire - Raven Black Coat" */
			return "BREED_SHIRE_RAVENBLACK";
		case 294243421: /* GXTEntry: "Dutch Warmblood - Cremello Gold Coat" */
			return "BREED_BUELL_WARVETS";
		case -997197050: /* GXTEntry: "Thoroughbred - Seal Brown Coat" */
			return "BREED_JOHN_ENDLESSSUMMER";
		case -235714362: /* GXTEntry: "Appaloosa - Blanket Coat" */
			return "BREED_MURFREEBROOD_MANGE_01";
		case -1678164: /* GXTEntry: "Nokota - Blue Roan Coat" */
			return "BREED_MURFREEBROOD_MANGE_02";
		case -977833913: /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */
			return "BREED_MURFREEBROOD_MANGE_03";
		case 1589164943: /* GXTEntry: "Thoroughbred - Silver Bay Coat" */
			return "BREED_WINTER02_01";
		case -1087523615: /* GXTEntry: "American Paint - Splashed White Coat" */
			return "BREED_EAGLEFLIES";
		case -496814209: /* GXTEntry: "Ardennes - Chestnut Coat" */
			return "BREED_GANG_BILL";
		case 2109055751: /* GXTEntry: "Appaloosa - Grey Snowcap Spotted Coat" */
			return "BREED_GANG_CHARLES";
		case -776673611: /* GXTEntry: "Nokota - Grey Roan Sabino Coat" */
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case 1764402253: /* GXTEntry: "Arabian - White Albino Coat" */
			return "BREED_GANG_DUTCH";
		case -1417310078: /* GXTEntry: "Turkoman - Silver Coat" */
			return "BREED_GANG_HOSEA";
		case 1096273915: /* GXTEntry: "American Paint - Grey Overo Coat" */
			return "BREED_GANG_JAVIER";
		case 772751081: /* GXTEntry: "Hungarian Halfbred - Silver Dark Bay Coat" */
			return "BREED_GANG_JOHN";
		case -1140435723: /* GXTEntry: "Nokota - Smoky Black Coat" */
			return "BREED_GANG_KAREN";
		case 2002524329: /* GXTEntry: "Tennessee Walker - Flaxen Roan" */
			return "BREED_GANG_KIERAN";
		case 1151530184: /* GXTEntry: "Mustang - Light Palomino Coat" */
			return "BREED_GANG_LENNY";
		case -1266525037: /* GXTEntry: "Missouri Fox Trotter - Black Coat" */
			return "BREED_GANG_MICAH";
		case -2018137175: /* GXTEntry: "Turkoman - Gold Dapple Coat" */
			return "BREED_GANG_SADIE";
		case -574151692: /* GXTEntry: "Mustang - Dark Bay Roan Coat" */
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case 649786380: /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */
			return "BREED_GANG_SEAN";
		case -1921328920: /* GXTEntry: "Appaloosa - Brown Leopard Coat" */
			return "BREED_GANG_TRELAWNEY";
		case -837607790: /* GXTEntry: "Kentucky Saddler - Sabino Coat" */
			return "BREED_GANG_UNCLE";
		case 370424594: /* GXTEntry: "Appaloosa - Few Spot Buckskin Coat" */
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case -364764277: /* GXTEntry: "Scrawny Nag" */
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

var func_174(char[4] cParam0)
{
	return cParam0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case -59585102: /* GXTEntry: "Tonics Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case 1018123892: /* GXTEntry: "Ingredients Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case 982182330: /* GXTEntry: "Materials Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case -1406390556: /* GXTEntry: "Valuables Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case -1455768246: /* GXTEntry: "Kit Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case -921879912: /* GXTEntry: "Provisions Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

bool func_176(var uParam0, int iParam1)
{
	return func_136(*uParam0, iParam1);
}

void func_177(int iParam0)
{
	func_226(2, iParam0);
}

int func_178(int iParam0)
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

int func_179(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = INVENTORY::_0x13D234A2A3F66E63(iParam0);
	iVar1 = func_182(iParam1);
	uVar2 = func_227(iVar0, iVar1, 1);
	return uVar2;
}

int func_180(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_228(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_181(int iParam0)
{
	return iParam0;
}

int func_182(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_229(&iParam0);
		if (!func_107(iVar0, 0))
		{
			iVar0 = func_230(iParam0);
		}
	}
	else
	{
		iVar0 = func_230(iParam0);
	}
	return iVar0;
}

bool func_183()
{
	return (Global_1939231->f_1 || &Global_1939231 == 1);
}

bool func_184(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

int func_185(int iParam0)
{
	if (iParam0 == Global_1939231->f_37)
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (&Global_1939231->f_10454[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_187(var uParam0)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (uParam0->f_10 == -1)
	{
		return 0;
	}
	return 1;
}

void func_188(var uParam0, int iParam1)
{
	func_231(&(uParam0->f_20), iParam1);
}

void func_189()
{
	func_232(&(Global_1270530->f_1002));
	func_233(0);
	func_233(2);
}

void func_190(var uParam0)
{
	if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

int func_191(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return func_136((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_7, iParam1);
}

int func_192(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_234(35, iParam0);
}

bool func_193(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_3 & 32 != 0;
	}
	return func_235(32, iParam0);
}

bool func_194(int iParam0)
{
	return func_234(1, iParam0);
}

bool func_195(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

float func_196(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

int func_197(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	var uVar2;

	if (fParam2 > fParam3)
	{
		return 0;
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return 0;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(iParam1);
	if (bVar0)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	}
	if (bParam4)
	{
		if ((Global_1070356->f_20209[iParam0 /*18*/])->f_9 == 0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 1f);
			}
			if (PED::_0xB655DB7582AEC805(iVar1) && TASK::_0x6C50B9DCCCA70023(iVar1))
			{
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), 1f);
			}
			else if (PED::IS_PED_IN_COVER(iVar1, 1, 0))
			{
				uVar2 = Global_1901929->f_93.f_13;
			}
			else
			{
				uVar2 = Global_1901929->f_93.f_12;
			}
			return ((func_236(&Global_1275573, iParam0) && PED::_0x5102307CE88798EB(iVar1)) && PED::_0x164CECC59E70DF86(iVar1, uVar2));
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
	return 0;
}

int func_198(var uParam0)
{
	if (*uParam0 == 0)
	{
		*uParam0 = Global_1275573->f_21;
	}
	else if ((Global_1275573->f_21 - *uParam0) < 5)
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 1277358601:
		case 1283453238:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_200()
{
	int iVar0;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_52(65536, 255))
		{
			func_20(65536);
		}
		return 0;
	}
	if (func_52(65536, 255))
	{
		return 1;
	}
	return 0;
}

int func_201(var uParam0, float fParam1)
{
	if (!func_25(uParam0))
	{
		return 0;
	}
	if (func_77(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

var func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_203(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_10;
	}
	return ((*Global_1097610)[iParam0 /*51*/])->f_10;
}

int func_204(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 148;
	}
	else if (iParam1 == 28)
	{
		return 149;
	}
	else if (iParam1 == 29)
	{
		return 150;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 151;
				case 6:
					return 153;
				case 23:
					return 154;
				case 22:
					return 152;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 160;
				case 6:
					return 162;
				case 23:
					return 163;
				case 22:
					return 161;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 22:
					return 169;
				case 6:
					return 170;
				case 23:
					return 171;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 137:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 135:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

bool func_205(int iParam0, int iParam1, int iParam2)
{
	return MISC::IS_BIT_SET((*Global_1257158)[iParam0 /*177*/][iParam1], iParam2);
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	iVar0 = func_237(iParam0);
	if (!func_238(iVar0))
	{
		return 0;
	}
	vVar1 = { (Global_1051388->f_69[iVar0 /*76*/])->f_3 };
	if (iParam0 == 150)
	{
		vVar1 = { func_116(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_24(vVar1))
	{
		return 0;
	}
	if (iVar0 == 10)
	{
		fVar4 = 10f;
		fVar5 = func_239(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return 1;
		}
	}
	else if (iVar0 == 29)
	{
		fVar6 = 70f;
		fVar7 = func_239(iParam1, vVar1, 0);
		if (fVar7 < fVar6)
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_239(iParam1, vVar1, 0) < 75f)
		{
			return 1;
		}
	}
	return 0;
}

struct<7> func_207(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_208(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar22;

	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam0))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar0, 22, &uParam0);
	}
	else
	{
		return 0;
	}
	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam7))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar22, 22, &uParam7);
	}
	else
	{
		return 0;
	}
	if (iVar0 != iVar22)
	{
		return 0;
	}
	return 1;
}

void func_209()
{
	if (func_52(2, 255))
	{
		return;
	}
	func_240(2);
}

int func_210(var uParam0)
{
	struct<4> Var0;

	if ((!PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, -1) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, 0)) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_18, -2))
	{
		return 1;
	}
	if (!PED::_0x608BC6A6AACD5036(&Var0, uParam0->f_18, 4, 2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_3))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3)))
	{
		return 0;
	}
	return 1;
}

void func_211(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_213(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_214()
{
	return -1;
}

int func_215(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam1))
	{
		return 0;
	}
	if (func_140(iVar0, iParam1, 1, 1) > 40f)
	{
		return 0;
	}
	iVar1 = PED::_0xB676EFDA03DADA52(iParam1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_216(int iParam0)
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

int func_217(int iParam0)
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

int func_218(var uParam0)
{
	func_241(&(Global_1903929->f_42));
	if (!func_98(*uParam0, &(Global_1903929->f_42), 1, 0, -1))
	{
		return 0;
	}
	Global_1903929->f_42.f_14 = uParam0->f_11;
	Global_1903929->f_42.f_15 = uParam0->f_22;
	Global_1903929->f_42.f_16 = { uParam0->f_12 };
	Global_1903929->f_42.f_25 = uParam0->f_27;
	Global_1903929->f_42.f_24 = uParam0->f_20;
	func_242(uParam0, &(Global_1903929->f_42.f_24));
	if (!func_243(&(Global_1903929->f_42), 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_219(var uParam0)
{
	struct<24> Var0;

	Var0.f_9 = -1591664384;
	if (!func_98(*uParam0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	Var0.f_14 = uParam0->f_11;
	Var0.f_15 = { uParam0->f_12 };
	func_242(uParam0, &(Var0.f_23));
	return func_244(&Var0, 0, 0);
}

int func_220()
{
	return Global_1572887->f_13;
}

bool func_221(int iParam0)
{
	return func_245(&(Global_1270530->f_11.f_561[iParam0]));
}

char* func_222(int iParam0)
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

var func_223(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_224(var uParam0, int iParam1)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1270530->f_1002[iVar0 /*24*/], uParam0))
			{
			}
			else
			{
				return (Global_1270530->f_1002[iVar0 /*24*/])->f_6;
			}
			iVar0++;
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1270530->f_1002.f_271[iVar0 /*24*/], uParam0))
			{
			}
			else
			{
				return (Global_1270530->f_1002.f_271[iVar0 /*24*/])->f_6;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_225(var uParam0, int iParam1)
{
	if (func_176(uParam0, iParam1))
	{
		return;
	}
	func_246(uParam0, iParam1);
}

void func_226(int iParam0, int iParam1)
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
	if (!NETWORK::_0x255A5EF65EDA9167(Var0.f_1))
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

int func_227(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_107(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_247(iParam0) };
	Var5 = { func_248(iParam0, iParam1, Var0, Var0.f_4) };
	if (INVENTORY::_0xCB5D11F9508A928D(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		return 1;
	}
	return 0;
}

void func_228(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, 1);
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
			func_249(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_250(iParam0, 0);
			bVar0 = true;
		}
		func_251(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_229(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_252(iVar0);
}

int func_230(int iParam0)
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
			iVar0 = func_252(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

void func_231(var uParam0, int iParam1)
{
	if (!func_176(uParam0, iParam1))
	{
		return;
	}
	func_253(uParam0, iParam1);
}

void func_232(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_254((*uParam0)[iVar0 /*24*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_254(uParam0->f_271[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_233(int iParam0)
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
		if (!func_255("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
		{
			return;
		}
	}
	else if (iParam0 == 2)
	{
		Var2 = { func_256(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
		if (!func_257(&Var2, &iVar0, &iVar1, 0))
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
		else if (!func_38(&Var69, iParam0, 0, 0))
		{
		}
		else
		{
			iVar108 = Global_1903929->f_10;
			switch (iVar108)
			{
				case 0:
				case 1:
					if (MISC::_0x375F5870A7B8BEC1(&(Global_1903929->f_12)))
					{
						if (func_166(&Var69, &Var16, 1))
						{
							if (func_243(&Var16, 0, 1))
							{
								Global_1903929->f_12 = { Var16.f_16 };
							}
						}
					}
					break;
				case 2:
					if (MISC::_0x375F5870A7B8BEC1(&(Global_1903929->f_12)))
					{
						if (func_168(&Var69, &Var45, 1))
						{
							if (func_244(&Var45, 0, 1))
							{
								Global_1903929->f_12 = { Var45.f_15 };
							}
						}
					}
					break;
			}
			Var83 = { Var69 };
			Var83.f_4 = Global_1903929->f_11;
			Var83.f_6 = func_112(Global_1903929, 2);
			Var83.f_7 = { Global_1903929->f_12 };
			if (iVar108 == 0 || iVar108 == 1)
			{
				Var83.f_15 = { (Global_1270530->f_1002[iVar107 /*24*/])->f_15 };
				Var83.f_23 = (Global_1270530->f_1002[iVar107 /*24*/])->f_23;
				*(Global_1270530->f_1002[iVar107 /*24*/]) = { Var83 };
			}
			else if (iVar108 == 2)
			{
				Var83.f_15 = { (Global_1270530->f_1002.f_271[iVar107 /*24*/])->f_15 };
				Var83.f_23 = (Global_1270530->f_1002.f_271[iVar107 /*24*/])->f_23;
				*(Global_1270530->f_1002.f_271[iVar107 /*24*/]) = { Var83 };
			}
		}
		iVar107++;
	}
	func_258(iVar0);
}

int func_234(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_259(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_260())
	{
		return func_259(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_259(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_235(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_236(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!&Global_1275573->f_22[iParam0])
	{
		return 0;
	}
	if (!&Global_1275573->f_22[iParam1])
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iParam0])))
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iParam1])))
	{
		return 0;
	}
	return func_261(&(Global_1275573->f_154[iParam0]), &(Global_1275573->f_154[iParam1]));
}

int func_237(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 176))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 149:
			return 28;
		case 150:
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
		case 151:
		case 155:
		case 160:
		case 164:
		case 168:
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
		case 152:
		case 156:
		case 161:
		case 165:
		case 169:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 153:
		case 157:
		case 162:
		case 166:
		case 170:
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
		case 159:
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
		case 172:
			return 19;
		case 173:
			return 20;
		case 174:
			return 21;
		case 12:
		case 60:
			return 18;
		case 148:
			return 34;
		case 154:
		case 158:
		case 163:
		case 167:
		case 171:
			return 23;
		case 175:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		default:
			break;
	}
	return -1;
}

bool func_238(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

float func_239(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_240(int iParam0)
{
	func_226(3, iParam0);
}

void func_241(var uParam0)
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

void func_242(var uParam0, var uParam1)
{
	if (func_112(uParam0, 4))
	{
		func_225(uParam1, 4);
	}
	if (func_112(uParam0, 2))
	{
		func_225(uParam1, 2);
	}
}

int func_243(var uParam0, bool bParam1, bool bParam2)
{
	struct<28> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (MISC::_0x375F5870A7B8BEC1(&(uParam0->f_16)))
	{
		StringCopy(&(uParam0->f_16), func_28(), 64);
	}
	if (func_262(bParam2))
	{
		if (!INVENTORY::_0xD80A8854DB5CFBA5(func_161(bParam2), uParam0, uParam0, 29))
		{
			return 0;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_263(uParam0, 0) };
		Var0.f_16 = { uParam0->f_16 };
		Var0.f_25 = uParam0->f_27;
		Var0.f_26 = uParam0->f_28;
		Var0.f_24 = uParam0->f_25;
		Var0.f_27 = uParam0->f_24;
		if (func_264(joaat("update"), &Var0, bParam1) == -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_244(var uParam0, bool bParam1, bool bParam2)
{
	struct<25> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (func_262(bParam2))
	{
		if (!INVENTORY::_0xD80A8854DB5CFBA5(func_161(bParam2), uParam0, uParam0, 24))
		{
			return 0;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_263(uParam0, 0) };
		Var0.f_16 = { uParam0->f_15 };
		Var0.f_24 = uParam0->f_23;
		if (func_265(joaat("update"), &Var0, bParam1) == -1)
		{
			return 0;
		}
	}
	return 1;
}

bool func_245(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _NAMESPACE71::_0x59FA676177DBE4C9(iParam0) == 4;
}

void func_246(var uParam0, int iParam1)
{
	func_266(uParam0, iParam1);
}

struct<5> func_247(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_248(iParam0, joaat("character"), func_96(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_248(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_107(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

void func_249(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_250(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_251(int iParam0, int iParam1)
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

int func_252(int iParam0)
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
	iVar2 = func_267(iVar0);
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
			iVar6 = func_268(iVar5);
			if (iVar6 != 0)
			{
				return iVar6;
			}
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return -776155824 /* GXTEntry: "Animal Carcass Perfect" */;
		case 1:
			return 1715058708 /* GXTEntry: "Animal Carcass Good Quality" */;
		case 0:
			return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
		default:
			break;
	}
	return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
}

void func_253(var uParam0, int iParam1)
{
	func_269(uParam0, iParam1);
}

void func_254(var uParam0)
{
	*uParam0 = { func_96() };
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
}

int func_255(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_161(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<14> func_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

int func_257(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_161(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0)
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

bool func_259(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_260()
{
	return Global_1099294->f_339;
}

int func_261(int iParam0, int iParam1)
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

int func_262(bool bParam0)
{
	if (func_220() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_161(bParam0));
}

struct<16> func_263(var uParam0, bool bParam1)
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
		Var0.f_15 = func_270(uParam0->f_4, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_96() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_264(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_271(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_272(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_273(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

int func_265(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_272(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_273(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

void func_266(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_267(int iParam0)
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

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return 1908704263 /* GXTEntry: "Good Skinned Alligator Carcass" */;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -2112217546 /* GXTEntry: "Perfect Skinned Alligator Carcass" */;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return -1745255175 /* GXTEntry: "Poor Skinned Alligator Carcass" */;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return -237368063 /* GXTEntry: "Good Skinned Armadillo Carcass" */;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return 1598967299 /* GXTEntry: "Perfect Skinned Armadillo Carcass" */;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return -1809464109 /* GXTEntry: "Poor Skinned Armadillo Carcass" */;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -165201917 /* GXTEntry: "Good Skinned Badger Carcass" */;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 815147738 /* GXTEntry: "Perfect Skinned Badger Carcass" */;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return 1287583539 /* GXTEntry: "Poor Skinned Badger Carcass" */;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return -2126985311 /* GXTEntry: "Good Skinned Beaver Carcass" */;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -1268352491 /* GXTEntry: "Perfect Skinned Beaver Carcass" */;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -1940225526 /* GXTEntry: "Poor Skinned Beaver Carcass" */;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return -212307068 /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return 355421032 /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return 1657729714 /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 1350692346 /* GXTEntry: "Good Skinned Buck Carcass" */;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -257850294 /* GXTEntry: "Perfect Skinned Buck Carcass" */;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return -918541014 /* GXTEntry: "Poor Skinned Buck Carcass" */;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return -947573795 /* GXTEntry: "Good Plucked California Condor Carcass" */;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -2068302756 /* GXTEntry: "Perfect Plucked California Condor Carcass" */;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return 1650829985 /* GXTEntry: "Poor Plucked California Condor Carcass" */;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return -1808044035 /* GXTEntry: "Good Skinned Chicken Carcass" */;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return -1952647655 /* GXTEntry: "Perfect Skinned Chicken Carcass" */;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return 1293221440 /* GXTEntry: "Poor Skinned Chicken Carcass" */;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return -642946194 /* GXTEntry: "Good Plucked Cormorant Carcass" */;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return 819214075 /* GXTEntry: "Perfect Plucked Cormorant Carcass" */;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return -858652427 /* GXTEntry: "Poor Plucked Cormorant Carcass" */;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 395625948 /* GXTEntry: "Good Skinned Cougar Carcass" */;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return -2063800922 /* GXTEntry: "Perfect Skinned Cougar Carcass" */;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return -2117103642 /* GXTEntry: "Poor Skinned Cougar Carcass" */;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return -1583694057 /* GXTEntry: "Good Skinned Coyote Carcass" */;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return -1550918713 /* GXTEntry: "Perfect Skinned Coyote Carcass" */;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 836539658 /* GXTEntry: "Poor Skinned Coyote Carcass" */;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return 773062352 /* GXTEntry: "Good Plucked Crane Carcass" */;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return 1306100270 /* GXTEntry: "Perfect Plucked Crane Carcass" */;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -1063194668 /* GXTEntry: "Poor Plucked Crane Carcass" */;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return 337839068 /* GXTEntry: "Good Skinned Deer Carcass" */;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return -1426520714 /* GXTEntry: "Perfect Skinned Deer Carcass" */;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -1456429189 /* GXTEntry: "Poor Skinned Deer Carcass" */;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -2032809253 /* GXTEntry: "Good Skinned Duck Carcass" */;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return 781728005 /* GXTEntry: "Perfect Skinned Duck Carcass" */;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return 1202409779 /* GXTEntry: "Poor Skinned Duck Carcass" */;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1520877300 /* GXTEntry: "Good Plucked Eagle Carcass" */;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return -1736624361 /* GXTEntry: "Perfect Plucked Eagle Carcass" */;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 719465997 /* GXTEntry: "Poor Plucked Eagle Carcass" */;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return -361486526 /* GXTEntry: "Good Skinned Egret Carcass" */;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return -765274711 /* GXTEntry: "Perfect Skinned Egret Carcass" */;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return -887205673 /* GXTEntry: "Poor Skinned Egret Carcass" */;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return -784020903 /* GXTEntry: "Good Skinned Fox Carcass" */;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -886117938 /* GXTEntry: "Perfect Skinned Fox Carcass" */;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return -1416771220 /* GXTEntry: "Poor Skinned Fox Carcass" */;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 1648676911 /* GXTEntry: "Good Skinned Gila Monster Carcass" */;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return 2103833563 /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return -831636369 /* GXTEntry: "Poor Skinned Gila Monster Carcass" */;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -852290935 /* GXTEntry: "Good Skinned Goat Carcass" */;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return -1870415962 /* GXTEntry: "Perfect Skinned Goat Carcass" */;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -788684109 /* GXTEntry: "Poor Skinned Goat Carcass" */;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return 1416435145 /* GXTEntry: "Good Skinned Goose Carcass" */;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return -1483088274 /* GXTEntry: "Perfect Skinned Goose Carcass" */;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -791867098 /* GXTEntry: "Poor Skinned Goose Carcass" */;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return -1689552552 /* GXTEntry: "Good Plucked Hawk Carcass" */;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return -1850779170 /* GXTEntry: "Perfect Plucked Hawk Carcass" */;
		case 2144711797:
			return -121487803 /* GXTEntry: "Poor Plucked Hawk Carcass" */;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return -1280499288 /* GXTEntry: "Good Skinned Heron Carcass" */;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return 820245961 /* GXTEntry: "Perfect Skinned Heron Carcass" */;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -889526774 /* GXTEntry: "Poor Skinned Heron Carcass" */;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return -521025998 /* GXTEntry: "Good Skinned Iguana Carcass" */;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return 1583031244 /* GXTEntry: "Perfect Skinned Iguana Carcass" */;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -2115599211 /* GXTEntry: "Poor Skinned Iguana Carcass" */;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -767176802 /* GXTEntry: "Good Skinned Loon Carcass" */;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return -750945821 /* GXTEntry: "Perfect Skinned Loon Carcass" */;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return -2135749211 /* GXTEntry: "Poor Skinned Loon Carcass" */;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return 2063108046 /* GXTEntry: "Good Skinned Muskrat Carcass" */;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1299111759 /* GXTEntry: "Perfect Skinned Muskrat Carcass" */;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 1595322723 /* GXTEntry: "Poor Skinned Muskrat Carcass" */;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return 784918835 /* GXTEntry: "Good Skinned Opossum Carcass" */;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return -676310905 /* GXTEntry: "Perfect Skinned Opossum Carcass" */;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return -1719545959 /* GXTEntry: "Poor Skinned Opossum Carcass" */;
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return -2142423934 /* GXTEntry: "Good Plucked Owl Carcass" */;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return 747751566 /* GXTEntry: "Perfect Plucked Owl Carcass" */;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return -1942682403 /* GXTEntry: "Poor Plucked Owl Carcass" */;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1018433784 /* GXTEntry: "Good Skinned Panther Carcass" */;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return -796185392 /* GXTEntry: "Perfect Skinned Panther Carcass" */;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return -49549406 /* GXTEntry: "Poor Skinned Panther Carcass" */;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return 857788498 /* GXTEntry: "Good Plucked Parrot Carcass" */;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return 1223148871 /* GXTEntry: "Perfect Plucked Parrot Carcass" */;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return 939407236 /* GXTEntry: "Poor Plucked Parrot Carcass" */;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return 1608778431 /* GXTEntry: "Good Plucked Pelican Carcass" */;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -2033821082 /* GXTEntry: "Perfect Plucked Pelican Carcass" */;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return -993340234 /* GXTEntry: "Poor Plucked Pelican Carcass" */;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return -1861062075 /* GXTEntry: "Good Skinned Pheasant Carcass" */;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return 1645001514 /* GXTEntry: "Perfect Skinned Pheasant Carcass" */;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return 782371031 /* GXTEntry: "Poor Skinned Pheasant Carcass" */;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 1255529169 /* GXTEntry: "Good Skinned Pig Carcass" */;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return 70898308 /* GXTEntry: "Perfect Skinned Pig Carcass" */;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return -1050350982 /* GXTEntry: "Poor Skinned Pig Carcass" */;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return 581781784 /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return -1363330863 /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return -1780911288 /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return 1018306802 /* GXTEntry: "Good Skinned Pronghorn Carcass" */;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1615521415 /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return -1499066338 /* GXTEntry: "Poor Skinned Pronghorn Carcass" */;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return 1711081908 /* GXTEntry: "Good Skinned Rabbit Carcass" */;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return -164705 /* GXTEntry: "Perfect Skinned Rabbit Carcass" */;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -2044044647 /* GXTEntry: "Poor Skinned Rabbit Carcass" */;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return -859583379 /* GXTEntry: "Good Skinned Raccoon Carcass" */;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return -759504052 /* GXTEntry: "Perfect Skinned Raccoon Carcass" */;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 700225820 /* GXTEntry: "Poor Skinned Raccoon Carcass" */;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return 136458586 /* GXTEntry: "Good Skinned Ram Carcass" */;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return 799105420 /* GXTEntry: "Perfect Skinned Ram Carcass" */;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -481655757 /* GXTEntry: "Poor Skinned Ram Carcass" */;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 484160931 /* GXTEntry: "Good Plucked Raven Carcass" */;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 1010699907 /* GXTEntry: "Perfect Plucked Raven Carcass" */;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return 1550264248 /* GXTEntry: "Poor Plucked Raven Carcass" */;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return -371992731 /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1090294483 /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return -274175035 /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return -1064414912 /* GXTEntry: "Good Skinned Rooster Carcass" */;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return -2091620305 /* GXTEntry: "Perfect Skinned Rooster Carcass" */;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return -468684824 /* GXTEntry: "Poor Skinned Rooster Carcass" */;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return 1668870118 /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return -534004020 /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -2126925270 /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 2008380517 /* GXTEntry: "Good Plucked Seagull Carcass" */;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -510697884 /* GXTEntry: "Perfect Plucked Seagull Carcass" */;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return -955209948 /* GXTEntry: "Poor Plucked Seagull Carcass" */;
		case 2126795269:
			return 1459836898 /* GXTEntry: "Good Skinned Sheep Carcass" */;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return 303969766 /* GXTEntry: "Perfect Skinned Sheep Carcass" */;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return -1707588662 /* GXTEntry: "Poor Skinned Sheep Carcass" */;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return -1224075784 /* GXTEntry: "Good Skinned Skunk Carcass" */;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return -1806671048 /* GXTEntry: "Perfect Skinned Skunk Carcass" */;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return 749765420 /* GXTEntry: "Poor Skinned Skunk Carcass" */;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return 462936163 /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return -8888941 /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 1640227110 /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -1241188722 /* GXTEntry: "Good Skinned Red Boa Carcass" */;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return -1030962659 /* GXTEntry: "Perfect Skinned Red Boa Carcass" */;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return 112552982 /* GXTEntry: "Poor Skinned Red Boa Carcass" */;
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
			return -1599578931 /* GXTEntry: "Good Skinned Copperhead Carcass" */;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
			return 1296331626 /* GXTEntry: "Perfect Skinned Copperhead Carcass" */;
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return -1256398198 /* GXTEntry: "Poor Skinned Copperhead Carcass" */;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return 1297800973 /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return 1772582754 /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -1459876379 /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 1127406863 /* GXTEntry: "Good Skinned Snake Carcass" */;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return 1779996957 /* GXTEntry: "Perfect Skinned Snake Carcass" */;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return 1885306923 /* GXTEntry: "Poor Skinned Snake Carcass" */;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return 1244107697 /* GXTEntry: "Good Skinned Water Snake Carcass" */;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -1201555940 /* GXTEntry: "Perfect Skinned Water Snake Carcass" */;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return -668487833 /* GXTEntry: "Poor Skinned Water Snake Carcass" */;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -1178150148 /* GXTEntry: "Good Skinned Turkey Carcass" */;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return 1171158615 /* GXTEntry: "Perfect Skinned Turkey Carcass" */;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return -2123554124 /* GXTEntry: "Poor Skinned Turkey Carcass" */;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
			return 1806705761 /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 404581836 /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 987197489 /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */;
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
			return -1259715647 /* GXTEntry: "Good Plucked Vulture Carcass" */;
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return -1716717840 /* GXTEntry: "Perfect Plucked Vulture Carcass" */;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
			return -196277007 /* GXTEntry: "Poor Plucked Vulture Carcass" */;
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
			return -2064457926 /* GXTEntry: "Good Skinned Wolf Carcass" */;
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return 561267454 /* GXTEntry: "Perfect Skinned Wolf Carcass" */;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
			return 686253083 /* GXTEntry: "Poor Skinned Wolf Carcass" */;
		default:
			break;
	}
	return 0;
}

void func_269(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_270(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(uParam0, iParam1);
}

int func_271(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_136(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_136(uVar0, 8))
	{
		return 0;
	}
	else if (func_136(uVar0, 16))
	{
		return 0;
	}
	else if (func_136(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_272(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_274(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_274(iParam1, 2, 0, 0);
	return -1;
}

int func_273(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_274(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_274(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_275(iParam0, iParam1, iParam2, iParam3);
}

void func_275(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

